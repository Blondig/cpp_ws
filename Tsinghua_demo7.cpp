#include <iostream>
using namespace std;

struct MyTimeDate
{
	unsigned int year;
	unsigned int month;
	unsigned int day;

	unsigned int hour;
	unsigned int min;
	unsigned int sec;
};

int main()
{
	MyTimeDate mytime = { 2018, 7, 8, 16, 06, 57 };  // �ṹ�������ʼ��
	cout << "���������: " << endl;
	cin >> mytime.year;
	cout << "�������·�: " << endl;
	cin >> mytime.month;
	cout << "��������һ��: " << endl;
	cin >> mytime.day;


	cout << "������Сʱ: " << endl;
	cin >> mytime.hour;
	cout << "���������: " << endl;
	cin >> mytime.min;
	cout << "����������: " << endl;
	cin >> mytime.sec;

	cout << "����ʱ����ʾ��";
	cout << mytime.year << "-"
		<< mytime.month << "-"
		<< mytime.day << " "
		<< mytime.hour << ":"
		<< mytime.min << ":"
		<< mytime.sec << endl;
	return 0;
}