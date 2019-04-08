#include "iostream"

using namespace std;


// ��������Ϊ�����βΣ���֤�˲����ʵ�ε�ֵ�������޸ģ������õĸ�ʽ��: const ������ &������;
void fun(const double &d);


// ������
class A{
    public:
        A(int i, int j){
            i = x;
            j = y;
        }
    private:
        int x;
        int y;
};

// ����Ա����
class R{
    public:
        R(int i1, int i2){
            R1 = i1;
            R2 = i2;
        }
        void Print();
        void Print() const;   // ����Ա����
    private:
        int R1;
        int R2;
};

void R::Print(){
    cout << "R1 = " << R1 << " , R2 = " << R2 << endl;
}

void R::Print() const{
    cout << "R1 = " << R1 << " , R2 = " << R2 << endl;
}

// �����ݳ�Ա
class B{
    public:
        B(int i);
        void Print();
        const int &r;   // ������r�ǶԱ���a������
    private:
        const int a;   // �����ݳ�Ա
        static const int b;  // ��̬�����ݳ�Ա��������������г�ʼ��������
};
// ��̬�����ݳ�Ա��ʼ��
const int B::b = 330;
// ������й��캯������
B::B(int i): a(i), r(a){
    cout << "B�Ķ���Ĺ��캯��\n";
}

void B::Print(){
    cout << "a = " << a << " , b = " << b << " , r = " << r << endl;
}


int main(){
    double d = 3.14;
    fun(d);
    cout << "------------------\n";
    const A a(1, 2); // �ȼ���A const a(1, 2);  a�ǳ����󣬲��ܱ����£�����
    cout << "------------------\n";
    R r(5, 4);
    r.Print();  // ���õ�����ͨ��Ա����void Print()
    R const rr(20, 45);  // rr��һ��������
    rr.Print();  // ������ֻ�ܵ��ó���Ա���������Դ˴����õ���void Print() const;
    cout << "------------------\n";
    //��������b1��b2������50��550��Ϊ��ֵ���ֱ���ù��캯����ͨ�����캯���ĳ�ʼ���б������ĳ����ݳ�Ա����ֵ
    B b1(50);
    B b2(550);
    b1.Print();
    b2.Print();
    return 0;
}

void fun(const double &d){
    // ���������βΣ��ں����в��ܸ���d�����õĶ���
    double i = 6.66;
    // d = i;  �˴�����������
    cout << "d = " << d << endl;
}
