#include <iostream>
#include <climits>  // ������INT_MAX�ȷ��ų���
#define ZERO 0

/*
c++�л������������ݣ�char short int long�� long long��ÿ�����������з��ź��޷��������汾������һ����10�����Ϳ���ѡ��
�ֽ���λ֮��Ĺ�ϵ��
1�ֽ�==8λ��ÿ��λ��0��1�����������8λ����256�����������8λ��Ԫ���Ա�ʾ0-255����-128-127֮�����
16λ��Ԫ���Դ洢0-65535����-32768-32767֮�����
sizeof()�����ر���/���͵ĳ��ȣ���λ���ֽ�;��������ʹ��sizeofʱ������Ҫ��(),���Ա�����ʹ��sizeofʱ��()����ʡ��
*/
using namespace std;

int main()
{
	int n_int = INT_MAX;  // ����ֵ�������ϲ���һ���Ϊ��ʼ��
	// ����������3�ֲ�ͬ�������б�����ʼ��
	int emus{ 7 };
	int rheas = { 12 };
	int rocs = {};
	cout << "emus value is " << emus << endl;
	cout << "rocs value is " << rocs << endl;
	// �����з�����������
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;
	cout << "int is " << sizeof (int) << " bytes." << endl;   // 4�ֽ�
	cout << "short is " << sizeof n_short << " bytes." << endl; // 2�ֽ�
	cout << "long is " << sizeof(n_long) << " bytes." << endl;  // 4�ֽ�
	cout << "long long is " << sizeof(n_llong) << " bytes." << endl; // 8�ֽ�
	cout << endl;
	cout << "Max values: " << endl;
	cout << "int is: " << n_int << endl;
	cout << "short is: " << n_short << endl;
	cout << "long is: " << n_long << endl;
	cout << "long long is: " << n_llong << endl;
	// �����������޷��������������
	unsigned short change;
	// unsigned change; ����������ǵȼ�
	unsigned int rovert;
	unsigned long gone;
	unsigned long long lang_lang;
	short sam = SHRT_MAX; // �������
	unsigned short sue = sam; // �޷���ʾ����-1
	cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << endl;
	sam += 1;
	sue += 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << endl;
	sam = ZERO;
	sue = ZERO;
	cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << endl;
	sam -= 1;
	sue -= 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << endl;
	// ���ͳ���
	int chest = 42;  // ʮ����
	int waist = 042; // �˽���
	int xwast = 0x42; // ʮ������
	cout << "chest value is " << chest << endl;
	cout << hex;
	cout << "chest value is " << chest << " �˽��Ʊ�ʾ" << endl;
	cout << oct;
	cout << "chest value is " << chest << " ʮ�����Ʊ�ʾ" << endl;
	cout << "waist value is " << waist << endl;
	cout << "xwast value is " << xwast << endl;
	// ȷ������������------ʹ�ú�׺L��U
	int curry = 2000LU;
	// ���һ������: char����-------�ַ���С����(ռһ���ֽ�),һ���ַ��ö�ӦASCII������ʾ
	char chr1;
	cout << "Enter a char: " << endl;
	cin >> chr1;
	cout << "Thank you for the " << chr1 << " character." << endl;
	// c++���õ����ű�ʾ�����ַ�' ', ˫���ű�ʾ�ַ���" "
	cout << endl;
	char ch = 'M';
	int i = ch;
	cout << "�ַ� " << ch << " ��ASCII���� " << i << endl;
	ch += 1;
	i = ch;
	cout << "�ַ� " << ch << " ��ASCII���� " << i << endl;
	// ת���ַ���\n \t \v \b \r \\ \? \' \" \a
	// �ַ������ݵ����η�
	char curry1;
	unsigned harden;  // 0-255
	signed durant;   // -128-127
	// wchar_t���ַ����ͣ�ʹ��wcin wcout������wchar_t������ǰ׺L����ʾ���ַ�����/���ַ���
	wchar_t bob =  L'P';
	wcout << L"Hello" << endl;
	// ��������
	bool is_ready = true;
	int boff = true;  // �൱��boff = 1
	int ddf = false;  // �൱��ddf = 0
	bool start = 100;
	bool ssh = 0;
	// const�޶���
	const int Months = 12; // ����ĸ��д������Months��һ�������������޸�
	// ������--------3������float ��double ��long double
	// ��׼С������ 3.1415�� 6798.55 8.0
	// E��ʾ����3.34E6 7E5 -12.8E6 9.11e-32
	// ���㳣����ʾ�� float���� 1.234f double���� 1.234E5  long double ���� 1.234L
	// float ֻ��֤6λ��Чλ,ռ4���ֽڣ� double ռ8���ֽ�
	float a = 2.34E+22f;
	float b = a + 1.0f;
	cout << "a = " << a << endl;
	cout << "b-a " << b - a << endl;
	// c++��������� %����ģ��������������������붼�����ͣ�
	cout.setf(ios_base::fixed, ios_base::floatfield); // ����float�����ֵ
	float hats, heads;
	cout << "Enter a number: ";
	cin >> hats;
	cout << "Enter another number: ";
	cin >> heads;
	cout << "hats = " << hats << endl;
	cout << "heads = " << heads << endl;
	cout << "heads + hats " << heads + hats << endl;
	cout << "hats - heads " << hats - heads << endl;
	cout << "hats * heads " << hats * heads << endl;
	cout << "hats / heads " << hats / heads << endl;
	// ��������/: ������������������ʱ�������������Ľ����������/һ��ΪС��ʱ������Ǹ�����
	cout << "9 / 5 = " << 9 / 5 << endl;
	cout << "9.0 / 5 = " << 9.0 / 5 << endl;
	// ����ת��
	// 1.��ʼ���͸�ֵ��������ת��
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tree = 3;
	int guess(3.9832); // ��ֵ���guess = 3.9832;
	int debt = 7.3E12;
	cout << "tree = " << tree << endl;
	cout << "guess = " << guess << endl; //�������͸�ֵ�����ͣ�����ȡ������С������
	cout << "debt = " << debt << endl;
	// 2.ǿ������ת��
	// int thron;
	// long (thron); // c++��ʽ
	// (long) thron;  // c��ʽ
	cout << int ('Q') << endl;
	// static_cast<> �����ڽ�ֵ��һ����ֵ����ת��Ϊ��һ����ֵ���� ��ʽ��static_cast<typename> (value)
	int auks, bats, coots;
	auks = 19.99 + 11.99;
	bats = (int) 19.99 + (int) 11.99;
	coots = int(19.99) + int(11.99);
	cout << "auks = " << auks << endl;
	cout << "bats = " << bats << endl;
	cout << "coots = " << coots << endl;
	char ch1 = 'Z';
	cout << "The code for " << ch1 << " is ";
	cout << int(ch1) << endl;
	cout << static_cast<int> (ch1) << endl;
	// auto������ʹ��auto�ؼ��֣�����ָ������������
	auto n = 100;
	auto d = 1.2;
	auto x = 1.2e12L;
	return 0;

}
