#include <iostream>
// ���캯�����ڶ��󱻴���ʱ�����г�ʼ������
using namespace std;

class Clock{
public:
	Clock(int newH, int newM, int newS); //���캯��������
	Clock(); // Ĭ�Ϲ��캯��
	void setTime(int newH, int newM, int newS);
	void showTime();
private:
	int hour, minute, second;
};

int main(){
	Clock c(0, 0, 0); // ���캯���ĵ���
	Clock c1;   // �޲����Ĺ��캯������
	c.showTime();
	c1.showTime();
	return 0;
}

void Clock::setTime(int newH, int newM, int newS){
	hour = newH;
	minute = newM;
	second = newS;
}

void Clock::showTime(){
	cout << "����ʱ����: ";
	cout << hour << ":" << minute << ":" << second << endl;
}

// ���캯����ʵ��
Clock::Clock(int newH, int newM, int newS): hour(newH), minute(newM), second(newS){
}

// Ĭ�Ϲ��캯����ʵ��
Clock::Clock() : hour(10), minute(10), second(10){
}