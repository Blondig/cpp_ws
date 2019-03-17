#include "iostream"

using namespace std;

void printSequence(int a[], int size);
void selectSort(int a[], int size);

/*        ѡ������      */
int main(){
    const int SIZE = 7;
    int a[SIZE] = {5, 7, 2, 8, 9, 1, 4};
    cout << "ѡ������ǰ: ";
    printSequence(a, SIZE);

    selectSort(a, SIZE);

    cout << "ѡ�������: ";
    printSequence(a, SIZE);
    return 0;
}


void printSequence(int a[], int size){
    for (int i = 0; i <= size - 1; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

// ѡ������
void selectSort(int a[], int size){
    int minIndex, temp;
    for (int ix = 0; ix < size - 1; ix++){  // ͨ�����forѭ�����������б�����������СԪ������Ӧ������
        minIndex = ix; // ���forѭ����ʼѭ��ʱ����minIndex��ʼ��Ϊ�����һ��Ԫ�ص�����
        for (int jx = ix + 1; jx < size; jx++){ // ͨ���ڲ�forѭ���ҳ���СԪ�أ�������СԪ������Ӧ��������ֵ��minIndex
            if (a[jx] < a[minIndex])
                minIndex = jx;
        }
        temp = a[ix];
        a[ix] = a[minIndex];
        a[minIndex] = temp;
    }
}