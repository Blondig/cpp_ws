// c++ѭ��
/*
// whileѭ��

ֻҪ����������Ϊ�棬while ѭ�������ظ�ִ��һ��Ŀ����䡣
#include <iostream>
using namespace std;

int main ()
{
// �ֲ���������
int a = 10;

// while ѭ��ִ��
while( a < 20 )
{
cout << "a ��ֵ��" << a << endl;
a++;
}

return 0;
}
*/

// for ѭ��
/*
#include <iostream>
using namespace std;

int main ()
{
// for ѭ��ִ��
for( int a = 10; a < 20; a++)
{
cout << "a ��ֵ��" << a << endl;
}

return 0;
}
*/

// do...while ѭ��
/*
���� for �� while ѭ������������ѭ��ͷ������ѭ��������do...while ѭ������ѭ����β�������������
do...while ѭ����ȷ������ִ��һ��ѭ��

#include <iostream>
using namespace std;

int main ()
{
// �ֲ���������
int a = 10;

// do ѭ��ִ��
do
{
cout << "a ��ֵ��" << a << endl;
a = a++;
}while( a < 20 );

return 0;
}
*/

// Ƕ��ѭ��
/*
#include <iostream>
using namespace std;
 
int main ()
{
    int i, j;
    for(i=2; i<100; i++) {
        for(j=2; j <= (i/j); j++) {
            if(!(i%j)) {
                break; // ����ҵ�����������
            }
        }
        if(j > (i/j)) {
            cout << i << " ������\n";
        }
    }
    return 0;
}
*/
#include <iostream>
using namespace std;

int main()
{
	int i, j;
	for (i = 2; i<100; i++) {
		for (j = 2; j <= (i / j); j++) {
			if (!(i%j)) {
				break; // ����ҵ�����������
			}
		}
		if (j >(i / j)) {
			cout << i << " ������\n";
		}
	}
	return 0;
}

// ѭ���������
/*
break ���             

�� break ��������һ��ѭ����ʱ��ѭ����������ֹ���ҳ�����������ִ�н�����ѭ������һ�����
����������ֹ switch ����е�һ�� case
#include <iostream>
using namespace std;
 
int main ()
{
   // �ֲ���������
   int a = 10;

   // do ѭ��ִ��
   do
   {
       cout << "a ��ֵ��" << a << endl;
       a = a + 1;
       if( a > 15)
       {
          // ��ֹѭ��
          break;
       }
   }while( a < 20 );
 
   return 0;
}
continue ���

continue ��������ǰѭ���еĴ��룬ǿ�ȿ�ʼ��һ��ѭ����

#include <iostream>
using namespace std;
 
int main ()
{
   // �ֲ���������
   int a = 10;

   // do ѭ��ִ��
   do
   {
       if( a == 15)
       {
          // ��������
          a = a + 1;
          continue;
       }
       cout << "a ��ֵ��" << a << endl;
       a = a + 1;
   }while( a < 20 );
 
   return 0;
}
goto ���
goto �������ѿ���������ת�Ƶ�ͬһ�����ڵı���ǵ���䡣
*/
