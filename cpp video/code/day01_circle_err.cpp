#include "iostream"

using namespace std;


class Circle{
public:
    double r;
    double pi = 3.1415926;
    double area = pi * r * r;   // Ϊʲô��Ҫ��Ա������
};

int main(){
    Circle c1;
    cout << "������Բ�İ뾶: ";
    cin >> c1.r;

    cout << c1.area << endl;  // ����
    return 0;
}