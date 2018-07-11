#include <iostream>
using namespace std;

class Point{
public:
	Point(int x = 0, int y = 0){ xx = x; yy = y; }; // ��Ĭ�ϲ������������캯��
	Point(const Point &p); // ���ƹ��캯��������
	void setX(int x) { xx = x; } // ������Ա����
	void setY(int y) { yy = y; }
	int getX() const { return xx; }  // ������
	int getY() const { return yy; }
private:
	int xx, yy;
};
// ���ƹ��캯��ʵ��
Point::Point(const Point &p){
	xx = p.xx;
	yy = p.yy;
	cout << "���ø��ƹ��캯��....\n";
}

// ���2���β�ΪPoint��Ķ���p
void fun1(Point p){
	cout << p.getX() << endl;
}

// ���3�������ķ���ֵ��Point��Ķ���a
Point fun2(){
	Point a(4, 5);
	return a;
}

int main(){
	Point a(1, 2);
	Point b(a); // ���1���Ա������һ������a��ʼ������b
	cout << b.getX() << endl;
	cout << b.getY() << endl;
	fun1(b);  // ���2��ʹ�ö���b����Ϊfun1()������ʵ��
	b = fun2(); // ���3�������ķ���ֵ�����ĳ������
	cout << b.getX() << endl;
	return 0;
}