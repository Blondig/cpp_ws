#include "iostream"

using namespace std;

int main(){
    // if���
    int a = 20;
    if (a < 10)
        cout << "a��ֵС��20\n";
    cout << "a = " << a << endl;
    // if-else���
    int aa = 100;
    if(aa < 20)
        cout << "aa��ֵС��20\n";
    else    
        cout << "aa��ֵ����20\n";
    cout << "aa = " << aa << endl;
    // if else  if else���
    int a1 = 100;
    if (a1 == 10)
        cout << "a1��ֵ��10\n";
    
    else if (a1 == 20)
    {
        cout << "a1��ֵ��20\n";
    }
    else if (a1 == 30)
    {
        cout << "a1��ֵ��30\n";
    }else{
        cout << "����������������\n";
    }
    cout << "a1 = " << a1 << endl;
    // Ƕ��if���
    int a2 = 100;
    int b2 = 200;
    if (a2 == 100){
        if (b2 == 200){
            cout << "a2��ֵ��100,b2��ֵ��200\n";
        }
    }
    cout << "a2 = " << a2 << endl;
    cout << "b2 = " << b2 << endl;
    // switch���
    char grade = 'D';
    switch(grade){
        case 'A':
            cout << "����\n";
            break;
        case 'B':
            cout << "����\n";
            break;
        case 'C':
            cout << "����\n";
            break;
        case 'D':
            cout << "������\n";
            break;
        default:
            cout << "�ɼ���Ч\n";
            break;
    }
    cout << "��ĳɼ���: " << grade << endl;
    // switch���Ƕ��
    int a3 = 100;
    int b3 = 200;
    switch(a3){
        case 100:
            cout << "�����ⲿ��switch��һ����\n";
        switch (b3){
            case 200:
                cout << "�����ڲ���switch��һ����\n";
        }
    }
    cout << "a3 = " << a3 << endl;
    cout << "b3 = " << b3 << endl;
    // ?:�����
    int a4, b4, c4, d4, m, n, z;
    a4 = 10;
    b4 = 20; 
    c4 = 30;
    d4 = 40;
    m = a4 > b4 ? a4 : b4;
    n = c4 > d4 ? c4 : d4;
    z = m > n ? m:n;
    cout << "�ĸ����е����ֵ��: " << z << endl;
    return 0;
}