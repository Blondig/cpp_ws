#include "iostream"
#include "iomanip"
#include "cstdlib"
#include "ctime"
#include "vector"


using namespace std;
using std::setw;   //  setw() ��������ʽ�����

const int MAX = 3;


double getAverage(int arr[], int size);
double getAverage1(int *arr, int size);
int * getRandom();


int main(){
    int a[10];   // ����һ������10��Ԫ�ص���������
    // ��ʼ������
    for (int i = 0; i < 10; i++)
        a[i] = i + 100;
    cout << "Ԫ������" << setw(13) << "Ԫ��ֵ" << endl;
    // ��������е�ÿ��Ԫ��
    for (int j = 0; j < 10; j++)
        cout << setw(7) << j << setw(13) << a[j] << endl;
    /*��������ظ���*/
    // 1.��ά����
    int aa[5][2] = {{0, 0}, {1, 2}, {2, 4}, {5, 7}, {9, 10}};
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 2; j++){
            cout << "aa[" << i << "][" << j << "] = " << aa[i][j] << endl;
        }
    }
    // 2.ָ�������ָ�룺����ָ��
    double b[5] = {12.4, 3.1, 5.6, 0.8, 5.4};
    double *p;  // һ��ָ��double�͵�ָ��,���Դ洢һ��double���ͱ����ĵ�ַ
    p = b;
    cout << "ʹ��ָ�������ֵ " << endl;
    for (int i = 0; i < 5; i++)
        cout << "*(p + " << i << ") = " << *(p + i) << endl;
    cout << "ʹ��b��Ϊ��ַ������ֵ " << endl;
    for (int i = 0; i < 5; i++)
        cout << "*(b + " << i << ") = " << *(b + i) << endl; 
    // C++�У���char*��char[]���ݸ�cout���������������������ַ����������Ҫ����ַ����ĵ�ַ��ǿ��ת��Ϊ����ָ�루��char*��
    char var[MAX] = {'a', 'b', 'c'};
    char *ptr;
    ptr = var;
    for (int i = 0; i < 3; i++){
        cout << "var[" << i << "]�ĵ�ַ�� = " << (int *)ptr << endl;
        cout << "var[" << i << "] = " << *ptr << endl;
        ptr++;  // �ƶ�����һ��λ��
    }
    // 3.C++�а����鴫�ݸ�����(����1)
    int bb[5] = {1000, 2, 3, 17, 50};
    double avg, avg1;
    // ����һ��ָ�������ָ����Ϊ����
    avg = getAverage(bb, 5);
    cout << "ƽ��ֵ: " << avg << endl;
    /*-----------------------����2-----------------------*/
    int bbb[5] = {1000, 2, 3, 17, 50};
    int *ptr1 = bbb;
    // �ֱ��������Ԫ�ظ������Լ�����ָ����ֽ���
    size_t bbb_size = sizeof(bbb) / sizeof(int);
    size_t ptr1_size = sizeof(ptr1);
    cout << "bbb size = " << bbb_size << endl;
    cout << "ptr1 size = " << ptr1_size << endl;
    avg1 = getAverage1(bbb, 5);
    cout << "ƽ��ֵ: " << avg1 << endl;
    // 4.�Ӻ�����������----ָ�뺯��
    int *p1; 
    p1 = getRandom();
    for (int i = 0; i < 10; i++)
        cout << "*( p1 + " << i << ") = " << *(p1 + i) << endl;
    // ϸ��֪ʶ
    char a1[] = {'p', 'y', 't', 'h', 'o', 'n'};  // ��ʼ����û�� null
    char a2[] = {'p', 'y', 't', 'h', 'o', 'n', '\0'};   // ��ʼ������ȷ�� null
    char a3[] = "python";  // null ��ֹ���Զ����
    // const char a4[6] = "python";  // ����û�� null ��λ��,��ȷ����const char a4[7] = "python"
    // ����Ĵ�С�ǹ̶��ģ����ܶ�������Ԫ�أ����붨�岻�̶���С���ַ�ʱ��ʹ��vector��
    vector<int> vec;  // �����������ڴ洢��������
    int m;
    // ��ʾvec��ʼ��С
    cout << "vector size = " << vec.size() << endl;
    // ������vec׷��5������ֵ
    for(int m = 0; m < 5; m++)
        vec.push_back(m);
    // ��ʾ׷�Ӻ�vec�Ĵ�С
    cout << "׷�Ӻ��vector size = " << vec.size() << endl;
    cout << setfill('*') << setw(5) << 'a' << endl;
    return 0;
}

// ����1(����������а�������Ϊ������ͬʱ����������һ������)
double getAverage(int arr[], int size){
    int i, sum = 0;
    double avg;
    cout << "sizeof(arr) = " << sizeof(arr) << endl;
    for (i = 0; i < size; i++)
        sum += arr[i];
    avg = double(sum) / size;
    return avg;
}

// ����2
double getAverage1(int *arr, int size){
    int i, sum = 0;
    double avg;
    cout << "inside sizeof(arr) = " << sizeof(arr) << endl;
    for (i = 0; i < size; i++)
        sum += arr[i];
    avg = double(sum) / size;
    return avg;
}

// Ҫ���ɺͷ���������ĺ���
int * getRandom(){
    static int r[10];  // C++��֧���ں����ⷵ�ؾֲ������ĵ�ַ�����Ƕ���ֲ�����Ϊstatic����
    // �������������
    srand((unsigned)time(NULL));
    for (int i = 0; i < 10; i++){
        r[i] = rand();
        cout << "r[" << i << "] = " << r[i] << endl;
    }
    return r;
}