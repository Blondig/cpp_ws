/*
#include <iostream>

using namespace std;

int main()
{
	int i = 5;
	double k = 4.5;
	cout << "i��ֵ�ǣ�" << i << endl;
	cout << "i�ĵ�ַ�ǣ�" << &i << endl;
	cout << "k��ֵ�ǣ�" << k << endl;
	cout << "k�ĵ�ַ��: " << &k << endl;
	return 0;

}
*/

// ָ���ʹ��
/*
#include <iostream>

using namespace std;

int main()
{
int a = 6;
int *p;  // ָ�����������
p = &a;
cout << "a��ֵ�ǣ�" << a ;
cout << ", *p��ֵ�ǣ�" << *p << endl;
*p += 1;
cout << "*p�ĸ���ֵ�ǣ�" << *p << endl;
return 0;

}
// ָ�����*p�����a�ȼۣ�����p��ʾ����a�ĵ�ַ����*����������a������ֵ
*/

#include <iostream>

using namespace std;
int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int *var = a;
	cout << "a[0]��ֵ�ǣ�" << a[0] << endl;
	cout << "*var��ֵ��: " << *var << endl;
	var = &a[2];
	cout << "*var��ֵ�ǣ�" << *var << endl;
	var = var + 1;
	cout << "*var��ֵ�ǣ�" << *var << endl;
	return 0;

}


