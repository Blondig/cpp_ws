#include <iostream>

using namespace std;

int fun1(int x, int y);
int fun2(int x1);

int main()
{
	int a, b;
	cout << "�������һ��������" << "a = ";
	cin >> a;
	cout << "������ڶ���������" << "b = ";
	cin >> b;
	cout << "����������ƽ����: " << fun1(a, b) << endl;
	return 0;
}

int fun1(int x, int y)
{
	return fun2(x) + fun2(y);
}

int fun2(int m)
{
	return m * m;
}