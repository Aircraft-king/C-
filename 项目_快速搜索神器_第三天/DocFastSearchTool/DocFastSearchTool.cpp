#include"Common.h"
#include"Sysutil.h"

void TestDirectoryList() {

	string path = "E:\\����\\���������ĵ�����";
	vector<string> subfile, subdir;
	DirectoryList(path, subfile, subdir);

}

int main() {

	TestDirectoryList();

	return 0;
}