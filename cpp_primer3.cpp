#include <iostream>
using namespace std;

/*void simon(int n); // �����������Һ����޷���ֵ

int main()
{
	simon(3);
	cout << "Pick an integer: ";
	int count;
	cin >> count;
	simon(count);
	cout << "Done!" << endl;
	return 0;
}

void simon(int n)
{
	cout << "Simon says touch your toes " << n << " times ." << endl;
}
*/
// �����з���ֵ���
int stonelib(int n);

int main()
{
	int stone;
	cout << "Enter the weight in stone: ";
	cin >> stone;
	int pounds;
	pounds = stonelib(stone);
	cout << stone << " stone = ";
	cout << pounds << " pounds." << endl;
	return 0;
}

int stonelib(int n)
{
	int pounds;
	pounds = 14 * n;
	return pounds;
}
/*
�ܽ᣺
������䣺���庯����ʹ�õı��������ƺ�����
��ֵ��䣺ʹ�ø�ֵ�����=��������ֵ
��Ϣ��䣺����Ϣ���͸����󣬼���ĳ���ж�
�������ã�ִ�к����������õĺ���ִ����Ϻ󣬳��򷵻ص�������������������
����ԭ�ͣ����������ķ������͡��������ܵĲ�������������
������䣺��һ��ֵ�ӱ����õĺ������ﷵ�ص����ú�����
*/
