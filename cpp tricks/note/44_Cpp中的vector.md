### 1.Cpp�е�vector(�ɱ䳤�Ķ�̬����)
- vector��˳��������һ�֡�vector�ǿɱ䳤�Ķ�̬���飬֧��������ʵ�����������STL�㷨���ܶ�vector���в�����**Ҫʹ��vector����Ҫ����ͷ�ļ�vector**����vector�����У������±��������ĳ��Ԫ�ص�ʱ���ǳ�������β�����һ��Ԫ�ص�ʱ�����������Ҳ�ǳ�����������˵�ٶȺܿ졣���м�����ɾ��Ԫ��ʱ����ΪҪ�ƶ����Ԫ�أ�����ٶȽ�����ƽ�����ѵ�ʱ��������е�Ԫ�ظ��������ȡ���vector�����У���һ����̬��������������Ԫ�أ���˸����±����ĳ��Ԫ�ص�ʱ���ǹ̶��ģ���Ԫ�ظ����޹ء�
- vector������ʵ��ʱ����̬����Ĵ洢�ռ�һ�㶼���ڴ��Ԫ������Ŀռ䡣���磬����������ֻ��һ��Ԫ�أ�Ҳ�����32��Ԫ�صĴ洢�ռ䡣�������ĺô��ǣ���β�����һ����Ԫ��ʱ�������·���ռ䣬ֱ�ӽ���Ԫ��д���ʵ�λ�ü��ɡ�����������£������Ԫ�ص�ʱ��Ҳ�ǳ��������ǣ�������������Ԫ�أ�������Ŀռ�ͻ����꣬��ʱ�������Ԫ�أ��Ͳ��ò����·����ڴ�ռ䣬��ԭ�����ݸ��ƹ�ȥ��������µ�Ԫ�ء�������������������Ԫ��������ʱ��Ͳ��ǳ��������Ǻ������е�Ԫ�ظ��������ȡ�**�������м�����ɾ��Ԫ�أ���Ȼ�漰Ԫ�ص��ƶ������ʱ�䲻�ǹ̶��ģ����Ǻ�Ԫ�ظ����й�**��
### 2.vector�кܶ��Ա���������õ����1��ʾ:
 ![vector�еĳ��ó�Ա����.png](https://upload-images.jianshu.io/upload_images/13407176-cad56b0942ced4e8.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
### 3.vector�Ļ����÷�����:
    ```
        #include "iostream"
        #include "vector"  // ʹ��vector��Ҫ������ͷ�ļ�

        using namespace std;

        // ����ģ��
        template <typename T>
        void PrintVector(const vector<T> &v){
            // �������vector������ȫ��Ԫ�صĺ���ģ��
            typename vector<T>::const_iterator i;  // typename����˵�� vector <T>::const_iterator��һ�����ͣ��� Visual Studio �в�дҲ����
            for(i = v.begin(); i != v.end(); ++i)
                cout << *i << " ";
            cout << endl;
        }


        int main(){
            int a[5] = {1, 2, 3, 4, 5};
            vector<int> v(a, a+5);  // ������a�����ݷ���v
            cout << v.end() - v.begin() << endl;  // ��������������������
            PrintVector(v);
            v.insert(v.begin()+2, 13);  // �� begin()+2 λ�ò��� 13
            PrintVector(v);
            v.erase(v.begin()+2);   // ɾ��λ�� begin()+2 λ�õ�Ԫ��
            PrintVector(v);
            vector<int> v2(4, 100);   // v2�� 4 ��Ԫ�أ����� 100
            v2.insert(v2.begin(), v.begin()+1, v.begin()+3);  // ��v��һ�β���v2��ͷ
            PrintVector(v2);
            v.erase(v.begin()+1, v.begin()+3);   // ɾ�� v �ϵ�һ�����䣬�� [2,3)
            PrintVector(v);
            return 0;
        }
    ```
- vector������Ƕ�����γɿɱ䳤�Ķ�ά���飬**����д����int���������>֮����Ҫ�пո񣬷����еı�����������ǵ���>>���������������**������:
    ```
        // vectorǶ���γɶ�ά����
        vector<vector<int> > v3(3); // v3����3��Ԫ�أ�ÿ��Ԫ�ض���vector<int>����
        for (int i = 0; i < v3.size(); ++i)
        {
            for (int j = 0; j < 4; ++j)
                v3[i].push_back(j);
        }
        for (int i = 0; i < v3.size(); ++i)
        {
            for (int j = 0; j < v3[i].size(); ++j)
                cout << "v3[" << i << "][" << j << "] = " << v3[i][j] << " ";
            cout << endl;
        }
    ```
