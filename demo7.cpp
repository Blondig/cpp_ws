// c++���η�
/*
C++ ������ char��int �� double ��������ǰ�������η������η����ڸı�������͵ĺ���
signed  unsigned long short
���η� signed��unsigned��long �� short ��Ӧ��������
signed �� unsigned ��Ӧ�����ַ���
long ��Ӧ����˫������
���η� signed �� unsigned Ҳ������Ϊ long �� short ���η���ǰ׺�����磺unsigned long int
C++ ����ʹ���ټǷ����������޷��Ŷ��������޷��ų����������Բ�д int��ֻд���� unsigned��short �� unsigned��long��int ��������
unsigned x;
unsigned int y;
*/
#include <iostream>
using namespace std;

/*
* ���������ʾ���з����������޷�������֮��Ĳ��
*/
int main()
{
	short int i;                  // �з��Ŷ�����
	unsigned short int j;        // �޷��Ŷ�����

	j = 50000;

	i = j;
	cout << "i = " << i << endl;
	cout << "j = " << j << endl;

	return 0;
}
