#include <iostream>
using namespace std;
// ��̬������Ա:����Ѻ�����Ա����Ϊ��̬�ģ��Ϳ��԰Ѻ���������κ��ض��������������
/*
��̬��Ա������ʹ����Ķ��󲻴��ڵ������Ҳ�ܱ����ã���̬����ֻҪʹ�������ӷ�Χ���������::�Ϳ��Է��ʡ�
��̬��Ա����ֻ�ܷ��ʾ�̬��Ա���ݡ�������̬��Ա���������ⲿ������������
*/
class Box{
public:
	static int count;
	Box(double l = 2.0, double w = 2.0, double h = 2.0):length(l), width(w), height(h){
		cout << "���ù��캯��...." << endl;
		count++;
	}
	double volume(){
		return length*width*height;
	}
	// ��̬��Ա��������
	static int getCount(){
		return count;
	}
private:
	double length, width, height;
};

int Box::count = 0; // ��̬���ݳ�Ա��ʼ��

int main(){
	// �ڴ�������֮ǰ������������
	cout << "����ĳ�ʼ����:" << Box::getCount() << endl;
	Box box1(1.0, 2.0, 3.0),box2(3.0, 4.0, 5.0);
	cout << "���ж���ĸ���:" << Box::getCount() << endl;
	return 0;
}

