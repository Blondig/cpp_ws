// c++����4
// �������������
/*
����ͨ��ָ��������������������������������һ��ָ�������ָ��
C++ ��һ����������������������Զ�ת��Ϊָ�����ͣ��������ʵ���ǵ�ַ

�����Ҫ�ں����д���һ��һά������Ϊ���������������������ַ�ʽ������������ʽ����
������������ʽ�Ľ����һ���ģ���Ϊÿ�ַ�ʽ������߱�������Ҫ����һ������ָ�롣
ͬ���أ���Ҳ���Դ���һ����ά������Ϊ��ʽ����

// ��ʽ1
��ʽ������һ��ָ�룺
void myFunction(int *param)
{
.
.
.
}

// ��ʽ2
��ʽ������һ���Ѷ����С�����飺
void myFunction(int param[10])
{
.
.
.
}

//��ʽ3
��ʽ������һ��δ�����С�����飺
void myFunction(int param[])
{
.
.
.
}
*/
#include <iostream>
using namespace std;

// ��������
double getAverage(int arr[], int size);

int main()
{
	// ���� 5 ��Ԫ�ص���������
	int balance[5] = { 1000, 2, 3, 17, 50 };
	double avg;

	// ����һ��ָ�������ָ����Ϊ����
	avg = getAverage(balance, 5);

	// �������ֵ
	cout << "ƽ��ֵ�ǣ�" << avg << endl;

	return 0;
}

// ��������
double getAverage(int arr[], int size)
{
	int    i, sum = 0;
	double avg;

	for (i = 0; i < size; ++i)
	{
		sum += arr[i];
	}

	avg = double(sum) / size;

	return avg;
}
