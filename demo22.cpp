// C++ ����ָ��
// һ��ָ�����鿪ͷ��ָ�룬����ͨ��ʹ��ָ�����������������������������顣�뿴����ĳ���
/*
#include <iostream>
 
using namespace std;
const int MAX = 3;
 
int main ()
{
   int  var[MAX] = {10, 100, 200};
   int  *ptr;
 
   // ָ���е������ַ
   ptr = var;
   for (int i = 0; i < MAX; i++)
   {
      cout << "var[" << i << "]���ڴ��ַΪ ";
      cout << ptr << endl;
 
      cout << "var[" << i << "] ��ֵΪ ";
      cout << *ptr << endl;
 
      // �ƶ�����һ��λ��
      ptr++;
   }
   return 0;
}
*/
// Ȼ����ָ������鲢������ȫ������
#include <iostream>

using namespace std;
const int MAX = 3;

int main()
{
	int  var[MAX] = { 10, 100, 200 };

	for (int i = 0; i < MAX; i++)
	{
		*(var+2) = 600;
		cout << var[i] << endl;
     // ���ǲ���ȷ�� var++;     
	}
	return 0;
}

