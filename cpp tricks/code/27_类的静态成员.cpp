#include "iostream"

using namespace std;

class Box{
    public:
        static int count;  // ����һ����̬��Ա������
        Box(double l, double w, double h): length(l), width(w), height(h){
            cout << "����Box�����Ĺ��캯��....\n";
            count++; // ÿ����һ��Box��Ķ���ʱ��count����1
        }
        double getVolume(){
            return length * width * height;
        }
        // ��̬��Ա��������!!!
        static int getCount(){
            return count;
        }
    private:
        double length;
        double width;
        double height;
};
// ��̬��Ա����Ҫ�������ʼ����
int Box::count = 0;

// ����ʹ�þ�̬��Ա��������˽⹹�������������ĵ������
class Cpoint{
    public:
        static int value;
        static int num;
        Cpoint(int x, int y): xp(x), yp(y){
            value++;
            cout << "���ù���: " << value << endl;
            cout << this->xp << " " << this->yp << endl;
        }
        ~Cpoint(){
            num++;
            cout << "��������: " << num << endl;
            cout << this->xp << " " << this->yp << endl;
        }
    private:
        int xp;
        int yp;
};

// ��̬��Ա������ʼ��
int Cpoint::num = 0;
int Cpoint::value = 0;


class CRect{
    public:
        CRect(int x1, int x2): mpt1(x1, x1), mpt2(x2, x2){
            cout << "���ù���\n";
        }
        ~CRect(){
            cout << "��������\n";
        }
    private:
        Cpoint mpt1, mpt2;
};
int main(){
    // �ڴ�������ǰ������������
    cout << "δ��������ǰ�Ķ�������: " << Box::getCount() << endl;
    Box box1(3.2, 1.4, 5.5);
    Box box2(6.6, 4.2, 8.7);
    cout << "Box���ܹ��Ķ�������: " << Box::getCount() << endl;
    cout << "---------------------------------------\n";
    CRect p(10, 20);
    cout << "hello world!\n";
    return 0;
}