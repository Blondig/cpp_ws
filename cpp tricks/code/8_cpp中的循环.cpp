#include "iostream"
#include "math.h"
#include "stdlib.h"

using namespace std;

int main(){

    // whileѭ��
    int a = 10;  // �ֲ���������
    while (a < 20){
        cout << "a = " << a << endl;
        a++;
    }
    cout << endl;
    // forѭ��
    for (int i = 10; i < 20; i++){
        cout << "i = " << i << endl;
    }
    cout << endl;
    // do-whileѭ��
    int j = 10;
    do{
        cout << "j = " << j << endl;
        j++;
    }while(j < 20);
    // Ƕ��ѭ��(�ҳ�2-100�ڵ�����)
    int m, n;
    for(m = 2; m < 100; m++) {
        for(n=2; n <= (m / n); n++) {
            if(!(m % n)) {
                break; // ����ҵ���m%n����0Ҳ����˵m������n������m��������
            }
        }
        if(n > (m / n)) {
            cout << m << " ������\n";
        }
    }
    cout << endl;
    // break���
    int aa = 10;
    do{
        cout << "aa = " << aa << endl;
        aa++;
        if (aa > 15)
            break;
    }while(aa < 20);
    cout << endl;
    // continue���
    int bb;
    for(bb = 1; bb <= 20; bb++){
        if(bb % 2 != 0)
            continue;
        cout << "bb = "  << bb << endl; // �ҳ�1-20�ڵ�ż��
    }
    // ����˷���
    int i1, j1;
    for (i1 = 1; i1 < 10; i1++){
        for (j1 = 1; j1 <= i1; j1++){
            cout << j1 << "��" << i1 << "=" << i1 * j1 << "  ";
        }
        cout << endl << endl;
    }
    // �������
    cout << "����������θ߶�n = ";
    int n1 = 0;
    cin >> n1;
    for (int i2 = 0; i2 < 2 * n1 + 1; i2++) {
        for (int j2 = 0; j2 < 2 * n1 + 1; j2++) {
            if (abs(i2 - n1) + abs(j2 - n1) == n1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}