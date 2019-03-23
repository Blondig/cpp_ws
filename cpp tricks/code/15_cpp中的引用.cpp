#include "iostream"

using namespace std;

void swap(int &a, int &b);
double & setValues(int i, double *arr);
int & func();
void print_info();
void swaps(int *x, int *y);



// ����һ���ṹ������
typedef struct{
    int age;
    char name;
    double salary;
}Student;

int main(){
    // �����򵥱���
    int i;
    double d;
    // �������ñ���
    int &r = i;  // ��int r = i;���������ڴ�ķ��䣬���߻��ٷ���һ���ڴ�ռ�
    double &s = d;

    i = 5;
    cout << "i = " << i << endl;
    cout << "i��������: " << r << endl;
    cout << "i�ĵ�ַ��: " << &i << endl;
    cout << "r�ĵ�ַ��: " << &r << endl;

    d = 11.7;
    cout << "d = " << d << endl;
    cout << "d��������: " << s << endl;
    /*ע��������ĶԱȲ�ͬ*/
    int x;
    int y = x;
    x = 6;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "x�ĵ�ַ��: " << &x << endl;
    cout << "y�ĵ�ַ��: " << &y << endl;
    // �ṹ�����͵�����
    print_info();
    // ָ�����͵�����
    int m = 10; // ����һ�����͵ı���a
    int *p = &m; // ����һ��ָ�����a��ָ��p
    int *&p_reference = p;  // ����ָ��p������p_reference����p�ı���
    *p_reference = 20; // ��20��ֵ��*p_reference,�൱�ڰ�20��ֵ��*p,Ҳ�����൱�ڰ�ֵ��ֵ��a
    cout << "m = " << m << endl;
    // ������Ϊ��������
    int a = 100;
    int b = 200;
    cout << "û�н���ǰa,b��ֵ�ֱ���: a = " << a << ",b = " << b << endl; 
    swap(a, b);
    cout << "������a,b��ֵ�ֱ���: a = " << a << ",b = " << b << endl;
    // ָ����Ϊ��������
    int aa = 100;
    int bb = 200;
    cout << "û�н���ǰaa,bb��ֵ�ֱ���: aa = " << aa << ",bb = " << bb << endl; 
    swaps(&aa, &bb);
    cout << "������aa,bb��ֵ�ֱ���: aa = " << aa << ",bb = " << bb << endl;
    // ������Ϊ�����ķ���ֵ
    double vals[] = {10.1, 12.6, 3.14, 24.1, 50.5};
    cout << "����û�ı�ǰ��ֵ: " << endl;
    for (int i = 0; i < 5; i++)
        cout << "vals[" << i << "] = " << vals[i] << endl;
    cout << "����ı���ֵ: " << endl;
    setValues(1, vals) = 20.23;  // �ı�����ĵ�2��Ԫ��
    setValues(3, vals) = 78.99;  // �ı�����ĵ�4��Ԫ��
    for (int i = 0; i < 5; i++)
        cout << "vals[" << i << "] = " << vals[i] << endl;
    return 0;
}

void swap(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

// ������Ϊ�����ķ���ֵ
double &setValues(int i, double *arr){
    return arr[i];
}

// ������һ������ʱ��ע�ⱻ���õĶ����ܳ������������Է���һ���Ծֲ�����������ʱ���Ϸ��ģ����Է���һ����̬����������
int & func(){
    int q;
    // return q;�������
    static int x;
    return x;  // ������ȷ��x�ں�������������Ȼ��Ч
}

void print_info(){
    Student s1;  // ����һ���ṹ�������s1
    Student &s = s1;   // ��s1����һ��������s
    s.age = 20;  // ͨ�����ø��ṹ����������ݳ�Ա��ֵ
    s.name = 'A';
    cout << "s.age = " << s.age << ", s.name = " << s.name << endl;
}

void swaps(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    temp = *x;
}