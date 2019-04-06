#include "iostream"
#include "malloc.h"


using namespace std;


// ����Ķ�̬�ڴ����
class Box{
    public:
        Box(){
            cout << "���ù��캯��\n";
        }
        ~Box(){
            cout << "������������\n";
        }
};
// new��malloc������
class TEST{
    private:
        int num1;
        int num2;
    public:
        TEST(){
            num1 = 10;
            num2 = 20;
        }
        void Print(){
            cout << num1 << " " << num2 << endl;
        }
};



int main(){
    double *ptr = NULL;   // ��ʼ��Ϊnull��ָ��
    ptr = new double;   // Ϊ���������ڴ�

    *ptr = 3.14;   // �ڷ���ĵ�ַ�洢ֵ
    cout << "*ptr = " << *ptr << endl;
    delete ptr;   // �ͷ��ڴ�
    cout << "-------------------------------\n";
    // ��ά����
    int **p;
    int i, j;  // p[4][8]
    // ��ʼ����4��8�еĶ�ά��������
    p = new int *[4];
    for(i = 0; i < 4; i++)
        p[i] = new int [8];
    
    for(i = 0; i < 4; i++){
        for(j = 0; j < 8; j++)
            p[i][j] = j * i;
    }
    // ��ӡ����
    for(i = 0; i < 4; i++){
        for(j = 0; j < 8; j++){
            if(j == 0)
                cout << endl;
            cout << p[i][j] << "\t";
        }
    }
    cout << endl;
    // ��ʼ�ͷ�����Ķ�
    for(i = 0; i < 4; i++)
        delete [] p[i];
    delete p;
    cout << "-------------------------------\n";
    // ��ά����
    int i1, j1, k1; //p[2][3][4]
    int ***pt;
    pt = new int **[2];
    for(i1 =0; i1 < 2; i1++){
        pt[i1] = new int *[3];
        for(j1 = 0;j1<3;j1++)
            pt[i1][j1] = new int[4];
    } 
    // ���pt[i][j][k]��ά����
    for(i1 = 0;i1 <2;i1++){
        for(j1=0;j1 <3;j1++){
            for(k1=0; k1 < 4; k1++){
                pt[i1][j1][k1] = i1 + j1 + k1;
                cout << pt[i1][j1][k1] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    // �ͷ��ڴ�
    for(i1 = 0; i1 < 2; i1++){
        for(j1 = 0; j1 < 3; j1++)
            delete [] pt[i1][j1];
    }

    for(i1 = 0; i1 < 2; i1++)
        delete [] pt[i1];

    delete [] pt;
    cout << "-------------------------------\n";
    Box *boxarray = new Box[4];
    delete [] boxarray;  // ɾ������
    cout << "-------------------------------\n";
    /*
    ��malloc()�����ڶ�������һ���ڴ�ռ䣬Ȼ��Ըÿ��ڴ�ռ����ǿ������(TEST*)ת��
    ����Ϊ��һ��TEST������ⲻ�����TEST��Ĭ�Ϲ��캯��
    */
   TEST *t_obj1 = (TEST *)malloc(sizeof(TEST));
   t_obj1->Print();
   // ��new�ڶ�������һ��TEST��Ķ���������TEST���Ĭ�Ϲ��캯��
   TEST *t_obj2 = new TEST;
   t_obj2->Print();
    return 0;
}