#include "iostream"
#include "cstring"
#include "string"

#define N 100

using namespace std;

int main(){
    // 1 ���ַ��������У������ڳ�ʼ��ʱ��д\0����һ�������ɱ������Զ����
    char greeting[6] = {'H', 'e', 'l', 'l', 'o'};
    cout << "greeting: " << greeting << endl;
    // 2 �ַ����еĳ�������:
    char str1[11] = "hello";
    char str2[11] = "world";
    char str3[11];
    int len, result;
    // ����str1��str3
    strcpy(str3, str1);
    cout << "strcpy(str1, str3):" << str3 << endl;
    // ����str1��str2
    strcat(str1, str2);
    cout << "strcat(str1, str2):" << str1 << endl;
    // ���Ӻ�str1���ܳ���
    len = strlen(str1);
    cout << "strlen(str1):" << len << endl;
    // str1��str2�Ƚ�
    result = strcmp(str1, str2);
    cout << "strcmp(str1, str2):" << result << endl;
    cout << "-------------------------�ָ���-------------------------\n";
    // 3 Cpp�е��ַ���
    string s1 = "abandon";
    string s2 = "banana";
    string s3;
    // ����s1��s3
    s3 = s1;
    cout << "s3:" << s3 << endl;
    // ����s1��s2
    s3 = s1 + s2;
    cout << "s1 + s2:" << s3 << endl;
    // ���Ӻ��s3�ܳ���
    int len1, result1;
    len1 = s3.size();
    cout << "s3.size():" << len1 << endl;
    // �Ƚ�s1��s2
    result1 = s1 > s2;
    cout << "s1 > s2:" << result1 << endl;
    // 4 string���е���������
    string name = "Curry";
    cout << "The length of string is:" << name.length() << endl;
    // ƴ��
    name.append("Coder");
    cout << "name:" << name << endl;
    // ɾ��
    int pos;
    pos = name.find("Coder");  // ����Coder���ַ����е�λ��
    cout << "pos = " << pos << endl;
    name.replace(pos, 4, "");  // ��λ��pos��ʼ,���������4���ַ��������滻Ϊ�ո�
    cout << "name = " << name << endl;
    // ���Ӵ�
    int first = name.find_first_of("r");  // ��ͷ�ҵ��ַ�r��λ��
    int last = name.find_last_of("r");   // ��β�����ַ���λ��
    cout << name.substr(first + 1, last - first -1) << endl; // ��ȡ����r֮����ַ��Ӵ�
    // 5 cin.getline()����
    char X[N];
    cin.getline(X,N);
    int a = 0, b = 0;
    for (int i=0; i < N;i++){
        if (X[i] == '#')  // #�ǽ�β��־
            break;
        if (X[i] >= '0' && X[i] <= '9')  // ͳ�����ָ���
            a++;
        if ((X[i] >= 'a' && X[i] <= 'z') || (X[i] >= 'A' && X[i] <= 'Z')) // ͳ����ĸ����
            b++;
    }
    cout << "a = " << a << " b = " << b << endl;
    // �ַ�������ֵ���׼��string����ͬһ������
    string s("hello");
    cout << "s.size() = " << s.size() << endl;  // ��ȷ
    // cout << "hello".size() << endl;  ����
    cout << s + "world" << endl;  // ��ȷ
    // cout << "hello" + "world" << endl;  ����
    // �ַ���������������������������ݣ�������ͨ���鲻����
    int aa[10] = {1, 2, 3, 4, 6, 7};
    char bb[6] = {'h', 'a', 'a', 'p', 'y', '\0'};
    char cc[] = "happy";
    cout << "aa = " << aa << endl;
    cout << "bb = " << bb << endl;
    cout << "cc = " << cc << endl;
    return 0;
}