#include "iostream"

using namespace std;



class Box{
    public:
        Box(double l, double w, double h): length(l), width(w), height(h){
            cout << "Box��Ĺ��캯������!\n";
        }
        double Volume(){
            return length * width *height;
        }
    private:
        double length;
        double width;
        double height;
};


int main(){
    Box box1(3.3, 4.3, 2.1);
    Box box2(4.8, 1.2, 3.9);
    Box *boxptr;  // ����һ��ָ��Box���ָ�����boxptr
    // ָ������ĳ�ʼ��
    boxptr = &box1;  // �����һ������ĵ�ַ
    cout << "Box1�������: " << boxptr->Volume() << endl;
    boxptr = &box2;
    cout << "Box2�������: " << boxptr->Volume() << endl;
    return 0;
}