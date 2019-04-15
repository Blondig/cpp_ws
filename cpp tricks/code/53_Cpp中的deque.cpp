#include "iostream"
#include "deque"

using namespace std;

/*˫�����deque:��queue���������ڶ�ͷ�Ͷ�β�����Խ���ɾ���Ͳ������*/


int main(){
    deque<int> d;
    for(int i = 0; i < 100; i++)
        d.push_back(i);
    cout << "size1 = " << d.size() << endl;
    d.push_front(-1); // ��val����������ͷ��
    cout << "d[0]=" << d.at(0) << ",size2 = " << d.size() << endl;
    d.pop_front();  // ɾ������ͷ����Ԫ��
    cout << "d[0]=" << d.at(0) << ",size3 = " << d.size() << endl;
    d.resize(0);
    cout << "d.empty() = " << d.empty() << endl;

    return 0;
}