#include "iostream"

using namespace std;


class Line{
    public:
        int getLength();
        Line(int len);  // ��ͨ�Ĺ��캯��
        Line(const Line &obj); // �������캯��
        ~Line();  // ��������
    private:
        int *ptr;
};
// ���캯������ 
Line::Line(int len){
    cout << "���ù��캯��..." << endl;
    ptr = new int;  // Ϊָ������ڴ�
    *ptr = len;
}
// �������캯������
Line::Line(const Line &obj){  // &obj�Ƕ���line��һ�����ã�������������������ʼ����һ������
    cout << "���ÿ������캯������Ϊָ��ptr�����ڴ�" << endl;
    ptr = new int;
    *ptr = *obj.ptr;  // ����ֵ
}
// ������������
Line::~Line(){
    cout << "�ͷ��ڴ�\n";
    delete ptr;
}
// ��ͨ��Ա��������
int Line::getLength(){
    return *ptr;
}

void display(Line obj){
    cout << "line��С: " << obj.getLength() << endl;
}

// ��Ķ��󿽱��ļ�����
class C{
    private:    
        int a;
    public:
    // ���캯��
        C(int b): a(b){
            cout << "����C�Ĺ��캯��....\n";
        }
    // �������캯��:һ������Ĺ���ĺ��������������Ʊ���������һ�����������һ�������Ǳ������͵�һ�����ñ���
        C(const C &C_rename){
            a = C_rename.a;
            cout << "����C�Ŀ������캯��......\n";
        }
        // һ��ĳ�Ա����
        void show(){
            cout << "a = " << a << endl;
        }
};

// 1.������ֵ���ݵķ�ʽ���뺯����Ϊ����
class D{
    private:
        int a;
    public:
        // ���캯��
        D(int b): a(b){
            cout << "����D�Ĺ��캯��...\n";
        }
        // �������캯��
        D(const D& D_reference){
            a = D_reference.a;
            cout << "����D�������캯��...\n";
        }
        // ��������
        ~D(){
            cout << "����D��������,ɾ��a = " << a << endl;
        }  
        // ��ͨ��Ա����
        void show(){
            cout << "a = " << a << endl;
        }
};

// ȫ�ֺ���������ĺ���������D��ĳ������
void d_Fun(D d_obj){
    cout << "test D\n";
}

class E{
    private:
        int a;
    public:
        // ���캯��
        E(int b): a(b){
            cout << "����E�Ĺ��캯��\n";
        }
        // �������캯��
        E(const E& e_reference){
            a = e_reference.a;
            cout << "����E�Ŀ������캯��\n";
        }
        // ��������
        ~E(){
            cout << "�����E������������ɾ�� a = " << a << endl;
        }
        // ��ͨ��Ա����
        void show(){
            cout << "a = " << a << endl;
        }
};

// ȫ�ֺ���,�����ķ���ֵ��E��ĳ������
E e_Fun(){
    E temp(20);
    return temp;
}

class Rect{
    public:
        Rect(){
            count++;
        }
        // �Զ��忽�����캯��
        Rect(const Rect& r){
            width = r.width;
            length = r.length;
            count++;
        }
        ~Rect(){
            count--;
        }
        static int getCount(){  // ��̬��Ա����
            return count;
        }
    private:
        int width;
        int length;
        static int count;  // ��̬��Ա����count������
};

// ��̬��Ա������ʼ��
int Rect::count = 0;

// ǳ����
class BB{
    public:
        BB(){  // ���캯����pָ����з����һ�ռ�
            p = new int(100);
            cout << "����BB�Ĺ��캯��\n";
        }
        ~BB(){  // �����������ͷŶ�̬����Ŀռ�
            if(p!=NULL)
                delete p;
                cout << "����BB����������\n";
        }
    private:
        int width;
        int length;
        int *p;  // ָ���Ա
};
// ���
class DD{
    public:
        DD(){
            p = new int (100);
            cout << "����DD�Ĺ��캯��\n";
        }
        // �Զ���Ĭ�Ͽ������캯��
        DD (const DD& dd){
            width = dd.width;
            length = dd.length;
            p = new int;  // Ϊ�¶������¶�̬����ռ�
            *p = *(dd.p);
            cout << "����DD�Ŀ������캯��\n";
        }
        ~DD(){
            if (p!=NULL)
                delete p;
                cout << "����DD����������\n";
        }
    private:
        int width;
        int length;
        int *p;
};


// ��ֹĬ�Ͽ����ķ���
class FF{
    private:
        int a;
    public:
        FF(int b): a(b){
            cout << "����FF�Ĺ��캯��\n";
        }
    private:
        FF(const FF& ff){
            a = ff.a;
            cout << "����FF�Ŀ������캯��\n";
        }
    public:
        ~FF(){
            cout << "����FF����������,ɾ��a = " << a << endl;
        }
        // ��ͨ��Ա����
        void show(){
            cout << "a = " << a << endl;
        }
};

// ȫ�ֺ���
void ff_fun(FF ff_param){
    cout << "test\n";
}

int main(){
    Line line(10);
    display(line);
    cout << "-------------------------------\n";
    Line line2 = line;  // ���ÿ������캯��
    display(line2);
    cout << "-------------------------------\n";
    C c1_obj(666);
    C c2_obj = c1_obj; // �ȼ���C c2_obj(c1_obj);
    c2_obj.show();
    cout << "-------------------------------\n";
    D d_obj1(999);
    d_Fun(d_obj1);
    cout << "-------------------------------\n";
    e_Fun();
    cout << "-------------------------------\n";
    Rect rect1;
    cout << "The count of Rect: " << Rect::getCount() << endl;

    Rect rect2(rect1);  // �µĶ�����Ҫʹ���ϵĶ��������г�ʼ��
    cout << "The count of Rect: " << Rect::getCount() << endl;
    cout << "-------------------------------\n";
    BB bb1;
    BB bb2 = bb1;  // ���ƶ���
    cout << "-------------------------------\n";
    DD dd1;
    DD dd2(dd1);
    cout << "-------------------------------\n";
    FF test(1);
    // ff_fun(test);  ��ֵ���ݽ��ᱨ��!
    return 0;
}