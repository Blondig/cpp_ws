// C++ �ַ���
/*
�ַ���ʵ������ʹ�� null �ַ� '\0' ��ֹ��һά�ַ����顣��ˣ�һ���� null ��β���ַ���������������ַ������ַ���

char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
�����������ĩβ�洢�˿��ַ��������ַ�����Ĵ�С�ȵ��� "Hello" ���ַ�����һ��
#include <iostream>

using namespace std;

int main()
{
char a[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };
cout << "a��ֵ�ǣ�";
cout << a << endl;
return 0;
}

// C++ ���д����ĺ������������� null ��β���ַ���
strcpy(s1, s2);  �����ַ��� s2 ���ַ��� s1
strcat(s1, s2);  �����ַ��� s2 ���ַ��� s1 ��ĩβ��
strlen(s1);		 �����ַ��� s1 �ĳ��ȡ�
strcmp(s1, s2);  ��� s1 �� s2 ����ͬ�ģ��򷵻� 0����� s1<s2 �򷵻�ֵС�� 0����� s1>s2 �򷵻�ֵ���� 0��
strchr(s1, ch);  ����һ��ָ�룬ָ���ַ��� s1 ���ַ� ch �ĵ�һ�γ��ֵ�λ�á�
strstr(s1, s2);  ����һ��ָ�룬ָ���ַ��� s1 ���ַ��� s2 �ĵ�һ�γ��ֵ�λ��

#include <iostream>
#include <cstring>
 
using namespace std;
 
int main ()
{
   char str1[11] = "Hello";
   char str2[11] = "World";
   char str3[11];
   int  len ;
 
   // ���� str1 �� str3
   strcpy( str3, str1);
   cout << "strcpy( str3, str1) : " << str3 << endl;
 
   // ���� str1 �� str2
   strcat( str1, str2);
   cout << "strcat( str1, str2): " << str1 << endl;
 
   // ���Ӻ�str1 ���ܳ���
   len = strlen(str1);
   cout << "strlen(str1) : " << len << endl;
 
   return 0;
}

*/
// C++ �е� String ��
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1 = "Hello";
	string str2 = " World";
	string str3;
	int  len;
	// append()���ַ�����ĩβ����ַ�
	str1.append(" xxoo");
	cout << "str1: " << str1;
	// ���� str1 �� str3
	str3 = str1;
	cout << "str3 : " << str3 << endl;

	// ���� str1 �� str2
	str3 = str1 + str2;
	cout << "str1 + str2 : " << str3 << endl;

	// ���Ӻ�str3 ���ܳ���
	len = str3.size();
	cout << "str3.size() :  " << len << endl;
	return 0;
}

