#include <iostream>

using namespace std;

int main()
{
	int n, right_digit, newnum = 0;
	cout << "������һ������: ";
	cin >> n;
	cout << "���ַ���ߵ����: ";
	do
	{
		right_digit = n % 10;
		cout << right_digit;
		n /= 10;
	} while (n != 0);
	cout << endl;
	return 0;
}