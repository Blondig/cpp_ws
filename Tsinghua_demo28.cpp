#include<iostream>
#include "client.h"
using namespace std;
// ʹ��Client��
int Client::clientNum = 0; // ��̬���ݳ�Ա�������κ���Ķ�������Ҫ��������е�����ʼ��
char Client::serverName = 'a';
int main(){
	Client c1;
	c1.changeServerName('a');
	cout << "��ǰ�ͻ�������: " << c1.getClientNum() << endl;
	Client c2;
	c2.changeServerName('b');
	cout << "��ǰ�ͻ�������: " << c2.getClientNum() << endl;
	return 0;
}