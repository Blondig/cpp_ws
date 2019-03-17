#include "iostream"

using namespace std;



class Test{
public:
	void hello(){
		cout << "test hello!\n";
	};
	void lambda(){
		auto fun = [this]{ // ������ this ָ��
		this->hello(); 
		}; // ���� this ���õľ��� class Test �Ķ�����
		fun();
	}
};


int main(){
	// ����һ���򵥵�lambda���ʽ
	auto basicLamda = [] {cout << "hello world!" << endl; };
	basicLamda();  // ����
	// �����Ҫ��������ô��Ҫ��������������Բ�������棬����з���ֵ����������Ҫ����->���棬����β��������
	// ��Ȼ��Ҳ���Ժ��Է������ͣ�lambda������Զ��ƶϳ���������
	auto add = [](int a, int b) -> int {return a + b; };
	int result = add(4, 5);
	cout << "result = " << result << endl;
	// �Զ��ƶϳ���������
	auto multiply = [](int a, int b) {return a * b; };
	int result1 = multiply(5, 6);
	cout << "result1 = " << result1 << endl;
	// 1��ʲôҲ�����񣬻����ǹ��ⲻ�� Lambda �����ⲿ�ı���
	int  i = 1024;
	// auto f = []{cout << "i = " << i << endl; }; ����!Ӧ��ʹ����lambda�����ⲿ�ı���
	auto f = [=] { cout << "i = " << i << endl; };  // ʹ�ô�ֵ�ķ�ʽʹ����lambda�����ⲿ�ı���i
	f();  // ���ú���
	// 2�����ò�׽
	int i1 = 666;
	cout << "����i1������: " << &i1 << endl;
	auto f1 = [&] { cout << "����i1������: " << &i1 << endl; };
	f1();
	// 3�����Ʋ����ò���
	int i2 = 777, j2 = 888;
	cout << "i2 = " << i2 << endl;
	cout << "j2 = " << j2 << endl;
	auto f2 = [=, &i2] { cout << "i2 = " << &i2 << " ,j2 = " << &j2 << endl; };  // Ĭ�Ͽ����ⲿ���б����������ñ���i2
	f2();
	// 4��ָ�����û���
	int i3 = 444, j3 = 555;
	cout << "�ⲿ����i3 = " << i3 << " i3�ĵ�ַ��: " << &i3 << endl;
	auto f3 = [i3] { cout << "�ڲ�����i3 = " << i3 << " i3�ĵ�ַ��: " << &i3 << endl; };
	f3();
	// 5������thisָ��
	Test t;
	t.lambda();
	return 0;
}