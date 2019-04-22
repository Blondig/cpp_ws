#include "iostream"
#include "cstdlib"

using namespace std;



// ��̬��̬
int Add(int a, int b){
    return a+b;
}
double Add(double a, int b){
    return a+b;
}

// ��̬��̬
class TakeBus{
    public:
        void TakeBusToSubway(){
            cout << "go to subway\n";
        }
        void TakeBusToStation(){
            cout << "go to station\n";
        }
};

class Bus{
    public:
        virtual void TakeBusToSomewhere(TakeBus& tb) = 0;   // ���麯��,Bus�Ǹ�������,�ṩһ���ӿ�
};

class Subway: public Bus{
    public: 
        virtual void TakeBusToSomewhere(TakeBus& tb){  // �麯��
            tb.TakeBusToSubway();
        }
};

class Station: public Bus{
    public:
        virtual void TakeBusToSomewhere(TakeBus& tb){   // �麯��
            tb.TakeBusToStation();
        }
};
// ��̬��̬2

// ����
class Base{
    public:
        virtual void fun(int i){  // fun�ڻ����б��������麯�������Զ�̬�󶨣����ݴ���������������е��ö�Ӧ�ĳ�Ա����
            cout << "Base::fun()\n";
        }
        void fun1(int i){  // fun1�ڻ�����û�б��������麯�������ܶ�̬��
            cout << "Base::fun1()\n";
        }
};

class Derived: public Base{
    public:
        virtual void fun(int i){
            cout << "Derived::fun()\n";
        }
        virtual void fun1(int i){
            cout << "Derived::fun1()\n";
        }
        void fun2(int i){
            cout << "Derived::fun2()\n";
        }
};
// ȫ�ֺ���
void TestVirtual(Base& b){
    b.fun(0);
    b.fun1(1);
}


int main(){
    Add(10, 20);
    Add(10.0, 20);
    cout << "------------------------\n";
    TakeBus tb;
    Bus *b = NULL;
    for(int i = 1; i <= 10; ++i){
        if((rand() % i) & 1)
            b = new Subway();
        else    
            b = new Station();
    }
    b->TakeBusToSomewhere(tb);
    delete b;
    cout << "------------------------\n";
    Base b1;
    Derived d1;
    TestVirtual(b1);
    TestVirtual(d1);

    return 0;
}