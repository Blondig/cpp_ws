#include "iostream"
#include "algorithm"
#include "vector"

using namespace std;


int main(){
    int a[10] = {10, 20, 44, 66, 99, 101};
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);  // �˺�v�����4��Ԫ�أ�1,2,3,4
    vector<int>::iterator p;
    p = find(v.begin(), v.end(), 3);  // ��v�в���3
    if(p!=v.end())  // ���Ҳ���,find���� v.end()
        cout << *p << endl;  // �ҵ���
    p = find(v.begin(), v.end(), 9);  
    if(p == v.end())
        cout << "not found!\n";
    p = find(v.begin()+1, v.end()-1, 4); // ��,3 ������Ԫ���в���4
    cout << *p << endl;
    int *pp = find(a, a+4, 20);
    if(pp == a+4)
        cout << "not found" << endl;
    else    
        cout << *pp << endl;
    return 0;
}