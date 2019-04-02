#include "iostream"
#include "cstring"
#include "cstdlib"
#include "cstdio"
#include <vector>

using namespace std;

// ��������
class A{
    public: 
        void print(int i){
            cout << "����Ϊ: " << i << endl;
        }
        void print(double d){
            cout << "������Ϊ: " << d << endl;
        }
        void print(char c[]){
            cout << "�ַ���Ϊ: " << c << endl;
        }
};

// ���������
class Box{
    public:
        double getVolume(){
            return length * width * height;
        }
        void setLength(int len){
            length = len;
        }
        void setWidth(int wid){
            width = wid;
        }
        void setHeight(int hei){
            height = hei;
        }
    // ��������أ����ڰ�����box�������
        Box operator+(const Box& b){
            Box box;
            box.length = this->length + b.length;
            box.width = this->width + b.width;
            box.height = this->height + b.height;
            return box;
        }
    private:
        int length;
        int width;
        int height;
};

// һԪ���������

// ++��--���������
class Time{
    private:
        int hours;
        int minutes;
    public:
        Time(){
            hours = 0;
            minutes = 0;
        }
        Time(int h, int m): hours(h), minutes(m){
            cout << "Time�����Ĺ��캯��\n";
        }
        void display(){
            cout << "H:" << hours << " M:" << minutes << endl;
        }
        // ����ǰ׺����++�����
        Time operator++(){
            ++minutes;  // ����� 1
            if(minutes >= 60){
                ++hours;
                minutes-= 60;
            }
            return Time(hours, minutes);
        }
        // ���غ�׺����++�����
        Time operator++(int){
            Time T(hours, minutes);  // ����ԭʼֵ
            ++minutes;  // ����� 1
            if(minutes >= 60){
                ++hours;
                minutes-= 60;
            }
            return T;  // ���ؾɵ�ԭʼֵ
        }

};
// ++��--���������ע��ĵ�
class CA{
    public:
        int pos;
        // ǰ��++�������ӵ�ǰ�����pos��ֵ�������ص�ǰ����
        CA operator++(){
            pos++;
            return *this;
        }
        // ����++�������ӵ�ǰ�����pos��ֵ������������pos֮ǰ�Ķ���
        CA operator++(int){
            CA temp = *this;
            ++*this;
            return temp;
        }
};

// ����һԪ�������-
class Distance{
    private:
        int feet;
        int inches;
    public:
        Distance(){
            feet = 0;
            inches = 0;
        }
        Distance(int f, int i): feet(f), inches(i){
            cout << "Distance�����Ĺ��캯��\n";
        }
        void displayDistance(){
            cout << "F = " << feet << " I = " << inches << endl;
        }
        // ���������-
        Distance operator-(){
            feet = -feet;
            inches = -inches;
            return Distance(feet, inches);
        }
        // ���ع�ϵ�����<
        bool operator < (const Distance& d){
            if(feet < d.feet)
                return true;
            if(feet == d.feet && inches < d.inches)
                return true;
            return false;
        }
        // ����������������
        friend ostream &operator<<(ostream &output, const Distance& D){
            output << "F = " << D.feet << " I = " << D.inches << endl;
            return output;
        }
        friend istream &operator>>(istream &input, Distance &D){
            input >> D.feet >> D.inches;
            return input;
        }
        // ��ֵ���������
        void operator=(const Distance& D){
            feet = D.feet;
            inches = D.inches;
        }
        // ���غ������������
        Distance operator()(int a, int b, int c){
            Distance D;
            // �����������
            D.feet = a + c + 10;
            D.inches = b + c + 100;
            return D;
        }
};

// �����û��Զ������ͱ������������ͱ�����ֵʱ������ʹ���Զ������͵���ʽת��
class Int{
    private:
        int n;
    public:
        Int(int i){
            cout << "Int����Ĺ��캯��\n";
        };
        operator int(){  // ���������ʽת��������Ӧע�⵽������������صĲ�֮ͬ��
            return n;
        }
};
// �±����������
const int SIZE = 10;
class safearray{
    private:
        int arr[SIZE];
    public:
        safearray(){
            register int i;
            for(i = 0; i < SIZE; i++)
                arr[i] = i;
        }
        // �±����������
        int & operator[](int i){
            if(i > SIZE){
                cout << "�����������ֵ: ";
                return arr[0];
            }
            return arr[i];
        }      
};

// ���Ա���������->
class OO{
    static int i,j;
    public:
        void f() const{  // ������
            cout << i++ << endl;
        }
        void g() const{
            cout << j++ << endl;
        }
};
// ��̬��Ա����
int OO::i = 10;
int OO::j = 12;
// Ϊ�������ʵ��һ������
class ObjContainer {
   vector<OO*> a;
public:
   void add(OO* obj)
   { 
      a.push_back(obj);  // ���������ı�׼����
   }
   friend class SmartPointer;
};
// ʵ������ָ�룬���ڷ����� Obj �ĳ�Ա
class SmartPointer {
   ObjContainer oc;
   int index;
public:
   SmartPointer(ObjContainer& objc)
   { 
       oc = objc;
       index = 0;
   }
   // ����ֵ��ʾ�б����
   bool operator++() // ǰ׺�汾
   { 
     if(index >= oc.a.size() - 1) return false;
     if(oc.a[++index] == 0) return false;
     return true;
   }
   bool operator++(int) // ��׺�汾
   { 
      return operator++();
   }
   // ��������� ->
   OO* operator->() const 
   {
     if(!oc.a[index])
     {
        cout << "Zero value";
        return (OO*)0;
     }
     return oc.a[index];
   }
};
 

int main(){
    A a;
    // �������
    a.print(2);
    // ���������
    a.print(3.14);
    // ����ַ���
    char c[] = "Hello Curry";
    a.print(c);
    cout << "----------------------------------------------\n";
    Box box1;
    Box box2;
    Box box3;
    double volume = 0.0;
    box1.setLength(6.0);
    box1.setWidth(7.0);
    box1.setHeight(5.0);

    box2.setLength(12.0);
    box2.setWidth(13.0);
    box2.setHeight(10.0);

    volume = box1.getVolume();
    cout << "box1�������: " << volume << endl;
    volume = box2.getVolume();
    cout << "box2�������: " << volume << endl;

    box3 = box1 + box2;
    volume = box3.getVolume();
    cout << "box3�������: " << volume << endl;
    cout << "----------------------------------------------\n";
    Time T1(11, 59), T2(10, 40);
    ++T1;
    T1.display();
    ++T1;
    T1.display();

    T2++;
    T2.display();
    T2++;
    T2.display();
    cout << "----------------------------------------------\n";
    CA ca,cb;
    ca.pos = 1;
    cb = ca++;
    cout << "cb = " << cb.pos << endl;
    cb = ++ca;
    cout << "cb = " << cb.pos << endl;
    cout << "----------------------------------------------\n";
    Distance D1(10, 11), D2(5, 11);
    -D1;
    D1.displayDistance();
    -D2;
    D2.displayDistance();
    cout << "----------------------------------------------\n";
    if (D1 < D2)
        cout << "D1 < D2\n";
    else    
        cout << "D1 > D2\n";
    cout << "----------------------------------------------\n";
    Distance D3(11, 10), D4(3, 2), D5;
    cout << "������Ŀ��ֵD5 = ";
    cin >> D5;
    cout << "D3 = " << D3 << endl;
    cout << "D4 = " << D4 << endl;
    cout << "D5 = " << D5 << endl; 
    cout << "----------------------------------------------\n";
    D1 = D2;
    cout << "D1: " << D1 << endl;
    D1.displayDistance();
    cout << "----------------------------------------------\n";
    Int int_obj(3);
    int i = int_obj;  // ��ʽ����ת������
    cout << "i = " << i << endl;
    cout << "int_obj = " << int_obj << endl;  // ����δ����Int��<<������������ʽ����ת������
    cout << "----------------------------------------------\n";
    Distance D6;
    D6 = D1(10, 10, 10);
    cout << "D6: " << D6 << endl;
    cout << "----------------------------------------------\n";
    safearray sa;
    cout << "sa[2] = " << sa[2] << endl;
    cout << "sa[5] = " << sa[5] << endl;
    cout << "sa[12] = " << sa[12] << endl;
    cout << "----------------------------------------------\n";
    const int sz = 10;
    OO o[sz];
    ObjContainer oc;
    for(int i = 0; i < sz; i++)
    {
        oc.add(&o[i]);
    }
    SmartPointer sp(oc); // ����һ��������
    do {
        sp->f(); // ����ָ�����
        sp->g();
    } while(sp++);
    return 0;
}