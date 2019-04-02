#include "iostream"

using namespace std;


class Shape{
    public:
        void setWidth(int w){
            width = w;
        }
        void setHeight(int h){
            height = h;
        }
    protected:
        int width;
        int height;
};

class Rect: public Shape{
    public:
        int getArea(){
            return width * height;
        }
};


// ��̳�
class PaintCost{
    public:
        int getCost(int area){
            return area * 66;
        }
};



class DD: public Shape, public PaintCost{
    public:
        int getArea(){
            return width * height;
        }
};

// ��̳�
class D{
    public:
        D(){
            cout << "D����Ĺ��캯��\n";
        }
        ~D(){
            cout << "D�������������\n";
        }
    protected:
        int d;
};

class B: virtual public D{
    public:
        B(){
            cout << "B����Ĺ��캯��\n";
        }
        ~B(){
            cout << "B�������������\n";
        }
    protected:
        int b;
};

class A: virtual public D{
    public:
        A(){
            cout << "A����Ĺ��캯��\n";
        }
        ~A(){
            cout << "A�������������\n";
        }
    protected:
        int a;  
};

class C: public A, public B{
    public:
        C(){
            cout << "C����Ĺ��캯��\n";
        }
        ~C(){
            cout << "C�������������\n";
        }
    protected:
        int c;
};

int main(){
    Rect r1;
    r1.setWidth(3);
    r1.setHeight(4);
    cout << "r1����������: " << r1.getArea() << endl;
    cout << "-------------------------------------------------------------\n";
    DD dd;
    int area;
    dd.setWidth(4);
    dd.setHeight(5);
    area = dd.getArea();
    cout << "�������: " << dd.getArea() << endl;
    cout << "�ܴ�����: " << dd.getCost(area) << endl; 
    cout << "-------------------------------------------------------------\n";
    C c; // D B A C
    cout << "sizeof(c) = " << sizeof(c) << endl;
    return 0;
}