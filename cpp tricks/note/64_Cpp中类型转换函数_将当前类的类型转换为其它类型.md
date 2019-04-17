### 1.C++������ת������:����ǰ�������ת��Ϊ��������
- ת�����캯���ܹ�����������ת��Ϊ��ǰ�����ͣ����罫double����ת��Ϊcomplex���ͣ������ǲ��ܷ���������ǰ������ת��Ϊ�������ͣ����罫complex����ת��Ϊdouble ���ͣ���C++�ṩ������ת��������Type conversion function�������������⡣**����ת�����������þ��ǽ���ǰ������ת��Ϊ�������ͣ���ֻ���Գ�Ա��������ʽ���֣�Ҳ����ֻ�ܳ���������**��
- ����ת���������﷨��ʽΪ:
    ```
        operator type(){  // type��Ŀ������
            // TODO;
            return data; // ���ص�type���͵�����
        }
    ```
- ��ΪҪת����Ŀ��������type�����Է���ֵdataҲ������type���͡�**��Ȼ�Ѿ�֪����Ҫ����type���͵����ݣ�����û�б�Ҫ������ͨ����һ����ȷ�ظ�������ֵ���͡����������µĽ���ǣ�����ת������������û�з���ֵ���ͣ���ʵ����ʽ��ָ���˷���ֵ���͡�����ת������Ҳû�в�������ΪҪ����ǰ��Ķ���ת��Ϊ�������ͣ����Բ������Զ�����ʵ���ϱ�������ѵ�ǰ����ĵ�ַ��ֵ��thisָ��**�������ں������ھͿ��Բ�����ǰ�����ˡ�
### 2.ʵ������:
- Ϊcomplex���������ת��������ʹ��complex�����ܹ�ת��Ϊdouble���ͣ���ϸ������:
    ```
        #include "iostream"

        using namespace std;

        /*--------------------����ǰ�������ת��Ϊ��������-----------------------*/

        class complex{
            public:
                complex():m_real(0.0), m_img(0.0){}
                complex(double real, double img):m_real(real), m_img(img){}
            public:
                friend complex operator+ (const complex &c1, const complex &c2);
                friend ostream & operator<< (ostream &out, const complex &c);
                operator double() const{return m_real;}  // ����ת������(����ת�������)!!!����complex��ת��Ϊdouble����

            private:
                double m_real;
                double m_img;  
        };

        complex operator+ (const complex &c1, const complex &c2){
            complex c;
            c.m_real = c1.m_real + c2.m_real;
            c.m_img = c1.m_img + c2.m_img;
            return c;
        }

        ostream & operator<< (ostream &out, const complex &c){
            out << c.m_real << " + " << c.m_img << "i";
            return out;
        }


        int main(){
            complex c1(24.6, 100);
            double f = c1;
            cout << "f = " << f << endl;

            f = 12.5 + c1 + 6;
            cout << "f = " << f << endl;

            int n = complex(46.5, 9.4);
            cout << "n = " << n << endl;

            return 0;
        }
    ```
### 3.��������ת��������˵��
- type�������������͡��������Լ���typedef��������ͱ������κο���Ϊ�����������͵����ͣ�void ���⣩���ܹ���֧�֡�һ����ԣ�������ת��Ϊ����������ͣ�ת��Ϊָ�����ͻ����������ǿ��Ե�;
- ����ת������һ�㲻����ı�ת���Ķ�������ͨ��������Ϊconst��Ա;
- ����ת���������Ա��̳У��������麯��;
- һ������Ȼ�����ж������ת�������������ں������أ�����������������ת������Ҫת����Ŀ�����ͱ����ֿ����໥ת�����������������ô��ʱ��ͻ���������ԡ���complex��Ϊ��������������������ת��������
    ```
        operator double() const{return m_real;}  // ת��Ϊdouble����
        operator int() const{return m_real;}  // ת��Ϊint����
        // ��ô�����д���ͻ����������ԣ�
        complex c1(2.45, 3.45);
        float f = c1 + 12.5;
    ```
    