// C++ ָ��
/*
ÿһ����������һ���ڴ�λ�ã�ÿһ���ڴ�λ�ö���ʹ�����ֺţ�&����������ʵĵ�ַ������ʾ�������ڴ��е�һ����ַ

#include <iostream>
using namespace std;

int main()
{
	int var = 3;
	int vb[3] = { 1, 2, 3 };
	cout << "����var�ĵ�ַ��" << &var << endl;
	cout << "����vb�ĵ�ַ��" << &vb << endl;
	return 0;
}
*/
// ʲô��ָ�룿
/*
ָ����һ����������ֵΪ��һ�������ĵ�ַ
ָ�����������һ����ʽΪ��ָ��Ļ����� *������
int    *ip; //  һ�����͵�ָ��
double *dp; //  һ�� double �͵�ָ��
char   *ch; //  һ���ַ��͵�ָ��
*/

// C++ ��ʹ��ָ��
/*
ʹ��ָ��ʱ��Ƶ���������¼�������������һ��ָ��������ѱ�����ַ��ֵ��ָ�롢����ָ������п��õ�ַ��ֵ��
��Щ��ͨ��ʹ��һԪ����� * ������λ�ڲ�������ָ����ַ�ı�����ֵ
#include <iostream>
using namespace std;
int main()
{
	int var = 10;
	int *p;
	p = &var;
	cout << "var��ֵ�ǣ�" << var << endl;
	cout << "ָ�����p�д洢var�ĵ�ַ�ǣ�" << p << endl;
	cout << "����ָ�����p�д洢�ĵ�ַ��ֵ��" << *p << endl;
	return 0;
}
*/
// C++ ָ�����
/*
1.C++ Null ָ��
�ڱ���������ʱ�����û��ȷ�еĵ�ַ���Ը�ֵ��Ϊָ�������һ�� NULL ֵ��һ�����õı��ϰ�ߡ���Ϊ NULL ֵ��ָ�뱻��Ϊ��ָ�롣
#include <iostream>
using namespace std;
int main()
{
	int *p = NULL;
	cout << "����p��ֵ��" << p << endl;
	return 0;
}
2.C++ ָ�����������
ָ����һ������ֵ��ʾ�ĵ�ַ����ˣ������Զ�ָ��ִ���������㡣���Զ�ָ����������������㣺++��--��+��-
// ����һ��ָ��
#include <iostream>

using namespace std;

int main()
{
	int a[3] = { 1, 10, 100 };
	int *ptr;
	ptr = a;  // ��������׵�ַ����������ֵ��ptr
	for (int i = 0; i < 3; i++)
	{
		cout << "a[" << i << "]" << "�ĵ�ַ�ǣ�" << ptr << endl;
		cout << "a[" << i << "]" << "��ֵ�ǣ�" << *ptr << endl;
		ptr++;  // �ƶ�����һ��λ��
	}
	return 0;
}
// �ݼ�һ��ָ��
#include <iostream>

using namespace std;
const int MAX = 3;

int main ()
{
   int  var[MAX] = {10, 100, 200};
   int  *ptr;

   // ָ�������һ��Ԫ�صĵ�ַ
   ptr = &var[MAX-1];
   for (int i = MAX; i > 0; i--)
   {
      cout << "Address of var[" << i << "] = ";
      cout << ptr << endl;

      cout << "Value of var[" << i << "] = ";
      cout << *ptr << endl;

      // �ƶ�����һ��λ��
      ptr--;
   }
   return 0;
}
*/

// ָ��ıȽ�
/*
ָ������ù�ϵ��������бȽϣ��� ==��< �� >��
��� p1 �� p2 ָ��������صı���������ͬһ�������еĲ�ͬԪ�أ���ɶ� p1 �� p2 ���д�С�Ƚϡ�
��������һ��Ԫ�صĵ�ַ &var[MAX - 1]
*/
#include <iostream>

using namespace std;
const int MAX = 3;

int main()
{
	int var[MAX] = { 10, 100, 1000 };
	int *ptr;
	ptr = var;
	int i = 0;
	while (ptr <= &var[MAX - 1]) // ָ��ıȽ�
	{
		cout << "var[" << i << "]�ĵ�ַ�ǣ�" << ptr << endl;
		cout << "var[" << i << "]��ֵ�ǣ�" << *ptr << endl;
		ptr++;
		i++;
	}
	return 0;
}

