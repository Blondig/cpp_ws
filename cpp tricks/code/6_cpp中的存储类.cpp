#include "iostream"

using namespace std;


// static�洢��ʵ��
static int count = 10;  // ��̬ȫ�ֱ���
void fun(void);

class Data{
public:
    Data(){}
    ~Data(){}
    void show(){
        cout << this->data << " " << number << endl;
    }

    static void showData(){  // ������Ķ��������
        cout << " " << number << endl;  // ����������õ�ʱ�򲻰���thisָ��
    }
private:
    int data;
public:
    static int number;  //  ��̬����������ʱ�������ʼ��
};


class Foo{
public:
    Foo(): i(100){}
private:
    // const int i = 10;  // ����!!!   const���γ�Ա����, const ���εĳ�Ա�������ܱ��޸�
    int i;
};
// Foo::Foo():i(100){} ����ͨ�������ķ�ʽ�����г�ʼ��

int Data::number = 0;  // ��̬��Ա��ʼ��

int main(){
    // static�洢��
    while(count--){
        fun();
    }
    // ��̬��Ա��������
    Data::showData(); // ͨ������ֱ�ӵ���

    Data::number = 100; // ͨ������ֱ�ӵ���

    Data d;
    d.show();
    d.showData();   // ͨ���������

    cout << "hello world..." << endl; 
    
    return 0;
}

void fun(void){
    static int i = 5;   // ��̬�ֲ�����
    i++;
    cout << "����iΪ��" << i << endl;
    cout << "����countΪ: " << count << endl;
}