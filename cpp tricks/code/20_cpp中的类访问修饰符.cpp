#include "iostream"
#include "assert.h"


using namespace std;

// ���г�Ա
class Line{
    public:
        double length;
        void setLength(double len);
        double getLength(void);
};

// ˽�г�Ա
class Box{
    public:
        double length;
        void setWidth(double wid);
        double getWidth(void);
    private:
        double width;  // Ĭ����˽�г�Ա���ͣ�
};

// ������Ա
// ����
class Box1{
    protected:
        double width;   // width�Ǹ���ֻ�ı�����Ա�����ǲ���˽�г�Ա����������ⲿ�޷�����
};
// ������
class SmallBox:Box1{  // SmallBox��������
    public:
        void setSmallBoxWidth(double wid);
        double getSmallBoxWidth(void);
};

// public�̳�
// ����
class A{
    public:
        int a;
        A(){ // ���캯��
            a1 = 1;
            a2 = 2;
            a3 = 3;
            a = 4;
        }
        void fun(){  // ��ͨ��Ա����
            cout << "a = " << a <<  endl;
            cout << "a1 = " << a1 << endl;
            cout << "a2 = " << a2 << endl;
            cout << "a3 = " << a3 << endl;
        }
    public:
        int a1;
    protected:
        int a2;
    private:
        int a3;
};

// ������
class B: public A{  // ���м̳�
    public:
        int a;
        B(int i){  // ���캯��
            A();
            a = i;
        }
        void fun(){  // ��ͨ��Ա����
            cout << "a = " << a <<  endl;  // ��ȷ��public��Ա
            cout << "a1 = " << a1 << endl;  // ��ȷ�������public��Ա����������������public��Ա��
            cout << "a2 = " << a2 << endl;  // ��ȷ�������protected��Ա����������������protected���Ա�������
            // cout << "a3 = " << a3 << endl; ����a3�ڻ���A����private��Ա��ͨ��public�̳к�����������Ȼ��private
        }
};

// ˽�м̳�private
// ����
class AA{
    public:
        int a;
        AA(){
            a1 = 1;
            a2 = 2;
            a3 = 3;
            a = 4;
        }
        void fun(){
            cout << "a = " << a << endl;
            cout << "a1 = " << a1 << endl;
            cout << "a2 = " << a2 << endl;
            cout << "a3 = " << a3 << endl;
        }
    public:
        int a1;
    protected:
        int a2;
    private:
        int a3;
};
// ������
class BB : private AA{
    public:
        int a;
        BB(int i){
            AA();
            a = i;
        }
        void fun(){
            cout << "a = " << a << endl;  // ��ȷ��public��Ա
            cout << "a1 = " << a1 << endl;  // ��ȷ������public��Ա,���������б����private,���Ա����������
            cout << "a2 = " << a2 << endl;  // ��ȷ�������protected��Ա�����������б����private,���Ա�������
            // cout << "a3 = " << a3 << endl;  // ���󣬻����private��Ա���ܱ����������
        }
};
// �����̳�protected
// ����
class AAA{
    public:
        int a;
        AAA(){
            a1 = 1;
            a2 = 2;
            a3 = 3;
            a = 4;
        }
        void fun(){
            cout << "a = " << a << endl;
            cout << "a1 = " << a1 << endl;
            cout << "a2 = " << a2 << endl;
            cout << "a3 = " << a3 << endl;
        }
    public:
        int a1;
    protected:
        int a2;
    private:
        int a3;
};
// ������
class BBB : protected AAA{
    public:
        int a;
        BBB(int i){
            A();
            a = i;
        }
        void fun(){
            cout << "a = " << a << endl;   // ��ȷ��public��Ա
            cout << "a1 = " << a1 << endl;  // ��ȷ�������public��Ա�����������б����protected�����Ա����������
            cout << "a2 = " << a2 << endl;  // ��ȷ�������protected��Ա�����������л���protected�����Ա����������
            // cout << "a3 = " << a3 << endl;   // ���󣬻����private��Ա���ܱ����������
        }
};


// ��Ա�����Ķ���
void Line::setLength(double len){
    length = len;
}

double Line::getLength(void){
    return length;
}

void Box::setWidth(double wid){
    width = wid;
}

double Box::getWidth(void){
    return width;
}

// ����ĳ�Ա��������
void SmallBox::setSmallBoxWidth(double wid){
    width = wid;
}

double SmallBox::getSmallBoxWidth(void){
    return width;
}



int main(){
    Line line;
    line.setLength(5.9);  // ʹ�ó�Ա�������ó���
    cout << "�߶εĳ�����: " << line.getLength() << endl;

    // ��ʹ�ó�Ա�������ó���
    line.length = 6.6;
    cout << "�߶εĳ�����: " << line.getLength() << endl;
    cout << "------------------------------------------------------\n";
    Box box;
    // ��ʹ�ó�Ա�������ó��ȣ���Ϊ�����ǹ��е�
    box.length = 3.15;
    cout << "Box�ĳ�����: " << box.length << endl;
    // ��ʹ�ó�Ա�������ÿ�Ƚ��ᱨ����Ϊwidth��˽�е�
    // box.width = 9.99;  ����
    box.setWidth(9.99);
    cout << "Box�Ŀ����: " << box.getWidth() << endl;
    cout << "------------------------------------------------------\n";
    SmallBox sbox;
    sbox.setSmallBoxWidth(4.44);
    cout << "������SmallBox�Ŀ����: " << sbox.getSmallBoxWidth() << endl;
    cout << "------------------------------------------------------\n";
    B b(10);
    cout << "a = " << b.a << endl;
    cout << "a1 = " << b.a1 << endl;
    // cout << b.a2 << endl;  // �������ⲻ�ܷ���protected��Ա
    // cout << b.a3 << endl;   // �������ⲻ�ܷ���private��Ա
    cout << "------------------------------------------------------\n";
    BB bb(100);
    cout << "a = " << bb.a << endl;  // ��ȷ,public��Ա
    // cout << "a1 = " << bb.a1 << endl;    // ����private��Ա�������������
    // cout << "a2 = " << bb.a2 << endl;    // ����, private��Ա�������������
    // cout << "a3 = " << bb.a3 << endl;    // ����, private��Ա�������������
    cout << "------------------------------------------------------\n";
    BBB bbb(666);
    cout << "a = " << bbb.a << endl;  // ��ȷ,public��Ա
    // cout << "a1 = " << bbb.a1 << endl;  // ����protected��Ա�������������
    // cout << "a2 = " << bbb.a2 << endl;  // ����protected��Ա�������������
    // cout << "a3 = " << bbb.a3 << endl;  // ����private��Ա�������������
    return 0;
}