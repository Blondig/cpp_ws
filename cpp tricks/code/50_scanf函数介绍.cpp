#include "iostream"
#include "cstdio"
#include "cstdlib"


using namespace std;



int main(){
    // scanf��������
    int a = 0, b = 0, c = 0, d=0;
    scanf("%d", &a);
    scanf("%d", &b);

    printf("a+b = %d\n", a+b);

    scanf("%d", &c);
    scanf("%d", &d);
    printf("c*d = %d\n", c*d);
    // �鿴�����ĵ�ַ
    int a1 = 'E';
    int b1 = 23;
    int c1 = 45;
    printf("&a1 = %p, &b1 = %p, &c1 = %p\n", a1, b1, c1);  // %p����ʮ�����Ƶĸ�ʽ���
    // scanf������ʵ��2
    int a_, b_, c_;
    scanf("%d %d", &a_, &b_);
    printf("a_+b_=%d\n", a_+b_);

    scanf("%d   %d", &a_, &b_);
    printf("a_+b_=%d\n", a_+b_);

    scanf("%d, %d, %d", &a_, &b_, &c_);
    printf("a_+b_+c_=%d\n", a_+b_+c_);

    scanf("%d is bigger than %d", &a_, &b_);
    printf("a_-b_=%d\n", a_- b_);
    // scanf����ʵ��3
    int a2 = 2, b2 = 3,c2 = 4, d2 = 5;  // ���������費ͬ�ĳ�ʼֵ
    scanf("%d", &a2);
    scanf("%d", &b2);
    printf("a2=%d,b2=%d\n", a2, b2);

    scanf("%d", &c2);
    scanf("%d", &d2);
    printf("c2=%d, d2=%d\n", c2, d2);
    // scanf����ʵ��4
    int a1_ = 111, b1_=222;
    scanf("a1_=%d", &a1_);
    scanf("b1_=%d", &b1_);
    printf("a1_=%d, b1_=%d\n", a1_, b1_);
    // scanf����ʵ��5
    char name;
    int age;
    char url[30];
    float price;
    scanf("%c", &name);
    scanf("%d", &age);
    scanf("%s", url);  // ���Լ�&Ҳ���Բ���&
    scanf("%f", &price);
    printf("26��Ӣ����ĸ�����һ����%c\n", name);
    printf("�����Ѿ�д��%d��,��ַ��%s,������%f", age, url, price);
    // scanf����ʵ��6
    char author[30], lang[30], urls[30];
    scanf("%s %s", author, lang);
    printf("author:%s\nlang:%s\n", author, lang);
    scanf("%s", urls);
    printf("urls:%s\n", urls);
    return 0;
}