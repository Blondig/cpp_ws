#include "iostream"

using namespace std;


class Add{
    public:
        Add(int i=0): total(i){
            cout << "Add�����Ĺ��캯��\n";
        }
        // ����Ľӿ�
        void addNum(int num){
            total += num;
        }
        // ����Ľӿ�
        int getTotal(){
            return total;
        }
        ~Add(){
            cout << "Add�������������\n";
        }
    private:
        // �������ص�����
        int total;
};


int main(){
    Add add;
    add.addNum(10);
    add.addNum(20);
    add.addNum(30);
    cout << "Total: " << add.getTotal() << endl;
    return 0;
}
