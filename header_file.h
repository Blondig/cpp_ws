#include <iostream>
using namespace std;

class Rec
{
private:
	int x, y;
public:
	void rec_init(int a, int b);
	int area();
	void show();
};

void Rec::rec_init(int a, int b)
{
	x = a;
	y = b;
}

int Rec::area()
{
	int z;
	z = x * y;
	return z;
}

void Rec::show()
{
	cout << "���ε�����ǣ�" << area() << endl;
}