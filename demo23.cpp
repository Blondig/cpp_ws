// ����ָ��
/*
#include <iostream>

using namespace std;

const int MAX = 3;
int main()
{
	int var[MAX] = { 10, 100, 1000 };
	int *ptr;
	ptr = var;
	for (int i = 0; i < MAX; i++)
	{
		cout << "var[" << i << "]��ֵ�ǣ�" << *ptr << endl;
		ptr++;
	}
	return 0;
}
*/
// ָ������
/*
������һ�������������Ҫ������洢ָ�� int �� char �������������͵�ָ�롣������һ��ָ��������ָ�������������
int *ptr[MAX];
������� ptr ����Ϊһ�����飬�� MAX ������ָ����ɡ���ˣ�ptr �е�ÿ��Ԫ�أ�����һ��ָ�� int ֵ��ָ�롣
�����ʵ���õ����������������ǽ��洢��һ��ָ�������У�������ʾ��
*/
#include <iostream>

using namespace std;

const int MAX = 3;
int main()
{
	int var[MAX] = { 10, 100, 2000 };
	int *ptr[MAX]; // ָ������
	for (int i = 0; i < MAX; i++)
	{
		ptr[i] = &var[i];  // ��ֵΪ�����ĵ�ַ
	}
	for (int i = 0; i < MAX; i++)
	{
		cout << "var[" << i << "]��ֵ�ǣ�";
		cout << *ptr[i] << endl;

	}
	return 0;
}
/*
��Ҳ������һ��ָ���ַ���ָ���������洢һ���ַ����б�
#include <iostream>
 
using namespace std;
const int MAX = 4;
 
int main ()
{
 const char *names[MAX] = {
                   "Zara Ali",
                   "Hina Ali",
                   "Nuha Ali",
                   "Sara Ali",
   };
 
   for (int i = 0; i < MAX; i++)
   {
      cout << "Value of names[" << i << "] = ";
      cout << names[i] << endl;
   }
   return 0;
}
*/