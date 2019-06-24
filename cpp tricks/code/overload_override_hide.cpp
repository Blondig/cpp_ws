#include "iostream"

using namespace std;


// ���ء���д(����)�����ضԱ�

class A{
    public:
        void test(int i);  // overload
        void test(double i);  // overload
        void test(int i, double j);  // overload
        void test(double i, int j);  // overload
        // int test(int i);  �������ز����ķ���ֵ�����ͣ����Բ��Ǻ������أ�����
};

// ��д(����)override
class Base{
    public:
        virtual void fun(int i){   // �����б���д�ĺ�����
            cout << "Base::fun(int): " << i << endl;  
        }
};

class Derived: public Base{
    public:
        virtual void fun(int i){   // ������������д�����еĺ���
            cout << "Derived::fun(int): " << i << endl;
        }
};

// ����hide
class AA{
    public:
        void func(double i, int j){
            cout << "AA::func(double, int): " << endl;
        }
};

class BB: public AA{
    public:
        int func(int i){
            cout << "BB::func(int i): " << i << endl;
            return i;
        }
};

// ���� ��д ���صĶԱ�
class AAA{
    public:
        virtual void f(float x){
            cout << "AAA::f(float x): " << x << endl;
        }
        void g(float x){
            cout << "AAA::g(float x): " << x << endl;
        }
        void h(float x){
            cout << "AAA::h(float x): " << x << endl;
        }
        // ��������
        void foo(int i){
            cout << "AAA::foo(int i): " << i << endl;
        }

        void foo(double d){
            cout << "AAA::foo(double d): " << d << endl;
        }
};

class BBB: public AAA{
    public:
        virtual void f(float x){
            cout << "BBB::f(float x): " << x << endl;
        }
        void g(int x){
            cout << "BBB::g(int x): " << x << endl;
        }
        void h(float x){
            cout << "BBB::h(float x): " << x << endl;
        }
};

int main(){
    Base b;
    Base *pb = new Derived();
    pb->fun(666);  // Derived::fun(int) 
    cout << "---------------------------------------\n";
    BB bb;
    bb.func(1000);  // BB::func(int i)
    // bb.func(0.01, 1000);  BB::func����������2������������
    cout << "---------------------------------------\n";
    AAA aaa;
    BBB bbb;
    AAA *paaa = &bbb;
    BBB *pbbb = &bbb;
    paaa->f(3.14);
    pbbb->f(3.14);

    paaa->g(3.14);
    pbbb->g(3.14);

    paaa->h(3.14);
    pbbb->h(3.14);
    cout << "---------------------------------------\n";
    paaa->foo(3.14);
    return 0;
}