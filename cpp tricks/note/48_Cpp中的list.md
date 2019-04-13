### 1.Cpp�е�list˫������
- list��˳��������һ�֣�list��һ��˫������**ʹ��list��Ҫ����ͷ�ļ�list**��˫�������ÿ��Ԫ���ж���һ��ָ��ָ���һ��Ԫ�أ�Ҳ��һ��ָ��ָ��ǰһ��Ԫ�أ���ͼ1��ʾ��
![˫������.png](https://upload-images.jianshu.io/upload_images/13407176-ae03f4b1b8cc3550.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
- ��list�����У����Ѿ���λ��Ҫ��ɾԪ�ص�λ�õ�����£���ɾԪ�����ڳ���ʱ������ɡ���ͼ2��ʾ����ai��ai+1֮�����һ��Ԫ�أ�ֻ��Ҫ�޸�ai��ai+1�е�ָ�뼴�ɡ�
![�������.png](https://upload-images.jianshu.io/upload_images/13407176-644c24f6ed295031.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
- list������֧�ָ����±������ȡԪ��,��Ϊ�䲻��˳��洢�ṹ��list�Ĺ��캯��������Ա�������÷�����vector���ƣ��˴������о١�����˳���������еĳ�Ա�����⣬list�������������1��ʾ�ĳ�Ա�������˱�����ȫ����Ա����������Щ�����Ĳ�����Ϊ���ӣ�����ֻ�г�����������
![list�еĳ�Ա����.png](https://upload-images.jianshu.io/upload_images/13407176-f512a356f2564b9c.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
- STL�е��㷨sort����������vector��deque��������Ҫ������ʵ�������֧�֡���Ϊlist��֧��������ʵ����������Բ������㷨sort��list����������ˣ�list����������sort��Ա�������������list��ʾ����������:
    ```
        #include "iostream"   // ʹ�� list ��Ҫ������ͷ�ļ�
        #include "list"
        #include "algorithm"  // ʹ��STL�е��㷨��Ҫ������ͷ�ļ�

        using namespace std;

        class A{
            private:
                int n;
            public:
                A(int n_){
                    n = n_;
                }
                friend bool operator < (const A &a1, const A &a2);
                friend bool operator == (const A &a1, const A &a2);
                friend ostream & operator << (ostream & o, const A &a);
        };

        // ��������������Ķ���
        bool operator < (const A &a1, const A &a2){
            return a1.n < a2.n ;
        }

        bool operator == (const A &a1, const A &a2){
            return a1.n == a2.n;
        }

        ostream & operator << (ostream & o, const A &a){
            o << a.n;
            return o;
        }

        // ����ģ��
        template<typename T>
        void printFun(T first, T last){
            for(;first != last; ++first)
                cout << *first << " ";
            cout << endl;
        }


        int main(){
            A a[5] = {1, 3, 2, 4, 2};
            A b[7] = {10, 30, 20, 30, 30, 40, 40};
            list<A> lst1(a, a+5), lst2(b, b+7);
            lst1.sort();
            printFun(lst1.begin(), lst1.end());
            lst1.remove(2); // ɾ�����к�A(2)��ȵ�Ԫ��
            printFun(lst1.begin(), lst1.end());
            lst2.pop_front();  // ɾ����һ��Ԫ��
            printFun(lst2.begin(), lst2.end());
            lst2.unique();  // ɾ�����к�ǰһ��Ԫ����ȵ�Ԫ��
            printFun(lst2.begin(), lst2.end());
            lst2.sort();
            lst1.merge(lst2);  // lst2�ϲ���lst1,�����lst2
            printFun(lst1.begin(), lst1.end());
            printFun(lst2.begin(), lst2.end());
            lst1.reverse();   // ��תlst1
            printFun(lst1.begin(), lst1.end());
            lst2.insert(lst2.begin(), a+1, a+4);  // ��lst2�в���3�� 2�� 4
            printFun(lst2.begin(), lst2.end());
            list<A>::iterator p1, p2, p3;
            p1 = find(lst1.begin(), lst1.end(), 30);  
            p2 = find(lst2.begin(), lst2.end(), 2);
            p3 = find(lst2.begin(), lst2.end(), 4);
            lst1.splice(p1, lst2, p2, p3); // ��[p2, p3)����p1֮ǰ������lst2��ɾ��[p2,p3)
            printFun(lst1.begin(), lst1.end());
            printFun(lst2.begin(), lst2.end());
            return 0;
        }
    ```