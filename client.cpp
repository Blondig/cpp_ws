#include "client.h"
// Client���ʵ��
void Client::changeServerName(char name){
	Client::serverName = name; // ���ʾ�̬���ݳ�Աʱ��Ҫ��������
	Client::clientNum++;      // ���ʾ�̬���ݳ�Աʱ��Ҫ��������
}

int Client::getClientNum(){
	return Client::clientNum;
}