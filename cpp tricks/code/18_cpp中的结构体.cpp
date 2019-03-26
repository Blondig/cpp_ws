#include "iostream"
#include "cstring"  // C���Ե��ַ�����

using namespace std;


void print_book_info(struct Books book);
void print_book_info_with_pointer(struct Books *book_pointer);

// ����һ���ṹ������
struct Books{  // Books�ǽṹ��������
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
}; 

// ʹ��typedef�����ṹ��
typedef struct Book_Info{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
}Book_Info;


int main(){
    // ���ʽṹ��ĳ�Ա
    Books book1;   // ����ṹ������Books�ı���book1
    Books book2;   // ����ṹ������Books�ı���book2
    // book1��ϸ����
    strcpy(book1.title, "C++�̳�");
    strcpy(book1.author, "����̳�");
    strcpy(book1.subject, "�������");
    book1.book_id = 123;
    // ���book1����ϸ��Ϣ
    cout << "book1�ı���: " << book1.title << endl;
    cout << "book1������: " << book1.author << endl;
    cout << "book1�����: " << book1.subject << endl;
    cout << "book1��id: " << book1.book_id << endl;
    cout << "----------------------------------------------------\n";
    // book2��ϸ����
    strcpy(book2.title, "��ҹ��");
    strcpy(book2.author, "��Ұ����");
    strcpy(book2.subject, "��ѧ");
    book2.book_id = 666;
    // ���book2����ϸ��Ϣ
    cout << "book2�ı���: " << book2.title << endl;
    cout << "book2������: " << book2.author << endl;
    cout << "book2�����: " << book2.subject << endl;
    cout << "book2��id: " << book2.book_id << endl;
    cout << "----------------------------------------------------\n";   
    // �ṹ����Ϊ��������
    print_book_info(book1);
    cout << "----------------------------------------------------\n";   
    print_book_info(book2);
    cout << "----------------------------------------------------\n";   
    // ָ��ṹ���ָ��
    print_book_info_with_pointer(&book1);  // ͨ����book1�ĵ�ַ�����book1��Ϣ
    cout << "----------------------------------------------------\n";   
    print_book_info_with_pointer(&book2);  // ͨ����book2�ĵ�ַ�����book2��Ϣ
    // ʹ��typedef�����ṹ��
    Book_Info book1_info, book2_info;
    return 0;
}

// �ṹ����Ϊ��������
void print_book_info(struct Books book){
    cout << "��ı���: " << book.title << endl; 
    cout << "�������: " << book.author << endl;
    cout << "������: " << book.subject << endl;
    cout << "���id: " << book.book_id << endl;
}
// ָ��ṹ���ָ��,����ĺ����Խṹ��ָ����Ϊ�����β�
void print_book_info_with_pointer(struct Books *book_pointer){
    cout << "��ı���: " << book_pointer->title << endl; 
    cout << "�������: " << book_pointer->author << endl;
    cout << "������: " << book_pointer->subject << endl;
    cout << "���id: " << book_pointer->book_id << endl;
}
