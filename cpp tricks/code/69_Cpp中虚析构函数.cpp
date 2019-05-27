#include <iostream>

using namespace std;

// ����
class Base{
    public:
        Base(){};
        virtual ~Base(){  // ����������������麯����
            cout << "delete Base\n";
        };
        virtual void DoSomething(){
            cout << "Do Something in class Base!\n";
        };
};


// ������
class Derived: public Base{
    public:
        Derived(){};
        ~Derived(){
            cout << "delete Derived\n";
        };
        void DoSomething(){
            cout << "Do Something in Derived\n";
        };
};


int main(){
    Base *b = new Derived;
    b->DoSomething();  // ��дDoSomething����
    delete b;
    return 0;
}