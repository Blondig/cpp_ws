#include "iostream"

using namespace std;


// ǿ������ת�����������()
class complex{
    public:
        complex(double real=0.0, double img=0.0):m_real(real), m_img(img){};
        operator double (){return m_real;}  // ����ǿ������ת�������double
    
    private:
        double m_real;
        double m_img;
};

int main(){
    complex c(1.2, 3.4);
    cout << (double)c << endl;  // ��� 1.2
    double n = 2 + c;  // �ȼ��� double n = 2 + c. operator double()
    cout << n;  // ��� 3.2
    return 0;
}