#include <iostream>
using namespace std;

class Clock{
public:
	void setTime(int newH, int newM, int newS);
	void showTime();
	Clock(int newH, int newM, int newS);  // ���캯������
	Clock();							 // ��Ĭ�ϲ����Ĺ��캯������
private:
	int hour;
	int minute;
	int second;
};

void Clock::setTime(int newH, int newM, int newS){
	hour = newH;
	minute = newM;
	second = newS;
}

void Clock::showTime(){
	cout << "����ʱ����: ";
	cout << hour << ":" << minute << ":" << second << endl;
}

// ���캯��ʵ��1
Clock::Clock(int newH, int newM, int newS) : hour(newH), minute(newM), second(newS){ 
	cout << "���캯����ʵ�ֹ���1" << endl;
}

// ���캯��ʵ��2
Clock::Clock(): hour(0), minute(23), second(221){
	cout << "��Ĭ�ϲ����Ĺ��캯��ʵ��\n";
}

int main(){
	Clock myclock(10, 12, 0);
	myclock.showTime();

	Clock c;
	c.showTime();

	myclock.setTime(0, 0, 0);
	myclock.showTime();
	return 0;
}