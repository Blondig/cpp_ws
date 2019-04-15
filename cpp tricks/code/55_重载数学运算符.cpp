#include "iostream"
#include "cmath"

using namespace std;


/*

�����������+��-��*��/��+=��-=��*=��/=���͹�ϵ�������>��<��<=��>=��==��!=��������ѧ�������
������ʵ�ʿ����зǳ������������صļ���Ҳ�ܸߣ������������Ƶ����ظ�ʽ��
�����Ը�����ComplexΪ�������ǽ������أ���ʾ��������ص��﷨�Լ��淶��
*/

class complex{
    public:
        complex(double a = 0.0, double b=0.0):real(a),img(b){};  // ���캯��
    public:
        // ���������---��ȫ�ֺ�������ʽ����
        friend complex operator+(const complex &c1, const complex &c2);
        friend complex operator-(const complex &c1, const complex &c2);
        friend complex operator*(const complex &c1, const complex &c2);
        friend complex operator/(const complex &c1, const complex &c2);
        friend bool operator==(const complex &c1, const complex &c2);
        friend bool operator!=(const complex &c1, const complex &c2);
        // ���������---�Գ�Ա��������ʽ����
        complex & operator+=(const complex &c);
        complex & operator-=(const complex &c);
        complex & operator*=(const complex &c);
        complex & operator/=(const complex &c);
    public:
        // ����Ա����
        double freal() const{return real;}
        double fimg() const{return img;}
    private:
        double real;
        double img;
};

//����+�����
complex operator+(const complex &c1, const complex &c2){
    complex c;
    c.real = c1.real + c2.real;
    c.img = c1.img + c2.img;
    return c;
}
//����-�����
complex operator-(const complex &c1, const complex &c2){
    complex c;
    c.real = c1.real - c2.real;
    c.img = c1.img - c2.img;
    return c;
}
//����*�����  (a+bi) * (c+di) = (ac-bd) + (bc+ad)i
complex operator*(const complex &c1, const complex &c2){
    complex c;
    c.real = c1.real * c2.real - c1.img * c2.img;
    c.img = c1.img * c2.real + c1.real * c2.img;
    return c;
}
//����/�����  (a+bi) / (c+di) = [(ac+bd) / (c?+d?)] + [(bc-ad) / (c?+d?)]i
complex operator/(const complex &c1, const complex &c2){
    complex c;
    c.real = (c1.real*c2.real + c1.img*c2.img) / (pow(c2.real, 2) + pow(c2.img, 2));
    c.img = (c1.img*c2.real - c1.real*c2.img) / (pow(c2.real, 2) + pow(c2.img, 2));
    return c;
}
//����==�����
bool operator==(const complex &c1, const complex &c2){
    if( c1.real == c2.real && c1.img == c2.img ){
        return true;
    }else{
        return false;
    }
}
//����!=�����
bool operator!=(const complex &c1, const complex &c2){
    if( c1.real != c2.real || c1.img != c2.img ){
        return true;
    }else{
        return false;
    }
}
//����+=�����
complex & complex::operator+=(const complex &c){
    this->real += c.real;
    this->img += c.img;
    return *this;
}
//����-=�����
complex & complex::operator-=(const complex &c){
    this->real -= c.real;
    this->img -= c.img;
    return *this;
}
//����*=�����
complex & complex::operator*=(const complex &c){
    this->real = this->real * c.real - this->img * c.img;
    this->img = this->img * c.real + this->real * c.img;
    return *this;
}
//����/=�����
complex & complex::operator/=(const complex &c){
    this->real = (this->real*c.real + this->img*c.img) / (pow(c.real, 2) + pow(c.img, 2));
    this->img = (this->img*c.real - this->real*c.img) / (pow(c.real, 2) + pow(c.img, 2));
    return *this;
}
int main(){
    complex c1(25, 35);
    complex c2(10, 20);
    complex c3(1, 2);
    complex c4(4, 9);
    complex c5(34, 6);
    complex c6(80, 90);
   
    complex c7 = c1 + c2;
    complex c8 = c1 - c2;
    complex c9 = c1 * c2;
    complex c10 = c1 / c2;
    cout<<"c7 = "<<c7.freal()<<" + "<<c7.fimg()<<"i"<<endl;
    cout<<"c8 = "<<c8.freal()<<" + "<<c8.fimg()<<"i"<<endl;
    cout<<"c9 = "<<c9.freal()<<" + "<<c9.fimg()<<"i"<<endl;
    cout<<"c10 = "<<c10.freal()<<" + "<<c10.fimg()<<"i"<<endl;
   
    c3 += c1;
    c4 -= c2;
    c5 *= c2;
    c6 /= c2;
    cout<<"c3 = "<<c3.freal()<<" + "<<c3.fimg()<<"i"<<endl;
    cout<<"c4 = "<<c4.freal()<<" + "<<c4.fimg()<<"i"<<endl;
    cout<<"c5 = "<<c5.freal()<<" + "<<c5.fimg()<<"i"<<endl;
    cout<<"c6 = "<<c6.freal()<<" + "<<c6.fimg()<<"i"<<endl;
   
    if(c1 == c2){
        cout<<"c1 == c2"<<endl;
    }
    if(c1 != c2){
        cout<<"c1 != c2"<<endl;
    }
   
    return 0;
}

