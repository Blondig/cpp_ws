#include <iostream>

using namespace std;
unsigned int fac(int n);

int main()
{
	unsigned int m;
	cout << "������һ��������" << "m = ";
	cin >> m;
	cout << "һ�������Ľ׳�: " << fac(m) << endl;
	return 0;
}

// ����n�Ľ׳�
unsigned int fac(int n)
{
	unsigned f;
	if (n == 0)
		f = 1;
	else
		f = n * fac(n - 1);
	return f;
}