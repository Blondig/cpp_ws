#include "iostream"
#include "iomanip"


using namespace std;



int main(){
    // ��׼���cout
    char str[] = {"Hello C++"};
    cout << "Value of str is: " << str << endl;
    // ��׼����cin
    cout << "�������������: ";
    char name[50];
    cin >> name;
    cout << "���������: " << name << endl;
    // ��׼����cerr
    char error[] = "���ִ�����...";
    cerr << error << endl;
    // ��׼��־��clog
    char logs[] = "��¼��־...";
    clog << logs << endl;

    // ����������еĺ���
    cout << setiosflags(ios::left|ios::showpoint);  // ���������룬һһ���ʵ����ʽ��ʾ
    cout.precision(5);  // ���ó�С��������5λ��Ч����
    cout << 124.456789 << endl;
    cout.width(10);  // ������ʾ���10
    cout.fill('*');  // ����ʾ����հ״���*���
    cout << resetiosflags(ios::left);  // ���״̬�����
    cout << setiosflags(ios::right);  // �����Ҷ���
    cout << 123.456789 << endl;
    cout << setiosflags(ios::left|ios::fixed);  // ��������룬�Թ̶�С��λ��ʾ
    cout.precision(3);  // ����ʵ����ʾ3λС��
    cout << 999.123456 << endl;
    cout << resetiosflags(ios::left|ios::fixed);  // ��������Ͷ����ʽ
    cout << setiosflags(ios::left|ios::scientific);  // ��������룬�Կ�ѧ��������ʾ
    cout.precision(3);  // ���ñ���3λС��
    cout << 123.456789 << endl;
    return 0;
}
