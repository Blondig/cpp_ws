#include "iostream"
#include "string"
#include "limits"
#include "stdio.h"


using namespace std;



#define f(x)  x*x  // �궨��


// 1 typedefִ��ʱ�䲻ͬ
typedef unsigned int UINT;
void func(){
    // UINT value = "abc";  ���ͼ�⣬������
    // cout << value << endl;
}

// 2 ������ͬ

// ���������
void func1(){
    #define HW "helloworld"
}

void func2(){
    string str = HW;
    cout << str << endl;
}
// typedef��������

void func3(){
    typedef unsigned int UINT;
}

void func4(){
    // UNIT uvalue = 5;  ����
}


class A{
    typedef unsigned int UINT;
    UINT uvalueA;
    A(): uvalueA(0){}
};

class B{
    // UINT uvalueB;  ����
};
// ��B����ʹ��UINT�������ΪUINTֻ����A���������С�
// ���⣬��������typedef��������ͱ�����������Ӧ�ķ���Ȩ��

class AA{
    typedef unsigned int UINT;
    UINT valueA;
    AA(): valueA(0){}
};

void func5(){
    // AA::UINT i = 1;������typedefǰ����publicȨ�������
}

// 3 ��ָ��Ĳ���---��������ָ������ʱ�����ò�ͬ
typedef int* pint;
#define PINT int*


int i1 = 1, i2 = 2;
const pint p1 = &i1;  // �ȼ���int * const p;ָ�볣��:ָ��p��һ������,p���ɸ��ģ�pָ������ݿ��Ը���
const PINT p2 = &i2;  // �ȼ���const int *p/int const *p��p���Ը��ģ�pָ������ݲ��ɸ��ģ�����ָ��

pint s1, s2;  // s1 �� s2����int����ָ��
PINT s3, s4;  // �൱�� int * s3, s4;ֻ��һ����ָ��

void TestPointer(){
    cout << "p1:" << p1 << " *p1 = " << *p1 << endl;
    // p1 = &i2; ָ�볣��p1���ܱ��޸�
    *p1 = 5;   // ����p1ָ������ݿ����޸�
    cout << "p1:" << p1 << " *p1 = " << *p1 << endl;

    cout << "p2:" << p2 << " *p2 = " << *p2 << endl;
    // *p2 = 5; ����ָ��p2�ܱ��޸�
    p2 = &i1;   // ����p2ָ������ݲ������޸�
    cout << "p2:" << p2 << " *p2 = " << *p2 << endl;

}



// ����һ��ö������
enum color{
    red, green, blue=5, yellow
};
int main(){
    cout << "bool: " << "��ռ�ֽ�����" << sizeof(bool) << endl; 
    cout << "char: " << "��ռ�ֽ�����" << sizeof(char) << endl;  
    cout << "signed char: " << "��ռ�ֽ�����" << sizeof(signed char) << endl;  
    cout << "int: " << "��ռ���ֽ���: " << sizeof(int) << endl;
    cout << "unsigned int: " << "��ռ���ֽ���: " << sizeof(unsigned int) << endl;
    cout << "signed int: " << "��ռ���ֽ���: " << sizeof(signed int) << endl;
    cout << "short int: " << "��ռ���ֽ���: " << sizeof(short int) << endl;
    cout << "unsigned short int: " << "��ռ���ֽ���: " << sizeof(unsigned short int) << endl;
    cout << "signed short int: " << "��ռ���ֽ���: " << sizeof(signed short int) << endl;
    cout << "long int: " << "��ռ���ֽ���: " << sizeof(long int) << endl;
    cout << "signed long  int: " << "��ռ���ֽ���: " << sizeof(signed long int) << endl;
    cout << "unsigned long  int: " << "��ռ���ֽ���: " << sizeof(unsigned long int) << endl;
    cout << "float: " << "��ռ���ֽ���: " << sizeof(float) << endl;
    cout << "double: " << "��ռ���ֽ���: " << sizeof(double) << endl;
    cout << "long double: " << "��ռ���ֽ���: " << sizeof(long double) << endl;
    cout << "wchar_t: " << "��ռ���ֽ���: " << sizeof(wchar_t) << endl;

    typedef int feet;   // typedef����,��typedef int feet = 100;����
    feet distance;
    // 1 �궨��ִ��ʱ�䲻ͬ
    int a = 6, b = 6, c;
    c = f(a) / f(b);
    printf("%d\n", c);


    TestPointer();


    cout << "red = " << red << " yellow = " << yellow << endl;
    // ö�����;���
    enum days{
        one, two, three
    }day;
    day = one;
    switch(day){
        case one:
            cout << "one" << endl;
            break;
        case two:
            cout << "two" << endl;
            break;
        default:
            cout << "Ĭ�����" << endl;
            break;
    }
    return 0;
}