#include "iostream"

using namespace std;

/*---------------------------����������ת��Ϊ��ǰ�������-------------------------------*/

// �����������֪��ת������Ͳ���ת����ʹ��ǿ������Ҳ����
class complex{
    public:
        complex():m_real(0.0), m_img(0.0){}
        complex(double real, double img):m_real(real), m_img(img){}
        complex(double real): m_real(real), m_img(0.0){}  // ת�����캯��
    public:
        friend ostream & operator<< (ostream &out, const complex &c); // ��Ԫ����
    private:
        double m_real;
        double m_img;
};

ostream & operator << (ostream &out, const complex &c){
    out << c.m_real << " + " << c.m_img << "i";
    return out;
}

int main(){
    complex a(10.0, 20.0);
    cout << "a = " << a << endl;
    a = 25.5;
    cout << "a = " << a << endl;
    return 0;
}