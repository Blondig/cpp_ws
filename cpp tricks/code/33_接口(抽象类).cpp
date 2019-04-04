#include "iostream"


using namespace std;


class Box{
    public:
        // ���麯��
        virtual double getVolume() = 0;
    private:
        int length;
        int width;
        int height;
};

// ����Shape�Ǹ�������
class Shape{
    public:
    // �ṩ�ӿڿ�ܵĴ��麯��
        virtual int getArea() = 0;
        void setLength(int l){
            length = l;
        }
        void setWidth(int w){
            width = w;
        }
    protected:
        int length;
        int width;
};

// ������1
class Rect: public Shape{
    public:
        int getArea(){
            return length * width;
        }
};
// ������2
class Triangle: public Shape{
    public:
        int getArea(){
            return length * width / 2;
        }
};
       


int main(){
    Rect r;
    Triangle t;

    r.setLength(4);
    r.setWidth(5);
    cout << "���ε������: " << r.getArea() << endl;

    t.setLength(4);
    t.setWidth(5);
    cout << "�����ε������: " << t.getArea() << endl;
    return 0;
}