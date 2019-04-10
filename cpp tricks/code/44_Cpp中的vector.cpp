#include "iostream"
#include "vector" // ʹ��vector��Ҫ������ͷ�ļ�

using namespace std;

// ����ģ��
template <typename T>
void PrintVector(const vector<T> &v)
{
    // �������vector������ȫ��Ԫ�صĺ���ģ��
    typename vector<T>::const_iterator i; // typename����˵�� vector <T>::const_iterator��һ�����ͣ��� Visual Studio �в�дҲ����
    for (i = v.begin(); i != v.end(); ++i)
        cout << *i << " ";
    cout << endl;
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    vector<int> v(a, a + 5);             // ������a�����ݷ���v
    cout << v.end() - v.begin() << endl; // ��������������������
    PrintVector(v);
    v.insert(v.begin() + 2, 13); // �� begin()+2 λ�ò��� 13
    PrintVector(v);
    v.erase(v.begin() + 2); // ɾ��λ�� begin()+2 λ�õ�Ԫ��
    PrintVector(v);
    vector<int> v2(4, 100);                              // v2�� 4 ��Ԫ�أ����� 100
    v2.insert(v2.begin(), v.begin() + 1, v.begin() + 3); // ��v��һ�β���v2��ͷ
    PrintVector(v2);
    v.erase(v.begin() + 1, v.begin() + 3); // ɾ�� v �ϵ�һ�����䣬�� [2,3)
    PrintVector(v);
    cout << "----------------------------------------------------------\n";
    // vectorǶ���γɶ�ά����
    vector<vector<int> > v3(3); // v3����3��Ԫ�أ�ÿ��Ԫ�ض���vector<int>����
    for (int i = 0; i < v3.size(); ++i)
    {
        for (int j = 0; j < 4; ++j)
            v3[i].push_back(j);
    }
    for (int i = 0; i < v3.size(); ++i)
    {
        for (int j = 0; j < v3[i].size(); ++j)
            cout << "v3[" << i << "][" << j << "] = " << v3[i][j] << " ";
        cout << endl;
    }
    return 0;
}