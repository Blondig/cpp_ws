#include <iostream>
using namespace std;
// ���캯��:��ÿ�δ�����Ķ���ʱִ�У����캯������������ͬ���������κ����ݣ������Գ�Ա�������ó�ʼֵ
class Line{
public:
	void setLine(double len);
	double getLine();
	Line(); //���캯������
private:
	double length;
};
// ���캯����ʵ��
Line::Line(){
	cout << "�����Ѿ�������!" << endl;
}

void Line::setLine(double len){
	length = len;
}

double Line::getLine(){
	return length;
}

int main(){
	Line line;  // ����һ���µĶ���lineʱ������ִ��Line()�Ĺ��캯��
	line.setLine(6.0);
	cout << "�߶εĳ�����: " << line.getLine() << endl;
	return 0;
}
// �����ǲ��������Ĺ��캯��