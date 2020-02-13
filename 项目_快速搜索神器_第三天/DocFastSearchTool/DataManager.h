#pragma once
#include"Common.h"
#include"Sysutil.h"
#include"sqlite/sqlite3.h"

//���ݿ��װ
class SqliteManager {
public:
	SqliteManager();
	~SqliteManager();
public:
	//�����ݿ�
	void Open(const std::string& path);
	void Close();
	void ExecuteSql(const std::string& sql);
	void GetTable(const std::string& sql, int& row, int& col, char**&ppRet);
public:
	SqliteManager(const SqliteManager&) = delete;
	SqliteManager& operator=(const SqliteManager&) = delete;
private:
	sqlite3* m_db;
};

#define DOC_DB        "doc.db"
#define DOC_TABLE  "doc_tb"

class DataManager {
public:
	DataManager();
	~DataManager();
public:
	void InitSqlite();
public:
	//�����ݿ��ȡ����
	void GetDocs(const string &path, set<string>& docs);
	//�����ݿ�����ĵ�
	void InsertDoc(const string &path, string doc);
	//�����ݿ�ɾ���ĵ�
	void DeleteDoc(const string& path, string doc);
public:
	void Search(const string &key, vector<pair<string, string>>& doc_path);
private:
	SqliteManager m_dbmgr;

};