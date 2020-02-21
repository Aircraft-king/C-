#pragma once
#include"Common.h"
#include"Sysutil.h"
#include"./sqlite/sqlite3.h"

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
	void GetResTable(const std::string& sql, int& row, int& col, char**&ppRet);
public:
	SqliteManager(const SqliteManager&) = delete;
	SqliteManager& operator=(const SqliteManager&) = delete;
private:
	sqlite3* m_db;
};


///////////////////////////////////////////////////////////////////////
//�Զ���ȡ������  
class AutoGetResTable
{
public:
	AutoGetResTable(SqliteManager *db, const string &sql, int &row, int &col, char **&ppRet);
	~AutoGetResTable();
public:
	AutoGetResTable(const AutoGetResTable &) = delete;
	AutoGetResTable& operator=(const AutoGetResTable &) = delete;
private:
	SqliteManager *m_db;
	char         **m_ppRet;
};

////////////////////////////////////////////////////////////////////////

#define DOC_DB     "doc.db"
#define DOC_TABLE  "doc_tb"

//���ݿ����ģ��
class DataManager
{
public:
	static DataManager& CreateInstance(); 
public:
	~DataManager();
public:
	void InitSqlite();
public:
	//�����ݿ��ȡ����
	void GetDocs(const string &path, set<string>& docs);
	//�����ݿ�����ĵ�
	void InsertDoc(const string &path, string doc);
	//�����ݿ�ɾ���ĵ�
	void DeleteDoc(const string &path, string doc);
public:
	//
	static void SplitHightLight(const string &str, const string &key, string &prefix, string &HightLight, string &suffix);
	void Search(const string &key, vector<pair<string, string>> &doc_path);
private:
	DataManager();
private:
	SqliteManager m_dbmgr;
};
