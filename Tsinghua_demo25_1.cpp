#include <iostream>
using namespace std;

class Clock{
public:
	void setTime(int newH, int newM, int newS);
	void showTime();
	// ��Ĭ�ϲ������������캯��
	Clock(int newH = 23, int newM = 54, int newS = 59){
		hour = newH;
		minute = newM;
		second = newS;
	} 
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

int main(){
	Clock myclock(12);
	myclock.showTime();
	return 0;
}