#include "iostream"

using namespace std;


class Box{
    double width;  // Ĭ����private
    public:
        double length;
        friend void printWidth(Box box);  // ��Ԫ��������
        friend class BigBox;  // ��Ԫ�������
        void setWidth(double wid);
};

// ��Ա�����Ķ���
void Box::setWidth(double wid){
    width = wid;
}
// ��Ԫ�����Ķ���
// ��ע�⣺printWidth() �����κ���ĳ�Ա����!!!
void printWidth(Box box){
     /* ��ΪprintWidth()��Box����Ԫ������������ֱ�ӷ��ʸ�����κγ�Ա */
    cout << "Width of Box: " << box.width << endl;
}


class INT{
    friend void Print(const INT& obj);  // ������Ԫ����
};
// ��Ԫ�����Ķ���
void Print(const INT& obj){
    cout << "����INT�����Ԫ�������ҽ���!\n";
}

// ��Ԫ���ʹ��
class BigBox{
    public:
        void Print(int width, Box &box){
            // BigBox��Box�����Ԫ�࣬������ֱ�ӷ���Box����κγ�Ա
            box.setWidth(width);
            cout << "Width of Box: " << box.width << endl;
        }
};

int main(){
    Box box;
    BigBox big;
    // ʹ�ó�Ա�������ÿ��
    box.setWidth(10.0);
    // ʹ����Ԫ����������
    printWidth(box); // ������Ԫ������
    cout << "-------------------------------------\n";
    INT obj;
    Print(obj);  // ֱ�ӵ�����Ԫ����������Ҫʹ�ö������ָ�룡
    cout << "-------------------------------------\n";
    // ʹ����Ԫ���еķ������ÿ��
    big.Print(20, box);
    return 0;
}