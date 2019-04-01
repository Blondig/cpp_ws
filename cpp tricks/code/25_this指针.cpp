#include "iostream"

using namespace std;


class Box{
    public:
    // ���캯������
       Box(double l = 2.0, double w = 3.0, double h = 4.0): length(l), width(w), height(h){
            cout << "����Box�Ĺ��캯��...\n";
        }
        // ��ͨ��Ա����
        double Volume(){
            return length * width * height;
        }
        
        int compare(Box box){
            return this->Volume() > box.Volume();
        }
    private:
        int length;
        int width;
        int height;
};

class Rect{
    public:
        Rect(){;}
        ~Rect(){;}
        Rect* get_address(){  // ָ�뺯��������this�ĵ�ַ
            return this;
        }
};


int main(){
    Box box1(3.3, 2.1, 1.5);
    Box box2(8.5, 6.0, 2.0);
    if(box1.compare(box2))
        cout << "box2 С�� box1\n";
    else
        cout << "box2 ���ڵ��� box1\n";
    cout << "----------------------------\n";
    Rect r1;
    Rect r2;
    // Rect* ����ָ��p���ܶ���r1��get_address()��Ա�����ķ���ֵ������ӡ
    Rect* p = r1.get_address();
    cout << "ͨ��thisָ�������ص���get_address()��Ա�����Ķ���r1�ĵ�ַp = " << p << endl;
    p = r2.get_address();
    cout << "ͨ��thisָ�������ص���get_address()��Ա�����Ķ���r2�ĵ�ַp = " << p << endl;
    return 0;
}