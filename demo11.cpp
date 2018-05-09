// c++�ж�


// if���
/*
һ�� if ��� ��һ���������ʽ���һ�����������ɡ�

#include <iostream>
using namespace std;
 
int main ()
{
   // �ֲ���������
   int a = 10;
 
   // ʹ�� if ����鲼������
   if( a < 20 )
   {
       // �������Ϊ�棬�������������
       cout << "a С�� 20" << endl;
   }
   cout << "a ��ֵ�� " << a << endl;
 
   return 0;
}
*/

// if...else ���
/*
һ�� if ��� ��ɸ�һ����ѡ�� else ��䣬else ����ڲ������ʽΪ��ʱִ�С�

#include <iostream>
using namespace std;
 
int main ()
{
   // �ֲ���������
   int a = 100;
 
   // ��鲼������
   if( a < 20 )
   {
       // �������Ϊ�棬�������������
       cout << "a С�� 20" << endl;
   }
   else
   {
       // �������Ϊ�٣��������������
       cout << "a ���� 20" << endl;
   }
   cout << "a ��ֵ�� " << a << endl;
 
   return 0;
}
*/

// Ƕ�� if ���

/*
������һ�� if �� else if �����ʹ����һ�� if �� else if ���

#include <iostream>
using namespace std;
 
int main ()
{
   // �ֲ���������
   int a = 100;
   int b = 200;
 
   // ��鲼������
   if( a == 100 )
   {
       // �������Ϊ�棬�������������
       if( b == 200 )
       {
          // �������Ϊ�棬�������������
          cout << "a ��ֵ�� 100���� b ��ֵ�� 200" << endl;
       }
   }
   cout << "a ��׼ȷֵ�� " << a << endl;
   cout << "b ��׼ȷֵ�� " << b << endl;
 
   return 0;
}
*/

// switch���
/*
һ�� switch ����������һ���������ڶ��ֵʱ�������ÿ��ֵ��Ϊһ�� case���ұ����Եı������ÿ�� switch case ���м�顣
#include <iostream>
using namespace std;
 
int main ()
{
   // �ֲ���������
   char grade = 'D';
 
   switch(grade)
   {
   case 'A' :
      cout << "�ܰ���" << endl; 
      break;
   case 'B' :
   case 'C' :
      cout << "���ú�" << endl;
      break;
   case 'D' :
      cout << "��ͨ����" << endl;
      break;
   case 'F' :
      cout << "�������һ��" << endl;
      break;
   default :
      cout << "��Ч�ĳɼ�" << endl;
   }
   cout << "���ĳɼ��� " << grade << endl;
 
   return 0;
}
*/

// switch���Ƕ��
/*
������һ�� switch �����ʹ����һ�� switch ��䡣��ʹ�ڲ����ⲿ switch �� case ����������ͬ��ֵ��Ҳû��ì�ܡ�
*/
#include <iostream>
using namespace std;

int main()
{
	// �ֲ���������
	int a = 100;
	int b = 200;

	switch (a) {
	case 100:
		cout << "�����ⲿ switch ��һ����" << endl;
		switch (b) {
		case 200:
			cout << "�����ڲ� switch ��һ����" << endl;
		}
	}
	cout << "a ��׼ȷֵ�� " << a << endl;
	cout << "b ��׼ȷֵ�� " << b << endl;

	return 0;
}

// ? : �����

/*
Exp1 ? Exp2 : Exp3;
? : ���ʽ��ֵȡ���� Exp1 �ļ�������
��� Exp1 Ϊ�棬����� Exp2 ��ֵ���� Exp2 �ļ�������Ϊ���� ? : ���ʽ��ֵ��
��� Exp1 Ϊ�٣������ Exp3 ��ֵ���� Exp3 �ļ�������Ϊ���� ? : ���ʽ��ֵ��
#include <iostream>
using namespace std;
 
int main ()
{
   // �ֲ���������
   int x, y = 10;

   x = (y < 10) ? 30 : 40;

   cout << "value of x: " << x << endl;
 
   return 0;
}
*/
