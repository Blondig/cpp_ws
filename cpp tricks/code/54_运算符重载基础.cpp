#include "iostream"

using namespace std;

class Complex{
    public:
        Complex();
        Complex(double a, double b);
        // �������������
        Complex operator+(const Complex &A) const;
        void show() const;  // ����Ա����
    private:
        double real;
        double img;
};

// Ĭ�Ϲ��캯����ʼ��
Complex::Complex():real(0.0), img(0.0){};
// ���������캯����ʼ��
Complex::Complex(double a, double b):real(a), img(b){};
// ʵ�������������
Complex Complex::operator+(const Complex &A) const{
    Complex B;
    B.real = this->real + A.real;
    B.img = this->img + A.real;
    return B;
}

void Complex::show() const{
    cout << real << " + " << img << "i" << endl;
}


// 2. ȫ�ַ�Χ�����������
class complex{
public:
    complex();
    complex(double a, double b);
public:
    void show() const;
    //����Ϊ��Ԫ����
    friend complex operator+(const complex &A, const complex &B);
private:
    double real;
    double img;
};


complex::complex(): real(0.0), img(0.0){ }
complex::complex(double a, double b): real(a), img(b){ }
void complex::show() const{
    cout << real <<" + "<< img << "i"<<endl;
}
//��ȫ�ַ�Χ������+
complex operator+(const complex &A, const complex &B){
    complex C;
    C.real = A. real + B.real;
    C.img = A.img + B.img;
    return C;
}





int main(){
    Complex c1(4.3, 5.8);
    Complex c2(4.3, 5.8);
    Complex c3;
    c3 = c1 + c2;
    c3.show();
    cout << "-------------------------\n";
    complex x1(3.9, 4.2);
    complex x2(3.9, 4.2);
    complex x3;
    x3 = x1 + x2;
    x3.show();
    return 0;
}