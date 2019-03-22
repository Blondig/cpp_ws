#include "iostream"
#include "ctime"
#include "cstdlib"

using namespace std;

const int MAX = 3;

void getSeconds(unsigned long *par);
double getAverage(int *arr, int size);
int * getRandom();

int main(){
    int var1;
    int var2[10];
    cout << "����var1�ĵ�ַ:" << &var1 << endl;  // ���ʱ���var1�����ڴ��е�λ�ã�ʹ��&��ַ���������ñ������ڴ��еĵ�ַ
    cout << "����var2�ĵ�ַ:" << &var2 << endl;
    // cpp��ʹ��ָ��
    int var = 20;  // ��ͨ�����ĳ�ʼ��
    int *ip;  // ָ�����������
    ip = &var;   // ��ָ������洢��ͨ����var�ĵ�ַ
    cout << "var��ֵ�ǣ�" << var << endl;
    cout << "��ͨ����var���ڴ��еĵ�ַ: " << &var << endl;
    cout << "ָ�����ip���ڴ��еĵ�ַ: " << &ip << endl;
    cout << "ͨ������ָ�����ip�д�ŵ���ͨ�����ĵ�ַ���õ���ͨ����var��ֵ: " << *ip << endl;
    // NULL��ָ��
    int *ptr = NULL;
    cout << "ָ�����ptr���ڴ��еĵ�ַ:: " << &ptr << endl;
    cout << "ptr��ֵ��: " << ptr << endl;
    // ָ�����������
    // ����һ��ָ��
    int a[MAX] = {10, 100, 200};
    int *pp, *pt, *tt;
    pp = a;
    for (int i = 0; i<MAX; i++){
        cout << "����a[" << i << "]�ĵ�ַ��: " << &a[i] << endl;
        cout << "����a[" << i << "]�ĵ�ַ��: " << pp << endl;
        cout << "����a[" << i << "]��ֵ��: " << a[i]  << endl;
        cout << "ͨ������ָ�����pp�д�ŵ���ͨ�����ĵ�ַ���õ�����Ԫ�ص�ֵ: " << *pp << endl;
        cout << "------------------------------------------------\n";
        pp++;  // �ƶ�����һ��λ��
    }
    cout << "----------------------�ָ���---------------------------\n";
    // �ݼ�һ��ָ��
    pt = &a[MAX - 1];
    for (int i = MAX - 1; i >= 0; i--){
        cout << "����a[" << i << "]�ĵ�ַ��: " << &a[i] << endl;
        cout << "����a[" << i << "]�ĵ�ַ��: " << pt << endl;
        cout << "����a[" << i << "]��ֵ��: " << a[i]  << endl;
        cout << "ͨ������ָ�����pt�д�ŵ���ͨ�����ĵ�ַ���õ�����Ԫ�ص�ֵ: " << *pt << endl;
        cout << "------------------------------------------------\n";
        pt--;  // �ƶ�����һ��λ��
    }
    cout << "----------------------�ָ���---------------------------\n";
    // ָ��ıȽ�
    tt = a;
    int j = 0;
    while (tt <= &a[MAX - 1]){
        cout << "����a[" << j << "]�ĵ�ַ��: " << tt << endl;
        cout << "����a[" << j << "]��ֵ��: " << a[j] << endl;
        tt++;
        j++;
    }
    // ָ��vs����
    /*
    for (int i = 0; i<MAX; i++){
        cout << "����a[" << i << "]�ĵ�ַ��: " << &a[i] << endl;
        cout << "����a[" << i << "]�ĵ�ַ��: " << pp << endl;
        cout << "����a[" << i << "]��ֵ��: " << a[i]  << endl;
        cout << "ͨ������ָ�����pp�д�ŵ���ͨ�����ĵ�ַ���õ�����Ԫ�ص�ֵ: " << *pp << endl;
        cout << "------------------------------------------------\n";
        pp++;  // �ƶ�����һ��λ��
    }
    */
    cout << "----------------------�ָ���---------------------------\n";
    // ָ�������鲻����ȫ����
    int b[MAX] = {1, 11, 111};
    cout << "b = " << b << endl;
    cout << "*b = " << *b << endl;
    for (int i = 0; i < MAX; i++){
        *b = i;  // �ı���������һ��Ԫ�ص�ֵ  
        // b++;   ��������һ��ָ�볣�������ܽ����޸�
        *(b + 2) = 555;
    }
    cout << "----------------------�ָ���---------------------------\n";
    // ָ������
    int cc[MAX] = {6, 66, 666};
    int *pc[MAX];  // ����һ��ָ������
    for (int i = 0; i < MAX; i++){
        pc[i] = &cc[i];  // ����pc�����е�ÿ��Ԫ�ض���ָ��int���͵�ָ�룬�������︳ֵΪcc[i]��ÿ��Ԫ�صĵ�ַ
    }
    for (int i = 0; i < MAX; i++){
        cout << "cc[" << i << "]�ĵ�ַ��: " << pc[i] << endl;
        cout << "cc[" << i << "] = " << *pc[i] << endl;
    }
    // Ҳ������һ��ָ���ַ���ָ���������洢һ���ַ����б�
    const char *names[MAX] = { 
        "Curry", 
        "Harden", 
        "Durant",
    };
    for (int i = 0; i < MAX; i++){
        cout << "names[" << i << "] = "<< names[i] << endl; // ����ַ�����ֵ
        cout << "*names[" << i << "]��ֵ��: " << *names[i] << endl; // ���ָ����ָ����ַ������׵�ַ��ֵ
        cout << "names[" << i << "]�ĵ�ַ��: " << &names[i] << endl; // ���ָ����ָ����ַ������׵�ַ
       
    }
    // ָ��ָ���ָ��
    int val = 3000;
    int *p1 = &val;
    int **p2 = &p1;
    int ***p3 = &p2;
    cout << "val�ĵ�ַ��: " << &val << endl;
    cout << "ָ��p1�ĵ�ַ��: " << &p1 << endl;
    cout << "ָ��ָ��p1��ָ��p2�ĵ�ַ��: " << &p2 << endl;
    cout << "ָ��ָ��p2��ָ��p3�ĵ�ַ��: " << &p3 << endl;
    cout << "--------------------------------------------------------\n";
    cout << "ָ��p3�д�ŵ���ָ��p2�ĵ�ַ: " << p3 << endl;
    cout << "ָ��p2�д�ŵ���ָ��p1�ĵ�ַ: " << p2 << endl;
    cout << "ָ��p1�д�ŵ��Ǳ���val�ĵ�ַ: " << p1 << endl;
    cout << "*p3�õ�����p2��ֵ��p1�ĵ�ַ: " << *p3 << endl;
    cout << "*(*p3)�õ�����p1��ֵ��a�ĵ�ַ: " << *(*p3) << endl;
    cout << "*(*(*p3))�õ�����a��ֵ: " << *(*(*p3)) << endl;
    // ָ��ָ���ָ��ʵ��2
    int a4 = 100;
    int *pr;
    int **ppr;
    pr = &a4;
    ppr = &pr;
    cout << "a4 = " << a4 << endl;
    cout << "*pr = " << *pr << endl;
    cout << "**ppr = " << **ppr << endl;
    cout << "a4�ĵ�ַ��: " << &a4 << endl;
    cout << "ָ��pr�ĵ�ַ��: " << ppr << endl;
    cout << "ָ��ppr���洢����pr�ĵ�ַ,����pr�ĵ�ַ���ҵ�ָ��pr���洢��a4�ĵ�ַ: " << *ppr << endl;
    // ����ָ�������
    unsigned long sec;
    getSeconds(&sec);
    // ���ʵ��ֵ
    cout << "number of seconds: " << sec << endl;
    // �ܽ���ָ����Ϊ�����Ĳ�����Ҳ���Խ���������Ϊ����
    int balance[5] = {1, 2, 3, 4, 5};
    double avg;
    // ����һ��ָ�������ָ����Ϊ����
    avg = getAverage(balance, 5);
    cout << "ƽ��ֵ: " << avg << endl;
    // �Ӻ�������һ��ָ��
    int *ppg;
    ppg = getRandom();   // �����Ӻ��������Ӻ����з���һ��ָ��
    for (int i = 0; i < 10; i++)
        cout << "*(ppg + " << i << ") = " << *(ppg + i) << endl;
    // ����һ������ָ��
    int (*func)(int aa);  
    return 0;
}

void getSeconds(unsigned long *par){
    *par = time(NULL);  // ��ȡ��ǰ����
}

double getAverage(int *arr, int size){
    int i, sum = 0;
    double avg;
    for (i = 0; i < size; i++)
        sum += arr[i];
    avg = double(sum) / size;
    return avg;
}

// Ҫ���ɺͷ���������ĺ���
int * getRandom(){
    static int r[10];
    // ��������
    srand((unsigned)time(NULL));
    for (int i=0; i<10;i++){
        r[i] = rand();
        cout << "r[" << i << "]=" << r[i] << endl;
    }
    return r;
}