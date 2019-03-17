#include "iostream"

using namespace std;

void bubleSort(int * a, int n);


int main(){
    int ix;
    int a[] = {8, 34, 3, 13, 1, 21, 5, 2};
    int a_length = (sizeof(a)) / (sizeof(a[0]));   // �������ĳ���s
    cout << "ð������ǰ:";
    for (int ix = 0; ix < a_length; ix++)
        cout << a[ix] << " ";
    cout << endl;

    bubleSort(a, a_length);

    cout << "ð�������:";
    for (int ix = 0; ix < a_length; ix++)
        cout << a[ix] << " ";
    cout << endl;

    return 0;
}

void bubleSort(int * a, int n){   // int * a;����һ������ָ�룬���������������һ���仯���ȵ�����
    int ix, jx, temp;
    for (int ix=0; ix < n; ix++){
        for (jx=ix+1; jx < n; jx++){
            if (a[jx] < a[ix]){
                temp = a[jx];
                a[jx] = a[ix];
                a[ix] = temp;
            }
        }
    }
}