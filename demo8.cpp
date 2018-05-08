// c++�洢��
/*
�洢�ඨ���� C++ �����б���/�����ķ�Χ���ɼ��ԣ����������ڡ���Щ˵�������������������ε�����֮ǰ
C++ �����п��õĴ洢�ࣺauto register extern static mutable thread_local (C++11)
�� C++ 11 ��ʼ��auto �ؼ��ֲ����� C++ �洢��˵�������� register �ؼ��ֱ�����
*/

// auto �洢��
/*
�� C++ 11 ������auto �ؼ������������������������ʱ,���ݳ�ʼ�����ʽ,�Զ��ƶϸñ���������;��������ʱ��������ֵ��ռλ����
���ݳ�ʼ�����ʽ,�Զ��ƶϱ������ı��������ͣ��磺
auto f=3.14;      //double
auto s("hello");  //const char*
auto z = new auto(9); // int*
auto x1 = 5, x2 = 5.0, x3 = 'r';//���󣬱����ǳ�ʼ��Ϊͬһ����
*/

// register �洢��
/*
register �洢�����ڶ���洢�ڼĴ����ж����� RAM �еľֲ�����,����ζ�ű��������ߴ���ڼĴ����Ĵ�С��ͨ����һ���ʣ�
�Ҳ��ܶ���Ӧ��һԪ�� '&' ���������Ϊ��û���ڴ�λ�ã���
register int  miles;
*/

// static �洢��
/*
ʹ�� static ���ξֲ����������ں�������֮�䱣�־ֲ�������ֵ
static ���η�Ҳ����Ӧ����ȫ�ֱ������� static ����ȫ�ֱ���ʱ����ʹ���������������������������ļ��ڡ�
δ����ʼ����ȫ�־�̬�����ᱻ�Զ���ʼ��Ϊ0

static ������ĳ�Ա����:
1). ��̬��Ա������������Ķ��������
2). ���������ж�����һ����̬��Ա
3). �����̬��Ա�ǹ��еģ���ô����ֱ��ͨ����������
4). ��̬��Ա����������ʱ�������ʼ��
5). �ھ�̬��Ա������û��thisָ�룬���Բ���ʹ�÷Ǿ�̬��Ա

#include <iostream>

using namespace std;
class Data
{
public:
Data(){}
~Data(){}
void show()
{
cout <<this->data<<" "<<number<<endl;
}

static void showData()//������Ķ��������
{
//����������õ�ʱ�򲻰���thisָ��
cout <<" "<<number<<endl;
}

private:
int data;
public:
static int number; //��̬������������ʱ�������ʼ��
};
int Data::number=0;//��̬��Ա�����ʼ��

int main()
{
Data::showData();//ͨ������ֱ�ӵ���


Data::number = 100;//ͨ������ֱ��ʹ��
Data d;
d.show();
d.showData();//ͨ���������

cout << "Hello World!" << endl;
return 0;
}
*/
#include <iostream>
 

static int count = 10; /* ȫ�ֱ��� */

// �������� 
void func(void);

// ��������
void func(void)
{
	static int i = 5; // �ֲ���̬����
	i++;
	std::cout << "���� i Ϊ " << i;
	std::cout << " ,���� count Ϊ " << count << std::endl;
}
// �����㲻ʹ��Ԥ���� using namespace std;,��Ҫ���� std::cin ���� std::cout��
/*
cin ���ڴӿ���̨��ȡ�û����룬cout ���ڽ��������������̨��
cin ������������cout ��������������Ƿֱ������ >> �� <<
*/
 
int main()
{
    while(count--)
    {
       func();
    }
    return 0;
}

// extern �洢��
/*
�����ж���ļ��Ҷ�����һ�������������ļ���ʹ�õ�ȫ�ֱ�������ʱ�������������ļ���ʹ�� extern ���õ��Ѷ���ı������������á�
������ô��⣬extern ����������һ���ļ�������һ��ȫ�ֱ���������
��һ���ļ���
#include <iostream>

int count ;
extern void write_extern();

int main()
{
count = 5;
write_extern();
}
�ڶ����ļ���
#include <iostream>

extern int count;

void write_extern(void)
{
std::cout << "Count is " << count << std::endl;
}
������ڶ����ļ��е� extern �ؼ������������Ѿ��ڵ�һ���ļ��ж���� count
*/

// mutable �洢��
/*
mutable ˵��������������Ķ���,mutable ��Ա����ͨ�� const ��Ա�����޸ġ�
*/

// thread_local �洢��
/*
���Խ� thread_local ��Ӧ�������������Ͷ��壬thread_local �������ں����������塣

*/