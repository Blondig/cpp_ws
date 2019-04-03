#include "iostream"

using namespace std;


class Shape{
    protected:
        int width;
        int height;
    public:
        Shape(int a = 0, int b = 0): width(a), height(b){
            cout << "����Shape��Ĺ��캯��\n";
        }
        virtual int area(){     // �˴��Ѿ��޸ģ���area()������ǰ�������virtual�ؼ��֣����� 
            cout << "����Shape��area()" << endl;
            return 0;
        }
};

class Rect: public Shape{
    public:
        Rect(int a = 0, int b = 0): width(a), height(b){
            cout << "������Rect�Ĺ��캯��\n";
        }
        int area(){
            cout << "������Rect��area()" << endl;
            return width * height;
        }
    protected:
        int width;
        int height;
};

class Triangle: public Shape{
    public:
        Triangle(int a=0, int b=0): Shape(a, b){
            cout << "������Triangle�Ĺ��캯��\n";
        }
        int area(){
            cout << "������Triangle��area()" << endl;
            return width * height / 2;
        }
};

// ��һ�������������δ������麯������ô����ֱ��ʹ�ø����ʵ�������������Ϊδ����virtual�����������ǳ���ģ��޷�ʵ������
class Base {
    public:
        // virtual void tail();  �麯��û�ж��壬��������������
};

class People : public Base {
    public:
        void tail() {
            cout << "people" << endl;
        }
};
// �����е��麯�����麯��������������Ȼ���麯����
// ��ʱ�����ǲ���ϣ�������ĳ���������������б���д����C++11���Ժ�����ùؼ��� final������ú����ٴα���д��
class Parent{
    public:
        virtual void fun(){
            cout << "����ǻ���\n";
        }
};
class Son: public Parent{
    public:
        void fun() final{  // ��ȷ��fun��Parent�����麯��
            cout << "����������\n";
        }
};

class Children: public Son{
    /*   ����ȷ��fun��Son���Ѿ��������麯���������ٱ���д
    public:
        void fun(){
            cout << "����������������༴������Children\n";
        }
    */
};

int main(){
    Shape *shape;  // ָ����Shape��ָ��shape
    Rect r(10, 7);
    Triangle t(10, 5);

    shape = &r;  // �洢���εĵ�ַ
    // ���þ��ε����������
    shape->area();

    // �洢�����εĵ�ַ
    shape = &t;
    // ���������ε����������
    shape->area();
    cout << "----------------------------------------------------\n";
    // Base base;  ��ΪBase������δ������麯�������Բ���ֱ��ʹ�ø����ʵ��������Base���ǳ���ģ��޷�ʵ����
    People people;
    people.tail();
    (&people)->tail();  // &people�൱����ָ��People���ָ��
    cout << "----------------------------------------------------\n";
    Son s;
    Children c;
    Parent* parent;
    parent = &s;
    parent->fun();
    parent = &c;
    Son *son;
    son = &c;
    parent->fun();
    son->fun();
    return 0;
}