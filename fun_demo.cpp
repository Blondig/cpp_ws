// ��������ʱ��ʵ����Ϊ�������ݸ��β������ַ���
/*
// 1��ֵ����
#include <iostream>
using namespace std;

int add(int x, int y);

int main()
{
	int a, b, c;
	cout << "������a,b��ֵ��" << endl;
	cin >> a >> b;
	c = add(a, b);
	cout << "c��ֵ�ǣ�" << c << endl;
	cout << "a��ֵ�ǣ�" << a << endl;
	cout << "b��ֵ�ǣ�" << b << endl;
	return 0;

}

int add(int x, int y)
{
	int z,t;
	t = x;
	x = y;
	y = t;
	z = x + y;
	return z;
}
*/

// ����ַ��ʽ���ݣ���ַ��ָ�롢���飩
#include <iostream>

using namespace std;

int cst(char *p);

int main()
{
	char str[100];
	int z;
	cout << "�����ַ���Ϊ��" << endl;
	cin >> str;
	z = cst(str);
	cout << "z��ֵ�ǣ�" << z << endl;
	return 0;
}

int cst(char *p)
{
	int sum = 0;
	while (*p)
	{
		int t;
		sum = sum * 10;
		t = *p - '0';
		sum = sum + t;
		p++;
	}
	return sum;
}
// 3�����÷�ʽ���ݲ���
/*
#include <iostream>
using namespace std;

void swap(int &a, int &b);

int main()
{
int x, y;
cout << "x�ĳ�ʼֵ�ǣ�" << endl;
cin >> x;
cout << "y�ĳ�ʼֵ�ǣ�" << endl;
cin >> y;
swap(x, y);
cout << "x�ĳ�ʼֵ�ǣ�" << x << endl;
cout << "y�ĳ�ʼֵ�ǣ�" << y << endl;
return 0;

}

void swap(int &a, int &b)
{
int temp;
temp = a;
a = b;
b = temp;
}
*/