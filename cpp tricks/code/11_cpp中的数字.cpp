#include "iostream"
#include "cmath"
#include "ctime"
#include "cstdlib"
#include "cstdio"

#define random(x) (rand() % x)
using namespace std;

int main(){
    // ���ֶ���
    short s;
    int i;
    long l;
    float f;
    double d;
    // ���ָ�ֵ
    s = 10;
    i = - 1000;
    l = 1000000;
    f = 230.45;
    d = 4545.398;
    cout << "s = " << s << endl;
    cout << "i = " << i << endl;
    cout << "l = " << l << endl;
    cout << "f = " << f << endl;
    cout << "d = " << d << endl;
    // ��ѧ����
    cout << "sin(d) = " << sin(d) << endl;
    cout << "abs(i) = " << abs(i) << endl;
    cout << "floor(d) = " << floor(d) << endl;
    cout << "sqrt(f) = " << sqrt(f) << endl;
    cout << "pow(d, 2) = " << pow(d, 2) << endl;
    // �����1
    int m, n;
    // �������������
    srand((unsigned)time(NULL)); // time()������ȡϵͳʱ���������ͨ������rand()���������������
    // ����10�������
    for(m = 0; m < 10; m++){
        // ����ʵ�ʵ������
        n = rand();
        cout << "�����: " << n << endl;
    }
    // �����2
    const int MAX = 10;
    int number[MAX] = {0};
    int k;
    srand((unsigned) time(NULL));  // ������
    for (k = 0; k < MAX; k++){
        number[k] = rand() % 100;  // ����100�ڵ������
        cout << "number[" << k << "] = " << number[k] << endl;
    }
    // �����3
    srand((int)time(0));
    for (int a = 0; a < 10; a++){
        cout << random(100) << endl; // ���0-100�ڵ������
    }
    return 0;
}