#include "iostream"
#include "exception"
#include "string"

using namespace std;


double division(int a, int b){
    if(b == 0)
        throw "Division by zero condition!";
    return (a / b);
}


// �Զ����µ��쳣
struct myException: public exception{
    const char * what() const throw(){  // what()���쳣���ṩ��һ���������������ѱ��������쳣������,�⽫�����쳣������ԭ��
        return "C++ Exception!";
    }
};

// ����
class MyException{
    public:
        MyException(const char * msg): message(msg){
            cout << "���캯��MyException��Ķ���.....\n";
        }
        MyException(const MyException &other): message(other.message){
            cout << "�������캯��MyException��Ķ���......\n";
        }
        // ��������
        virtual ~MyException(){
            cout << "~MyException.....\n";
        }

        const char *what() const{
            return message.c_str();
        }
    private:
        string message;
};
// ������
class MyExceptionD: public MyException{
    public:
        MyExceptionD(const char *message): MyException(message){
            cout << "���캯��MyExceptionD��Ķ���......\n";
        }
        MyExceptionD(const MyExceptionD & other): MyException(other){
            cout << "�������캯��MyExceptionD��Ķ���......\n";
        }
        // ��������
        ~MyExceptionD(){
            cout << "~MyExceptionD......\n";
        }
};

void fun(int n) throw(int,  MyException, MyExceptionD){
    if(n == 1)
        throw 1;
    else if(n == 2)
        throw MyException("Test Exception......");
    else if(n == 3)
        throw MyExceptionD("Test MyExceptionD......");
}   

void fun2() throw(){

}

int main(){
    int a = 3;
    int b = 0;
    double z = 0;
    // cout << "division(3, 0) = " << division(a, b) << endl;
    cout << "-------------------------------------------------\n";
    try{
        z = division(3, 0);
    }catch(const char* msg){  // ��ָ�룬�ȼ��� char const *msg;
        cerr << msg << endl;
    }
    cout << "-------------------------------------------------\n";
    try{
        throw myException();
    }catch(myException &e){
        cout << "myException caught: ";
        cout << e.what() << endl; 
    }
    cout << "-------------------------------------------------\n";
    try{
        fun(2);
    }catch(int n){
        cout << "catch int......\n";
        cout << "n = " << n << endl;
    }catch(MyExceptionD &e){
        cout << "catch MyExceptionD......\n";
        cout << e.what() << endl;
    }catch(MyException &e){
        cout << "catch MyException......\n";
        cout << e.what() << endl;
    }
    return 0;
}