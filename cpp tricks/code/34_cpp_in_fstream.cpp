#include "iostream"
#include "fstream"    // �ļ��Ķ�ȡ��д���׼��

using namespace std;

// ���ļ���д���û���������ݣ�Ȼ�������ļ���ȡ��Ϣ���������������Ļ��
void file_wr(){
    char data[100];
    // ���ļ�д���û����������
    ofstream outfile;
    outfile.open("test.txt");
    cout << "write to the file......\n";
    cout << "Enter you name: ";
    cin.getline(data, 100);
    outfile << data << endl;
    cout << "Enter your name: ";
    cin >> data;
    cin.ignore();
    outfile << data << endl;
    outfile.close();
    cout << "----------------------------------------\n";
    // ���ļ���ȡ����
    ifstream infile;
    infile.open("test.txt");
    cout << "Read from the file......\n";
    infile >> data;
    cout << data << endl;
    infile >> data;
    cout << data << endl; 
    infile.close();
}
// ��һ���ļ����Ƶ���һ���ļ�
void file_copy(){
    char data[100];
    ifstream infile;
    ofstream outfile;
    infile.open("test.txt");
    outfile.open("test_copy.txt");
    cout << "copy from test.txt to test_copy.txt" << endl;
    while(!infile.eof()){
        infile >> data;
        cout << data << endl;
        outfile << data << endl;
    }
    infile.close();
    outfile.close();
}



int main(){
    char data[100];
    // ��дģʽ���ļ�
    ofstream outfile;
    outfile.open("afile.dat");  // ���ļ�
    cout << "write to the file......" << endl;
    cout << "Enter your name: ";
    cin.getline(data, 100);  // getline()�������ⲿ��ȡһ��
    // ���ļ�д���û����������
    outfile << data << endl;
    cout << "Enter your age: ";
    cin >> data;
    cin.ignore();   // ���Ե�֮ǰ��������µĶ����ַ�
    // �ٴ����ļ�д���û����������
    outfile << data << endl;
    // �ر��ļ�
    outfile.close();
    cout << "----------------------------------------------------\n";
    // �Զ��ķ�ʽ���ļ�
    ifstream infile;
    infile.open("afile.dat");
    cout << "Reading from the file......" << endl;
    // �����ļ��е�����
    infile >> data;
    // ����Ļ����ʾ����������
    cout << data << endl;
    // �ٴδ��ļ��϶�ȡ���ݣ�����ʾ����
    infile >> data;
    cout << data << endl;
    // �رմ򿪵��ļ�
    infile.close();
    cout << "----------------------------------------------------\n";
    file_wr();
    file_copy();
    cout << "----------------------------------------------------\n";
    // cin.ignore()��������
    int a, b, c;
    cout << "input a:";
    cin >> a;
    cin.ignore(1024, '\n');
    cout << "input b:";
    cin >> b;
    cin.ignore(1024, '\n');
    cout << "input c:";
    cin >> c;
    cin.ignore(1024, '\n');
    cout<< a << "\t" << b << "\t" << c << endl;
    cout << "----------------------------------------------------\n";
    char str1[30], str2[30], str3[30];
    cout << "�������������: ";
    cin >> str1;
    cout << "���������סַ: ";
    cin.ignore();
    cin.getline(str2, 30, 'a');
    cout << "������ļ���: ";
    cin.ignore();
    cin.getline(str3, 30);
    cout << str3;
    return 0;
}