#include <iostream>

using namespace std;


int main(){
    // str1��str2�������ַ������飬���ǻ�Ϊ���Ƿ��䳤��Ϊ12�ֽڵĿռ䣬��Ϊ��������ʼ��ַ��ͬ�����飬��str1!=str2
    char str1[] = "hello world";
    char str2[] = "hello world";
    if(str1 == str2)
        cout << "str1��str2��ͬ\n";
    else
        cout << "str1��str2��ͬ\n";
    
    // str3 �� str4������ָ�룬����Ϊ���Ƿ����ڴ����洢�ַ��������ݣ�ֻ��Ҫ������ָ��"hello world"���ڴ��еĵ�ַ�Ϳ����ˡ�
    // ����"hello world"���ַ��������������ڴ���ֻ��һ�����������str3��str4ָ��ͬһ����ַ
    char *str3 = "hello world";
    char *str4 = "hello world";
    if(str3 == str4)
        cout << "str3��str4��ͬ\n";
    else    
        cout << "str3��str4��ͬ\n";
    return 0;
}