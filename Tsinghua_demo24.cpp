#include <iostream>
using namespace std;
// ����������Ĺ��캯��
class Volume{
public:
	void setVolume(double len, double wid, double hei);
	double getVolume();
	Volume(double len, double wid, double hei); // �������Ĺ��캯������
	~Volume(); // ������������
private:
	double length;
	double width;
	double height;
};

void Volume::setVolume(double len, double wid, double hei){
	length = len;
	width = wid;
	height = hei;
}

double Volume::getVolume(){
	return length * width * height;
}

// ���캯��ʵ��
Volume::Volume(double len, double wid, double hei): length(len), width(wid), height(hei){
	cout << "�����Ѵ�����!\n" ;
}

// ��������ʵ��
Volume::~Volume(){
	cout << "�����ѱ�ɾ��!\n";
}

int main(){
	Volume vol(3, 4, 5);
	cout << "Ĭ�ϳ�����������" << vol.getVolume() << endl;
	vol.setVolume(1, 2, 3);
	cout << "�Զ���ĳ���������: " << vol.getVolume() << endl;
	return 0;
}