#include <iostream>
using namespace std;

// ��������
extern int a, b;
extern int c;
extern float f;

int main()
{
	// ��������
	int a, b;
	int c;
	float f;

	// ʵ�ʳ�ʼ��
	a = 10;
	b = 20;
	c = a + b;

	cout << c << endl;

	f = 70.0 / 3.0;
	cout << f << endl;

	return 0;
}
/*
���������ƿ�������ĸ�����ֺ��»����ַ���ɡ�����������ĸ���»��߿�ͷ����д��ĸ��Сд��ĸ�ǲ�ͬ�ģ���Ϊ C++ �Ǵ�Сд���е�
��������: int    i, j, k;
������ʼ��: int d = 3, f = 5; 
��������: extern int a, b;
*/

// �ں�������ʱ���ṩһ������������������ʵ�ʶ�����������κεط�����
/*
��������
int func();

int main()
{
��������
int i = func();
}

��������
int func()
{
return 0;
}
*/