#include <iostream>

using namespace std;

// ������������
void fun1();
int x = 1, y = 2;  // ȫ��������,ȫ�ֱ���

int main(){
	cout << "��ʼ...." << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "��ӡmain()�����е�x,y��ֵ: " << endl;
	int x = 10, y = 20;  // �����Ŀɼ���:�ֲ�������ȫ������ͬ�����ڲ�ֲ�����������ȫ�ֱ���
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "����fun1()����..." << endl;
	fun1();
	cout << "����main()����..." << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	return 0;
}

void fun1(){
	int y = 200;  // �ֲ�����y��ȫ�ֱ���yͬ������������ȫ�ֱ���y��ֵ
	cout << "x = " << x << endl;  // ���ȫ�ֱ����е�x
	cout << "y = " << y << endl;
}