#include "iostream"
#include "cstring"


using namespace std;



int main(){
    /*�ַ������ʼ��*/
    // ��һ�ֳ�ʼ���ķ���
    char str[10] = {'I',' ','a','m',' ','h','a','p','p','y'};  // ����\0,������������
    cout << "str=" << str << ",sizeof(str)=" << sizeof(str) << endl;
    // �ڶ��ֳ�ʼ���ķ���
    char str1[] = "I am happy";  // �ȼ���char str1[] = {"I am happy"};
    char str2[] = "python";
    // char str2[] = {'p', 'y', 't','h','o','n'}��char str2[] = "python"���ȼ�
    // char str2[] = {'p', 'y', 't','h','o','n', '\0'}��char str2="python"�ȼ�
    char str3[] = {'p', 'y', 't','h','o','n'};
    char str4[] = {'p', 'y', 't','h','o','n', '\0'};
    
    int num_str2 = sizeof(str2);
    int num_str3 = sizeof(str3);
    int num_str4 = sizeof(str4);
    
    cout << "str2��str3���ȼ�\n";
    cout << "str2 = " << str2 << ",sizeof(str2) = " << num_str2 << endl;
    cout << "str3 = " << str3 << ",sizeof(str3) = " << num_str3 << endl;
    cout << "str2��str4�ȼ�\n";
    cout << "str2 = " << str2 << ",sizeof(str2) = " << num_str2 << endl;
    cout << "str4 = " << str4 << ",sizeof(str4) = " << num_str4 << endl;
    // �ַ�ָ���ʼ��
    char *str5 = "python";
    cout << "str5 = " << str5 << endl;
    cout << "*str5 = " << *str5 << endl;
    cout << "sizeof(str5) = " << sizeof(str5) << endl;
    cout << "sizeof(*str5) = " << sizeof(*str5) << endl;
    return 0;
}