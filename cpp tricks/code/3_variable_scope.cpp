#include "iostream"

using namespace std;

int func();  // �Ӻ�������
int func1();
int func2(int a, int b);
int func3();
// ȫ�ֱ���������
int g = 233;
int count = 1;
int gg = 34;

int main(){
    // �ֲ�����������û��Ϊ������ڴ�ռ�
    int a, b, kk;
    int c;
    int gg = 88;
    // ʵ�ʳ�ʼ��
    a = 10;
    b = 20;
    c = a + b;
    cout << "c = " << c << endl;
    // ȫ�ֱ�����ֲ�����ͬ��ʱ���ֲ������Ḳ��ȫ�ֱ�����ֵ
    int g = 666;
    cout << "g = " << g << endl;
    //-----------------------------------------------------//
    // �ڳ����У�ȫ�ֱ�����ֲ����������ƿ�����ͬ���������Ӻ����ڵľֲ�������ȫ�ֱ��������������ı���������Ӱ��
    kk = func();
    cout << "kk = " << kk << endl;
    // ��һ���������ڿ��Դ��������ı�����ǰ�������ǵ�������ͬ
    int aa = 22;
    {
        int aa = 77;
        cout << "inner aa = " << aa << endl;
    }
    cout << "outer aa = " << aa << endl;
    // ȫ�ֱ�����ֵ�����ھֲ����������¸�ֵ
    func1();
    func2(10, 20);
    func1();
    // ��Ҫ����main����Ҳʹ��ȫ�ֱ���f�������� extern ��ȫ�ֱ��������������Ϳ��ԺϷ�ʹ��
    extern int f;
    cout << "f = " << f << endl;
    //  ��̬�ֲ�����
    cout << "global " << "  local static" << endl;
    for(int i = 1; i <=10;++i)
        cout << i << "         " << func3() << endl;
    // ȫ�ֱ����ͺ;ֲ�����ͬ��ʱ����ͨ�������ں��������õ�ȫ�ֱ����������������������þֲ�����
    cout << "ͨ�������ں����еõ�ȫ�ֱ���g��ֵ: " << ::gg << endl;
    cout << "�������������õ����Ǿֲ�������ֵ: " << gg << endl;
    return 0;
}


int func3(){
    static int count = 10;  
    // �ڵ�һ�ν������������ʱ�򣬱���count����ʼ��Ϊ10���������Լ� 1���Ժ�ÿ�ν���ú���,count��ֵ����һ�κ�������֮���ֵ
    return count--;
    // �Ͳ��ᱻ�ٴγ�ʼ���ˣ��������Լ� 1 �Ĳ������� static ����ǰ��Ҫ�ﵽͬ���Ĺ��ܣ���ֻ��ʹ��ȫ�ֱ���
}

int f = 10;  // ȫ�ֱ���f�Ӵ˴�����
// �Ӻ�������
int func(){
    return g;
}

int func1(){
    cout << "δ�ı�ǰ��ȫ�ֱ���, g = " << g << endl;
    return 0;
}

int func2(int a, int b){
    g = a + b;
    cout << "�Ѹı���ȫ�ֱ���, g = " << g << endl;
    return 0;
}