#include"ScanManager.h"

ScanManager::ScanManager(){}

ScanManager& ScanManager::CreateInstance(const string &path) {
	static ScanManager inst;
	thread scan_thread(&StartScan,&inst,path);
	//�̷߳���
	scan_thread.detach();
	return inst; 
}

void ScanManager::StartScan(const string&path) {
	while (1) {
		ScanDirectory(path);
		this_thread::sleep_for(chrono::seconds(2)); //bug
	}
}


void ScanManager::ScanDirectory(const string &path) {
	
	//ɨ�豾���ļ�
	vector<string> local_files;
	vector<string> local_dirs;
	DirectoryList(path,local_files,local_dirs);
	set<string> local_set;
	local_set.insert(local_files.begin(), local_files.end());
	local_set.insert(local_dirs.begin(), local_dirs.end());

	DataManager &m_db = DataManager::CreateInstance();

	//ɨ�����ݿ��ļ�
	set<string> db_set;

	m_db.GetDocs(path, db_set);

	//�ļ��Ա�
	auto local_it = local_set.begin();
	auto db_it = db_set.begin();
	while (local_it != local_set.end() && db_it != db_set.end()) {
		if (*local_it < *db_it) {
			m_db.InsertDoc(path, *local_it);
			++local_it;
		}
		else if (*local_it > *db_it) {
			m_db.DeleteDoc(path, *db_it);
			++db_it;
		}
		else {
			++local_it;
			++db_it;
		}
	}

	while (local_it != local_set.end()) {
		m_db.InsertDoc(path, *local_it);
		++local_it;
	}
	while (db_it != db_set.end()) {
		m_db.DeleteDoc(path, *db_it);
		++db_it;
	}
	for (auto &dir : local_dirs)
	{
		
		string dir_path = path;
		dir_path += '\\';
		dir_path += dir;

		ScanDirectory(dir_path);
	}
}