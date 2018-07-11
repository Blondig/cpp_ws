#include <iostream>

using namespace std;

// ����ö������
enum CPU_Rank {P1=1,P2,P3,P4,P5,P6,P7};
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
		cout << "����һ��CPU��" << endl;
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
	// ��Ա����
	void run() { cout << "CPU��ʼ���У�" << endl; }
	void stop() { cout << "CPUֹͣ���У�" << endl; }
};
int main(){
	CPU a(P6, 300, 2.8); // ����һ��CPU��Ķ���a���������ʼ��
	a.run();
	a.stop();
	return 0;
}