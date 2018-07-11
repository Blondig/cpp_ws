#include <iostream>
// ���ƹ��캯������
using namespace std;

class Point{
public:
	Point(int xx = 0, int yy = 0);  // ���캯������
	Point(const Point &p);  // ���ƹ��캯������
	int getX() const { return x; } //������
	int getY() const { return y; }
private:
	int x, y;
};

// ���캯��ʵ��
Point::Point(int xx, int yy) :x(xx), y(yy){}

// ���1�����ƹ��캯��ʵ��
Point::Point(const Point &p){
	x = p.x;
	y = p.y;
	cout << "���ڵ��ø��ƹ��캯��..." << endl;
}

//���2�� �β�ΪPoint�����ĺ���
void fun1(Point p){
	cout << p.getX() << endl;
}

//���3�� ����ֵ��Point�����ĺ���
Point fun2(){
	Point a(1, 2);
	return a;
}

int main(){
	Point a(4, 5);  // ��һ������a
	Point b(a);  // ���һ����a��ʼ��b����һ�ε��ø��ƹ��캯��
	cout << b.getX() << endl;
	fun1(b);  // �����������b��Ϊfun1��ʵ�Σ��ڶ��ε��ø��ƹ��캯��
	b = fun2(); // ������������ķ���ֵ������󣬺�������ʱ�������ε��ø��ƹ��캯��
	cout << b.getX() << endl;
	return 0;
}