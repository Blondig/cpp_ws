#include <iostream>
// ˫�򴫵�-------���ô���
using namespace std;
void swap(int &a, int &b);

int main(){
	int x = 1, y = 5;
	cout << "����ǰ��ֵ: ";
	cout << "x = " << x << " y = " << y << endl;
	swap(x, y);
	cout << "�������ֵ: ";
	cout << "x = " << x << " y = " << y << endl;
	return 0;
}

void swap(int &a, int &b){
	int t = a;
	a = b;
	b = t;
}