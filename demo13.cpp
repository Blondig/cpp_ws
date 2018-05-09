// ָ�����

/*
�÷����Ѳ����ĵ�ַ���Ƹ���ʽ�������ں����ڣ��õ�ַ���ڷ��ʵ�����Ҫ�õ���ʵ�ʲ�����
����ζ�ţ��޸���ʽ������Ӱ��ʵ�ʲ�����
*/
#include <iostream>
using namespace std;

// ��������
void swap(int *x, int *y);

int main ()
{
   // �ֲ���������
   int a = 100;
   int b = 200;
 
   cout << "����ǰ��a ��ֵ��" << a << endl;
   cout << "����ǰ��b ��ֵ��" << b << endl;

   /* ���ú���������ֵ
    * &a ��ʾָ�� a ��ָ�룬������ a �ĵ�ַ 
    * &b ��ʾָ�� b ��ָ�룬������ b �ĵ�ַ 
    */
   swap(&a, &b);

   cout << "������a ��ֵ��" << a << endl;
   cout << "������b ��ֵ��" << b << endl;
 
   return 0;
}
// ��������
void swap(int *x, int *y)
{
	int temp;
	temp = *x;    /* �����ַ x ��ֵ */
	*x = *y;        /* �� y ��ֵ�� x */
	*y = temp;    /* �� x ��ֵ�� y */

	return;
}
// ���õ���
/*
�÷����Ѳ��������ø��Ƹ���ʽ�������ں����ڣ����������ڷ��ʵ�����Ҫ�õ���ʵ�ʲ�����
����ζ�ţ��޸���ʽ������Ӱ��ʵ�ʲ�����
#include <iostream>
using namespace std;

// ��������
void swap(int &x, int &y);

int main ()
{
   // �ֲ���������
   int a = 100;
   int b = 200;
 
   cout << "����ǰ��a ��ֵ��" << a << endl;
   cout << "����ǰ��b ��ֵ��" << b << endl;

   // ���ú���������ֵ 
   swap(a, b);

   cout << "������a ��ֵ��" << a << endl;
   cout << "������b ��ֵ��" << b << endl;
 
   return 0;
}
// ��������
void swap(int &x, int &y)
{
   int temp;
   temp = x; // �����ַ x ��ֵ 
   x = y;    // �� y ��ֵ�� x 
   y = temp; // �� x ��ֵ�� y  
  
   return;
}
*/
// ������Ĭ��ֵ
/*
���ú���ʱ�����δ���ݲ�����ֵ�����ʹ��Ĭ��ֵ�����ָ����ֵ��������Ĭ��ֵ��ʹ�ô��ݵ�ֵ
#include <iostream>
using namespace std;

int sum(int a, int b);

int main()
{
	int a = 200;
	int b = 300;
	int result;
	result = sum(a, b);
	cout << "result��ֵ�ǣ�" << result << endl;
	result = sum(a);   // ʹ��Ĭ�ϲ���
	cout << "result��ֵ�ǣ�" << result << endl;

	return 0;
}
// ��������
int sum(int a, int b =20)
{
	int result;
	result = a + b;
	return result;
}
*/

// Lambda ��������ʽ
/*
Lambda ���ʽ������ʽ�� [capture](�����б�)->��������{������}
[](int x, int y) -> int { int z = x + y; return z + x; }

[]      // �]�ж����κα�����ʹ��δ�����������������
[x, &y] // x�Դ�ֵ��ʽ���루Ĭ�ϣ���y�����÷�ʽ���롣
[&]     // �κα�ʹ�õ����ⲿ��������ʽ�������÷�ʽ�������á�
[=]     // �κα�ʹ�õ����ⲿ��������ʽ���Դ�ֵ��ʽ�������á�
[&, x]  // x��ʽ���Դ�ֵ��ʽ�������á�������������÷�ʽ�������á�
[=, &z] // z��ʽ�������÷�ʽ�������á���������Դ�ֵ��ʽ�������á�
*/