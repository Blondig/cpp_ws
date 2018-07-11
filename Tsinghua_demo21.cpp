#include <iostream>
// ������
using namespace std;

enum CPU_Rank { P1 = 1, P2, P3, P4, P5, P6, P7 };
class CPU{
private:
	CPU_Rank rank;
	int frequency;
	float voltage;
public:
	// ���캯��
	CPU(CPU_Rank r, int f, float v){
		rank = r;
		frequency = f;
		voltage = v;
		cout << "������һ��CPU��" << endl;
	}
	// ���ƹ�����һ��CPU
	CPU(CPU &c){
		rank = c.rank;
		frequency = c.frequency;
		voltage = c.voltage;
		cout << "���ƹ�����һ��CPU��" << endl;
	}
	// ��������
	~CPU(){
		cout << "������һ��CPU��" << endl;
	}
	// �ⲿ�ӿں���
	CPU_Rank getRank() const { return rank; }//������
	int getFrequency() const { return frequency; }
	float getVoltage() const { return voltage; }

	void setRank(CPU_Rank r) { rank = r; }
	void setFrequency(int f) { frequency = f; }
	void setVoltage(float v) { voltage = v; }
	// ������Ա�����������ж���ĳ�Ա����
	void run() { cout << "CPU��ʼ���У�" << endl; }
	void stop() { cout << "CPUֹͣ���У�" << endl; }
};

enum RAM_TYPE { DDR2 = 2, DDR3, DDR4 };
class RAM{
private:
	RAM_TYPE type;
	unsigned int frequency;
	unsigned int size;
public:
	// ���캯��
	RAM(RAM_TYPE t, unsigned int f, unsigned int s){
		type = t;
		frequency = f;
		size = s;
		cout << "������һ��RAM��" << endl;
	}
	// ���ƹ�����һ��RAM
	RAM(RAM &r){
		type = r.type;
		frequency = r.frequency;
		size = r.size;
		cout << "���ƹ�����һ��RAM��" << endl;
	}
	// ��������
	~RAM(){
		cout << "������һ��RAM��" << endl;
	}
	// �ⲿ�ӿں���----������
	RAM_TYPE getRAM_TYPE() const { return type; }//������
	unsigned int getFrequency() const { return frequency; }
	unsigned int getSize() const { return size; }

	void setRAM_TYPE(RAM_TYPE t) { type = t; }
	void setFrequency(unsigned int f) { frequency = f; }
	void setSize(unsigned int s) { size = s; }
	// ��Ա����
	void run() { cout << "RAM��ʼ���У�" << endl; }
	void stop() { cout << "RAMֹͣ���У�" << endl; }
};

enum CDROM_interface { SATA, USB };
enum CDROM_install_type { external, built_in };
class CDROM{
private:
	CDROM_interface interface;
	unsigned int cache_size;
	CDROM_install_type install_type;
public:
	// ���캯��
	CDROM(CDROM_interface i, unsigned int c, CDROM_install_type it){
		interface = i;
		cache_size = c;
		install_type = it;
		cout << "������һ��CDROM��" << endl;
	}
	// ���ƹ�����һ��CDROM
	CDROM(CDROM &cd){
		interface = cd.interface;
		cache_size = cd.cache_size;
		install_type = cd.install_type;
		cout << "���ƹ�����һ��CDROM��" << endl;
	}
	// ��������
	~CDROM(){
		cout << "������һ��CDROM��" << endl;
	}
	// �ⲿ�ӿں���
	CDROM_interface getInterface() const { return interface; }
	unsigned int getCache_size() const { return cache_size; }
	CDROM_install_type getInstall_type() const { return install_type; }

	void setInterface(CDROM_interface i){ interface = i; }
	void setCache_size(unsigned int c) { cache_size = c; }
	void setInstall_type(CDROM_install_type it) { install_type = it; }
	// ��Ա����
	void run() { cout << "CDROM��ʼ���У�" << endl; }
	void stop() { cout << "CDROMֹͣ���У�" << endl; }
};

class Computer{
private:
	CPU my_cpu;
	RAM my_ram;
	CDROM my_cdrom;
	unsigned int storage_size;
	unsigned int bandwidth;
public:
	// ����Computer��һ�����캯��
	Computer(CPU c, RAM r, CDROM cd, unsigned int s, unsigned int b);
	// ��������
	~Computer(){
		cout << "������һ��Computer��" << endl;
	}
	// ��Ա����
	void run(){
		my_cpu.run();
		my_ram.run();
		my_cdrom.run();
		cout << "Computer�������У�" << endl;
	}

	void stop(){
		my_cpu.stop();
		my_ram.stop();
		my_cdrom.stop();
		cout << "Computerֹͣ������" << endl;
	}

};
// Computer��Ĺ��캯��ʵ��
Computer::Computer(CPU c, RAM r, CDROM cd, unsigned int s, unsigned int b) : my_cpu(c), my_ram(r), my_cdrom(cd){
	storage_size = s;
	bandwidth = b;
	cout << "������һ��Computer!" << endl;
}

// ������

int main(){
	CPU a(P6, 300, 2.8);
	a.run();
	a.stop();
	cout << "**********************\n";
	RAM b(DDR3, 1600, 8);
	b.run();
	b.stop();
	cout << "**********************\n";
	CDROM c(SATA, 2, built_in);
	c.run();
	c.stop();
	cout << "**********************\n";
	Computer my_computer(a, b, c, 128, 10);
	cout << "**********************\n";
	my_computer.run();
	my_computer.stop();
	cout << "**********************\n";
	return 0;
}