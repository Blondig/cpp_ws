#include <iostream>
using namespace std;
// ��ľ�̬���ݳ�Ա
/*������������ĳ�ԱΪ��̬ʱ������ζ�����۴������ٸ���Ķ��󣬾�̬��Ա��ֻ��һ��������*/
class Box{
public:
	static int count;  // ����һ����̬���ݳ�Ա
	Box(double l = 2.0, double w = 2.0, double h = 2.0):length(l), width(w), height(h){
		cout << "���ù��캯��...." << endl;
		count++;
	}
	double volume();
private:
	double length;
	double width;
	double height;
};
// �����ʼ����̬���ݳ�Ա
int Box::count = 0;

int main(){
	Box box1(1.5, 2.0, 3.0);
	Box box2(2.0, 3.0, 10.2);
	cout << "�������ĸ���:" << Box::count << endl;
	return 0;
}

double Box::volume(){
	return length * width * height;
}


