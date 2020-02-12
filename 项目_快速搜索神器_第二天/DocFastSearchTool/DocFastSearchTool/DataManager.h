#pragma once
#include"Common.h"
#include"./sqlite/sqlite3.h"

//���ݿ�sqlite ��װ
class SqliteManager
{
public :
	SqliteManager();
	~SqliteManager();
public:
	//�����ݿ�
	void Open(const std::string& path);
	//�ر����ݿ�
	void Close();
	//ִ��sql���
	void ExecuteSql(const std::string& sql);
	//��ȡ����
	void GetTable(const std::string& sql, int& row, int& col, char**&ppRet);
public:
	//c++11
	//���������ݿ������п�������
	SqliteManager(const SqliteManager&) = delete; 
	//���������ݿ������и�ֵ
	SqliteManager& operator=(const SqliteManager&) = delete; 
private:
	sqlite3* m_db; // ���ݿ����
};
