// c++����3
/*
// ָ�������ָ��
����ͨ��ָ��������������������������һ��ָ�������е�һ��Ԫ�ص�ָ��
��������һ��ָ�������е�һ��Ԫ�صĳ���ָ�� �磺double balance[50]; balance ��һ��ָ�� &balance[0] ��ָ�룬������ balance �ĵ�һ��Ԫ�صĵ�ַ

����ĳ���ΰ� p ��ֵΪ balance �ĵ�һ��Ԫ�صĵ�ַ��
double *p;
double balance[10];
p = balance;
*/
#include <iostream>
using namespace std;

int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int *p;
	p = a;
	// ���������ÿ��Ԫ�ص�ֵ
	cout << "ʹ��ָ�������ֵ: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "*(p + " << i << "): " << *(p + i) << endl;
	}
	cout << "ʹ��a������ֵ��" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "*(a + " << i << "): " << *(a + i) << endl;
	}
	return 0;
}