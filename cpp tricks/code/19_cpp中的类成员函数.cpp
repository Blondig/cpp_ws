#include "iostream"
#include "iomanip"
#include "string"
#include "cstdio"
#include "cstring"



using namespace std;



int month;  // ȫ�ֱ���
int day;
int year;

void Set(int m, int d, int y){
    ::year = y;  // ��ȫ�ֱ�����ֵ
    ::day = d;
    ::month = m;
}

class Tdate{
public:
    void Set(int m, int d, int y){  // ��Ա����
        ::Set(m, d, y);  // �ǳ�Ա����
    }
private:
    int month;
    int day;
    int year;
};


class Box{
public:
    double length;
    double breadth;
    double height;
    double getVolume(void){  // �����ĳ�Ա����inline
        return length * breadth * height;
    }
    double getVolume1(void);
    // ��Ա����������
    void setLength(double len);
    void setBreadth(double bre);
    void setHeight(double hei);
};

// ��Ա�����Ķ���
double Box::getVolume1(void){
    return length * breadth * height;
}

void Box::setLength(double len){
    length = len;
}

void Box::setBreadth(double bre){
    breadth = bre;
}

void Box::setHeight(double hei){
    height = hei;
}


class Student{
    public:
        char name[20];
        char sex[10];
        float math;
        float english;
        float program;
        void input_name();
        void input_sex();
        void input_math();
        void input_english();
        void input_program();
        void input(class Student *stu);
        void show_student_info(class Student *stu);
};

void Student::input_name(){
    cout << "������ѧ������: ";
    cin.getline(name, sizeof(name));
    cout << "ѧ������: "  << name << endl;
}

void Student::input_sex(){
    cout << "������ѧ���Ա�: ";
    cin.getline(sex, sizeof(sex));
}

void Student::input_math(){
    cout << "������ѧ������ѧ�ɼ�: ";
    cin >> math;
}

void Student::input_english(){
    cout << "������ѧ����Ӣ��ɼ�: ";
    cin >> english;
}

void Student::input_program(){
    cout << "������ѧ���ı�̿γɼ�: ";
    cin >> program;
}

void Student::show_student_info(class Student *stu){
    cout << "ѧ������: " << stu->name << endl;
    cout << "ѧ���Ա�: "  << stu->sex <<endl;
    cout << "ѧ����ѧ�ɼ�: " << stu->math << endl;
    cout << "ѧ��Ӣ��ɼ�: " << stu->english << endl;
    cout << "ѧ����̿γɼ�: " << stu->program << endl;
}

void Student::input(class Student *stu){
    stu->input_name();
    stu->input_sex();
    stu->input_english();
    stu->input_math();
    stu->input_program();
}

int main(){
    Box box1;
    Box box2;
    double volume = 0.0;
    

    // box1����ϸ��Ϣ
    box1.setLength(6.0);
    box1.setBreadth(7.0);
    box1.setHeight(8.0);
    // box1�����
    volume = box1.length * box1.breadth * box1.height;
    cout << "Box1�������: " << volume << endl;

    // box2����ϸ��Ϣ
    box2.setLength(12.0);
    box2.setBreadth(13.0);
    box2.setHeight(10.0);
    // box2�����
    volume = box2.length * box2.breadth * box2.height;
    cout << "Box2�������: " << volume << endl;
    // 1.���Ա����
    Student dana;
    Student *dana_pointer = &dana;
    dana.input(dana_pointer);
    dana.show_student_info(dana_pointer);
    return 0;
}


