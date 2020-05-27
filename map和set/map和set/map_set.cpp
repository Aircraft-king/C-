#include<iostream>
#include<set>
#include<map>
#include<string>
using namespace std;

void test_set() {

	//���鹹��set
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0, 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	set<int> s(arr, arr + sizeof(arr) / sizeof(arr[0]));
	cout << "set�Ĵ�С��" << s.size() << endl;
	//��ӡsetԪ��
	for (auto &e : s) {
		cout << e <<" ";
	}
	cout << endl;
	//ʹ�õ����������ӡ
	for (auto it = s.rbegin(); it != s.rend(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
	//ͳ��Ԫ�س��ִ���
	cout << s.count(3) << endl;
}

void test_map() {
	map<string, string> m;
	m.insert(pair<string, string>("peach", "����"));
	m.insert(make_pair("banana", "�㽶"));
	m["apple"] = "ƻ��";
	cout << m.size() << endl;

	for (auto &e : m) {
		cout << e.first << "---" << e.second << endl;
	}
	cout << endl;
	auto ret = m.insert(make_pair("peach", "��ɫ"));    
	if (ret.second)        
		cout << "<peach, ��ɫ>����map��, �Ѿ�����" << endl;    
	else        
		cout << "��ֵΪpeach��Ԫ���Ѿ����ڣ�" << ret.first->first << "--->" << ret.first->second << " ����ʧ��" << endl;

	// ɾ��keyΪ"apple"��Ԫ��    m.erase("apple");

	if (1 == m.count("apple"))        
		cout << "apple����" << endl;   
	else        
		cout << "apple������" << endl;

}
int main() {
	//test_set();
	test_map();

	return 0;
}