#include "iostream"


using namespace std;


// ����Ķ�̬�뾲̬����
class B{
    public:
        void DoSomething(){
            cout << "B DoSomething()......\n";
        }
        virtual void vfun(){
            cout << "B vfun()......\n";
        }
        // ȱʡ�������麯��һ�����
        virtual void func(int i = 20){
            cout << "B func()......\n";
        }
};


class C: public B{
    public:
        void DoSomething(){  // ����˵��һ�£�����������¶����˸����no-virtual����������һ�����õ���ƣ��ᵼ���������أ�����ֻ��Ϊ��˵����̬�󶨺;�̬�󶨲�����ʹ�á�
            cout << "C DoSomething().....\n";
        }
        virtual void vfun(){
            cout << "C vfun()......\n";
        }
        virtual void func(){
            cout << "C func()......\n";
        }
};

class D:public B{
    public:
        void DoSomething(){
            cout << "D DoSomething().....\n";
        }
        virtual void vfun(){
            cout << "D vfun()......\n";
        }
        virtual void func(){
            cout << "D func()......\n";
        }
};



int main(){
    // D *pD = new D();  // pD�ľ�̬������������������D*����̬����Ҳ��D*
    // B *pB = pD;  // pB�ľ�̬������������������B*����̬������pB��ָ��Ķ���pD������D*
    // C *pC = new C();  // pC�ľ�̬������������������C*����̬����Ҳ��C*
    // pB = pC;  // pB�Ķ�̬�����ǿ��Ը��ĵģ��������Ķ�̬������C*
    cout << "-------------------------------------------------------\n";
    // ��̬��
    // D *pD = new D();
    // B *pB = pD;
    // pD->DoSomething();
    // pB->DoSomething();
    // cout << "-------------------------------------------------------\n";
    // // ��̬��
    // pD->vfun();
    // pD->vfun();
    cout << "-------------------------------------------------------\n";
    // ȱʡ�������麯��һ�����,�Ǿ�̬�󶨣�
    D *pD = new D();
    B* pB = pD;
    pD->func();
    pB->func();
    return 0;
}
