#include "iostream"

using namespace std;

class Line{
    public:
        void setLength(double len);
        double getLength();
        Line(double len);   // �������Ĺ��캯��
        ~Line();  // �����������ܴ����κβ���
    private:
        double length;
};

class Box{
    public:
        void setLength(double len);
        double getLength();
        void setWidth(double wid);
        double getWidth();
        void setHeight(double hei);
        double getHeight();

        // ʹ�ó�ʼ���б�����ʼ���ֶ�----���캯��
        Box(double len, double wid, double hei): length(len), width(wid), height(hei){
            cout << "Box�Ķ���box���ڱ�����,length = " << len << " width = " << wid << " height = " << hei << endl; 
        }
        // ��������
        ~Box(){
            cout << "����box���ڱ�ɾ��...\n";
        }
    private:
        double length;
        double width;
        double height;
};

class Student1{
    public:
        int a;
        int b;
        // ��ͨ��Ա����
        void fprint(){
            cout << "a = " << a << ",b = " << b << endl;
        }
        // Student1(int i): b(i), a(b){} �쳣˳�򣺷���a��ֵ��0��b��ֵ��2��˵����ʼ��������b��Ч����aû���𵽳�ʼ��������
        Student1(int i): a(i), b(a){} // ����˳��:a = b = 2
        // Ĭ�Ϲ��캯��
        Student1(){
            cout << "Ĭ�Ϲ��캯��Student1\n";
        }
        // �������캯��
        Student1(const Student1& t1){
            cout << "�������캯��Student1\n";
            this->a = t1.a;
        }
};

// ���캯���Ķ���
Line::Line(double len){
    cout << "Line�Ķ���line���ڱ�����, lenght = " << len << endl;
    length = len;
}

// ������������
Line::~Line(){
    cout << "Line�Ķ������ڱ�ɾ��..." << endl;
}
// // ʹ�ó�ʼ���б�����ʼ���ֶ�
// Line::Line(double len): length(len){
//     cout << "Line�Ķ���line���ڱ�����, lenght = " << len << endl;    
// }


// ��Ա�����Ķ���
void Line::setLength(double len){
    length = len;
}

double Line::getLength(){
    return length;
}
// Box��ĳ�Ա��������
void Box::setLength(double len){
    length = len;
}

double Box::getLength(){
    return length;
}

void Box::setWidth(double wid){
    width = wid;
}

double Box::getWidth(){
    return width;
}

void Box::setHeight(double hei){
    height = hei;
}

double Box::getHeight(){
    return height;
}


int main(){
    // ��ȡĬ�����õĳ���
    Line line(10.0);  // ����һ��line���󣬴�ʱ��ȥִ�д������Ĺ��캯��
    line.setLength(4.0);
    cout << "Line�ĳ�����: " << line.getLength() << endl;
    cout << "-------------------------------------------\n";
    Box box(3.0, 4.0, 5.0);
    box.setLength(33.0);
    cout << "Box�ĳ�����: " << box.getLength() << endl;
    box.setWidth(44.0);
    cout << "Box�Ŀ����: " << box.getWidth() << endl;
    box.setHeight(55.0);
    cout << "Box�ĸ߶���: " << box.getHeight() << endl;
    cout << "-------------------------------------------\n";
    Student1 A(2);        //����Ĭ�Ϲ��캯�� 
    A.fprint();            //���ǰ���ʼ���Ľ��
    return 0;
}