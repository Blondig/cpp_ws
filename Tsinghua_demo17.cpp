#include <iostream>
using namespace std;
//�������Ķ�����ʹ��

class Clock{
public:
	void setTime(int newH = 0, int newM = 0, int newS = 0);
	void showTime();
private:
	int hour, minute, second;
};

int main(){
	Clock myClock;
	myClock.setTime(10, 14 ,59);
	myClock.showTime();
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