#ifndef CLIENT_H_ //Ϊ�˱����ظ�����ͷ�ļ�����Ҫʹ�ñ���Ԥ����ָ��
#define CLIENT_H_
// Client��Ķ���
class Client{
	static char serverName; // ��̬���ݳ�Ա
	static int clientNum;  //��̬���ݳ�Ա
public:
	static void changeServerName(char name);
	static int getClientNum();
};

#endif // CLIENT_H_