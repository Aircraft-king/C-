#include<iostream>
#include<string>
using namespace std;

class Fan{
public:
	Fan(int speed,int radius,string color,bool on) : m_speed(speed),
	m_radius(radius),m_color(color),m_on(on){
	}
	void display() {
		cout << "ת�٣�" << m_speed << "  " ;
		cout << "����(1Ϊ����0Ϊ��)��" << m_on << "  " ;
		cout << "�뾶��" << m_radius << "  " ;
		cout<< "��ɫ��" << m_color << endl;
	}
	
private:
	int m_speed;
	bool m_on;
	int m_radius;
	string m_color;
};

int main(){
	Fan f1(3, 10, "yellow", true);
	f1.display();
	Fan f2(2,5,"blue",false);
	f2.display();
	return 0;
} 
