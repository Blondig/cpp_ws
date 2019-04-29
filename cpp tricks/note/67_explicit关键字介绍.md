### 1.explicit��������
- ���ã�explicit���캯����������ֹ��ʽת����
- ʵ��1����:
    ```
        #include <iostream>

        using namespace std;

        // explicit�����Ľ���!!!

        // explicit���������ã�explicit���캯����������ֹ��ʽת����
        class Test1{
            public:
                Test1(int n){  // ��ͨ��ʽ�Ĺ��캯��
                    num = n;
                }
            private:
                int num;
        };

        class Test2{
            public:
                explicit Test2(int n){   //explicit(��ʽ)���캯��
                    num = n;
                }
            private:
                int num;
        };

        int main(){
            Test1 t1 = 12;  // ��ʽ�����乹�캯��,�ɹ�
            // Test2 t2 = 12;  �������,������ʽ�����乹�캯��
            Test2 t3(12);  //  ��ʽ���óɹ�
            return 0;
        }
    ```
- Test1�Ĺ��캯����һ��int�͵Ĳ���������ʽת���ɵ���Test1��������캯������Test2�Ĺ��캯��������Ϊexplicit����ʽ�������ʾ����ͨ����ʽת��������������캯�������Test2 t2 = 12����ֱ��������ͨ���캯���ܹ�����ʽ����,��explicit���캯��ֻ�ܱ���ʽ���á�
- ʵ��2����:
    ```
        class Test{
            public:
                Test():a(0){
                    cout << "void\n";
                }
                explicit Test(int i):a(i){
                    cout << "int\n";
                }
                Test(short s):a(s){
                    cout << "short\n";
                }
                Test & operator=(int n){
                    a = n;
                    cout << "operator = ";
                }
            private:
                int a;
        };
        int main(){
            int n;
            Test a = n;
            return 0;
        }
    ```
- A:����һ�������Ĺ��캯������ʹ�ø�ֵ�����ʽ��������ʼ������; ��explicit���캯��ֻ�ܱ���ʽ����!���ԣ��������short��