#include "iostream"

using namespace std;


int main(){

    // ���������
    int a = 21;
    int b = 10;
    int c;
    c = a + b;
    cout << "c = " << c << endl;
    c =  a - b;
    cout << "c = " << c << endl;
    c = a * b;
    cout << "c = " << c << endl;
    c = a / b;
    cout << "c = " << c << endl;
    c = a % b;  // ȡ�������
    cout << "c = " << c << endl;

    int d = 10;
    c = d++; // �Լ�
    cout << "c = " << c << endl;

    d = 10;
    c = d--; // �Լ�
    cout << "c = " << c << endl;
    // ��ϵ�����
    int aa = 21, bb = 10;
    int cc;
    if (aa == bb)
        cout << "aa == bb\n";
    else    
        cout << "aa != bb\n";
    if (aa > bb)
        cout << "aa > bb\n";
    else    
        cout << "aa < bb\n";
    if (aa < bb)
        cout << "aa < bb\n";
    else    
        cout << "aa > bb\n";
    if (aa != bb)
        cout << "aa != bb\n";
    else
        cout << "aa == bb\n"; 
    aa = 5;
    bb = 20;
    if ( aa <= bb )
        cout << "aaС�ڻ����bb" << endl ;
    if ( bb >= aa )
        cout << "bb���ڻ����aa" << endl ;
    // �߼������
    int a1 = 5, b1 = 20, c1;
    if (a1 && b1)
        cout << "����Ϊ��\n";
    if (a1 || b1)
        cout << "����λ��\n";
    a1 = 0;
    b1 = 10;
    if (a1 && b1)
        cout << "����Ϊ��\n";
    else    
        cout << "����Ϊ��\n";
    if (!(a1 && b1))
        cout << "����Ϊ��\n";
    // λ�����
    unsigned int a2 = 60;
    unsigned int b2 = 13;
    int c2 = 0;
    c2 = a2 & b2;
    cout << "a2 & b2: " << c2 << endl;
    c2 = a2 | b2;
    cout << "a2 | b2: " << c2 << endl;
    c2 = a2 ^ b2;
    cout << "a2 ^ b2: " << c2 << endl;
    c2 = ~a2;
    cout << "~a2: " << c2 << endl;
    c2 = a2 << 2;
    cout << "a2 << 2: " << c2 << endl;
    c2 = a2 >> 2;
    cout << "a2 >> 2: " << c2 << endl;
    // ��ֵ�����
    int a3 = 21;
    int c3;
    c3 = a3;
    cout << "c3 = " << c3 << endl;
    c3 += a3;
    cout << "c3 = " << c3 << endl;
    c3 -= a3;
    cout << "c3 = " << c3 << endl;
    c3 *= a3;
    cout << "c3 = " << c3 << endl;
    c3 /= a3;
    cout << "c3 = " << c3 << endl;
    c3 = 200;
    c3 %= a3;
    cout << "c3 = " << c3 << endl;
    c3 <<= 2;
    cout << "c3 = " << c3 << endl;
    c3 >>= 2;
    cout << "c3 = " << c3 << endl;
    c3 &= 2;
    cout << "c3 = " << c3 << endl;
    c3 ^= 2;
    cout << "c3 = " << c3 << endl;
    c |= 2;
    cout << "c3 = " << c3 << endl;
    // ��������ȼ�
    int a4 = 20;
    int b4 = 10;
    int c4 = 15;
    int d4 = 5;
    int e4;
    
    e4 = (a4 + b4) * c4 / d4;      // ( 30 * 15 ) / 5
    cout << "(a4 + b4) * c4 / d4 ��ֵ�� " << e4 << endl ;
    
    e4 = ((a4 + b4) * c4) / d4;    // (30 * 15 ) / 5
    cout << "((a4 + b4) * c4) / d4 ��ֵ�� " << e4 << endl ;
    
    e4 = (a4 + b4) * (c4 / d4);   // (30) * (15/5)
    cout << "(a4 + b4) * (c4 / d4) ��ֵ�� " << e4 << endl ;
    
    e4= a4 + (b4 * c4) / d4;     //  20 + (150/5)
    cout << "a4 + (b4 * c4) / d4 ��ֵ�� " << e4 << endl ;
    // ָ�������
    int var;
    int *ptr;
    int val;
    var = 200;
    // ��ȡvar�ĵ�ַ
    ptr = &var;
    cout << "ָ�������ռ�ֽڿռ��С: " << sizeof(*ptr) << endl;
    val = *ptr;  // ��ȡptr��ֵ
    cout << "var = " << var << endl;
    cout << "ptr = " << ptr << endl;
    cout << "val = " << val << endl;
    return 0;
}