#include "iostream"
#include "vector"
#include "string"

using namespace std;

int maxnum(int num1, int num2);  // ��������
void swap(int a, int b);
void swap1(int *a, int *b);
void swap2(int &a, int &b);

int main(){
    int num1 = 3, num2 = 6;
    int result;
    result = maxnum(num1, num2);
    cout << "������֮����������: " << result << endl;
    // 1 ��ֵ����
    int a = 4, b = 40;
    cout << "����ǰ��a, bֵ: " << "a = " << a << ",b = " << b << endl;
    swap(a, b);  // ��ֵ����ֻ���βδ�ʵ���Ǹ�����һ��ʵ�ε�ֵ�������ú����ڵĴ��벻��ı����ڵ��ú�����ʵ�ʲ���
    cout << "�������a, bֵ: " << "a = " << a << ",b = " << b << endl;
    // 2 ָ�����
    int x = 4, y = 40;
    cout << "����ǰ��x, yֵ: " << "x = " << x << ",y = " << y << endl;
    swap1(&x, &y);  // ʵ�ʲ�����ʵ��ֵ�ĵ�ַ���ƺ��ٴ�����ʽ��������ʽ������õ�ַ���ڱ����ú������ڲ�����ͨ���������ĵ�ַ���ʵ������õ���ʵ�ʲ������޸���ʽ������Ӱ��ʵ�ʲ�����
    cout << "�������x, yֵ: " << "x = " << x << ",y = " << y << endl;
    // 3 ���õ���
    int m = 4, n = 40;
    cout << "����ǰ��m, nֵ: " << "m = " << m << ",n = " << n << endl;
    swap2(m, n); // ��ʵ�ε����õĵ�ַ������һ�ݴ����β�,��ʽ�������ʵ�ʲ������õĵ�ַ���ڱ����ú������ڲ�����ͨ����������ʵ�ʲ��������õĵ�ַ���ʵ������õ���ʵ�ʲ������޸���ʽ������Ӱ��ʵ�ʲ�����
    cout << "�������m, nֵ: " << "m = " << m << ",n = " << n << endl;
    return 0;
}


// ��������
int maxnum(int num1, int  num2){
    if (num1 > num2)
        return num1;
    else
        return num2;
}

// ��ֵ���÷�ʽ
void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
// ָ�봫�ݷ�ʽ
void swap1(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// ���ô��ݷ�ʽ
void swap2(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

