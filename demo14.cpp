// c++����
/*
#include <iostream>
using namespace std;
 
int main ()
{
   // ���ֶ���
   short  s;
   int    i;
   long   l;
   float  f;
   double d;
   
   // ���ָ�ֵ
   s = 10;      
   i = 1000;    
   l = 1000000; 
   f = 230.47;  
   d = 30949.374;
   
   // �������
   cout << "short  s :" << s << endl;
   cout << "int    i :" << i << endl;
   cout << "long   l :" << l << endl;
   cout << "float  f :" << f << endl;
   cout << "double d :" << d << endl;
 
   return 0;
}
*/

// C++ ��ѧ����
/*
�� C++ �У����˿��Դ������ֺ������������˸������õĺ�������ʹ�á���Щ����д�ڱ�׼ C �� C++ ���У��������ú�����
Ϊ��������Щ����������Ҫ������ѧͷ�ļ� <cmath>
double floor(double);   �ú�������һ��С�ڻ���ڴ���������������
double ceil(double);   �ú�������һ�����ڻ���ڴ���������������
double fabs(double);    �ú�����������һ��ʮ�������ľ���ֵ��
double cos(double);     �ú������ػ��Ƚǣ�double �ͣ������ҡ�
double hypot(double, double);   �ú�����������������ƽ���ܺ͵�ƽ������Ҳ����˵������Ϊһ��ֱ�������ε�����ֱ�Ǳߣ������᷵��б�ߵĳ���
*/
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	// ���ֶ���
	short i = 10;
	int j = -1000;
	long k = 100000;
	float l = 234.5;
	double m = -35.678;
	// ��ѧ����
	cout << "sin(m)��ֵ�ǣ�" << sin(m) << endl;
	cout << "floor(m)��ֵ�ǣ�" << floor(m) << endl;
	cout << "ceil(l)��ֵ�ǣ�" << ceil(l) << endl;
	cout << "abs(m)��ֵ�ǣ�" << abs(m) << endl;
	cout << "pow(i,2)��ֵ�ǣ�" << pow(i,2) << endl;
}
// C++ �����
/*
�������������������������صĺ�����һ���� rand()���ú���ֻ����һ��α����������������֮ǰ�����ȵ��� srand() ������
#include <iostream>
#include <ctime>   // �õ���time����������Ҫ�����ͷ�ļ�
#include <cstdlib>
 
using namespace std;
 
int main ()
{
   int i,j;
 
   // ��������
   srand( (unsigned)time( NULL ) );
 
   // ���� 10 ������� 
   for( i = 0; i < 10; i++ )
   {
      // ����ʵ�ʵ������
      j= rand();
      cout <<"������� " << j << endl;
   }
 
   return 0;
}
*/