// c++�����:  ��������� ��ϵ����� �߼������ λ����� ��ֵ����� ���������



// ���������

/* 
#include <iostream>

int main()
{
	int a = 21;
	int b = 10;
	int c;

	c = a + b;
	std::cout << "Line 1 - c ��ֵ�� " << c << std::endl;
	c = a - b;
	std::cout << "Line 2 - c ��ֵ�� " << c << std::endl;
	c = a * b;
	std::cout << "Line 3 - c ��ֵ�� " << c << std::endl;
	c = a / b;
	std::cout << "Line 4 - c ��ֵ�� " << c << std::endl;
	c = a % b;
	std::cout << "Line 5 - c ��ֵ�� " << c << std::endl;

	int d = 10;   //  �����������Լ�
	c = d++;
	std::cout << "Line 6 - c ��ֵ�� " << c << std::endl;
	std::cout << "Line 6 - d ��ֵ�� " << d << std::endl;

	d = 10;    // ���¸�ֵ
	c = --d;
	std::cout << "Line 7 - c ��ֵ�� " << c << std::endl;
	std::cout << "Line 7 - d ��ֵ�� " << d << std::endl;
	return 0;
}
*/

// ��ϵ�����
/*
== != >= <= > < 
*/

// �߼������
/*
&& || !
*/

// λ�����
/*
& | ^  ~(ȡ��) <<  >>
*/

// ��ֵ�����

/*
= += -= *= /= %=
*/

// ���������
/*
sizeof  sizeof(a) ������ 4������ a ������

#include <iostream>
using namespace std;
int main()
{
	int b;
	int a = 2;
	b = sizeof(a);
	cout << "b��ֵ�ǣ�" << b << endl;
	
	return 0;
}

Condition ? X : Y     ���������  ��� Condition Ϊ�� ? ��ֵΪ X : ����ֵΪ Y

,                     �����������˳��ִ��һϵ�����㡣�������ű��ʽ��ֵ���Զ��ŷָ����б��е����һ�����ʽ��ֵ��
#include <iostream>
using namespace std;

int main()
{
int i, j;

j = 10;
i = (j++, j+100, 999+j);

cout << i;

return 0;
}

.���㣩�� ->����ͷ��  ��Ա��������������ࡢ�ṹ�͹�����ĳ�Ա
struct Employee {
char first_name[16];
int  age;
} emp;
�������Ӧ����ʵ�ʵĶ���,����Ĵ����ֵ "zara" �������� emp �� first_name ��Ա
strcpy(emp.first_name, "zara");

��ͷ�������һ��ָ������ָ��һ��ʹ��
��� p_emp ��һ��ָ�룬ָ������Ϊ Employee �Ķ�����Ҫ��ֵ "zara" �������� emp �� first_name ��Ա
strcpy(p_emp->first_name, "zara");

ע�����ʽṹ��ĳ�Աʱʹ�õ����������ͨ��ָ����ʽṹ��ĳ�Աʱ����ʹ�ü�ͷ�����

Cast  	              ǿ��ת���������һ����������ת��Ϊ��һ���������͡����磬int(2.2000) ������ 2��

&        	          ָ������� & ���ر����ĵ�ַ������ &a; ������������ʵ�ʵ�ַ��
C++ �ṩ������ָ���������һ����ȡ��ַ����� &��һ���Ǽ��Ѱַ����� *
ָ����һ���洢����һ��������ַ�ı�����& ��һԪ����������ز��������ڴ��ַ����� var ��һ�����ͱ������� &var �����ĵ�ַ��&var ����"var �ĵ�ַ"

*                     ָ������� * ָ��һ�����������磬*var; ��ָ����� var��
* ��һԪ����������ز�������ָ����ַ�ı�����ֵ

*/
#include <iostream>

using namespace std;

int main()
{
	int  var;
	int  *ptr;
	int  val;

	var = 3000;

	// ��ȡ var �ĵ�ַ
	ptr = &var;

	// ��ȡ ptr ��ֵ
	val = *ptr;

	cout << "Value of var :" << var << endl;
	cout << "Value of ptr :" << ptr << endl;
	cout << "Value of val :" << val << endl;

	return 0;
}