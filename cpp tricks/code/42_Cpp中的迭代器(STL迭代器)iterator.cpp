#include "iostream"
#include "vector"
#include "list"
#include "algorithm"  // Ҫʹ�ò����������ĺ���ģ�壬��Ҫ�������ļ�!!

using namespace std;



int main(){
    // �������÷�ʵ��
    vector<int> v;  // v�д��int���ͱ����Ŀɱ䳤�����飬��ʼʱû��Ԫ��
    for(int n=0; n < 5; n++)
        v.push_back(n);  // push_back()��Ա������vector����β�����һ��Ԫ��
    vector<int>::iterator i;  // �������������
    cout << "�����������������: ";
    for(i = v.begin(); i!=v.end();++i){  // �������������ǰ�����������,ʹ��ǰ��++,��ʹ�ú���++,��Ϊ�⽫�ή������ʱ�䣬ԭ����++����������أ�����++�������һ���ֲ�����temp!
        cout << *i << " ";   // *n���ǵ�����nָ���Ԫ��
        *i *= 2;   // ÿ��Ԫ�ر�Ϊԭ����2��
    }
    cout << endl;
    // �÷����������������
    cout << "�����������������: ";
    vector<int>::reverse_iterator j;
    for(j=v.rbegin(); j != v.rend();++j)   // �÷���������Ӻ���ǰ��������,ʹ��ǰ��++,��ʹ�ú���++,��Ϊ�⽫�ή������ʱ�䣬ԭ����++����������أ�����++�������һ���ֲ�����temp!
        cout << *j << " ";
    cout << "-------------------------------------\n";
    // �������Ĺ��ܷ���
    vector<int> v1(10);   // v1��ʼ������10��Ԫ��
    for(int i = 0; i < v.size(); ++i)  // size()����Ԫ�صĸ���
        cout << "v1[" << i << "] = " << v1[i] << " ";
    cout << endl;
    vector<int>::iterator i1;
    for(i1 = v1.begin(); i1 != v1.end(); ++i1)  // �� != �Ƚ�����������
        cout << *i1;
    cout << endl;
    for(i1 = v1.begin(); i1 < v1.end(); ++i1)  // �� < �Ƚ�����������
        cout << *i1;
    cout << endl;
    i1 = v.begin();
    while(i1 < v.end()){  // ���һ�����
        cout << *i1;
        i1 += 2;   // ������ʵ�����֧�� "+= ����"  �Ĳ���
    }
    cout << endl;
    cout << "-------------------------------------\n";
    // �������ĸ�������
    int a[5] = {6, 66, 666, 6666, 0};
    list<int> lst(a, a+5);
    list<int>::iterator p = lst.begin();  // ������p��������һ��ָ��
    advance(p, 2);    // p����ƶ�����Ԫ�أ�ָ��666
    cout << *p << endl;  // ���666
    advance(p, -1);  // p��ǰ�ƶ�һ��Ԫ�أ�ָ��66
    cout << *p << endl;  // ���66
    list<int>::iterator q = lst.end();
    q--;  // qָ��5
    cout << distance(p, q) << endl;  // ���3
    iter_swap(p, q);  // ��Ŵ�1��ʼ������2�ź�5��Ԫ��
    for(p = lst.begin(); p != lst.end(); ++p)
        cout << *p << " ";
    return 0;
}
