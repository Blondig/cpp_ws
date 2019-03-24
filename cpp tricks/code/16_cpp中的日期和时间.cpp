#include "iostream"
#include "ctime"   // C++��û�д���ʱ��Ŀ⣬���Լ̳���C����
#include "cstdio"

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

#define BST (+1)
#define CCT (+8)

using namespace std;



int main(){
    time_t seconds;
    seconds = time(NULL);
    cout << "��1970-01-01���Сʱ��: " << seconds / 3600 << endl;
    /*-----------------------------------*/
    time_t curtime;
    time(&curtime);
    cout << "��ǰʱ��: " << ctime(&curtime) << endl;
    /*-----------------------------------*/
    time_t rawtime;
    struct tm *info;
    char buffer[80];

    time(&rawtime);
    info = localtime(&rawtime);
    cout << "��ǰ�ı���ʱ�������: " << asctime(info) << endl;
    /*-----------------------------------*/
    clock_t start_t, end_t;
    double total_t;
    int i;
    start_t = clock();
    cout << "��������, start_t = " << start_t << endl;
    cout << "��ʼһ����ѭ��, start_t = " << start_t << endl;
    for (i = 0; i < 10000000; i++){

    }
    end_t = clock();
    cout << "��ѭ������,end_t = " << end_t << endl;
    total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
    cout << "cpuռ�õ���ʱ��: " << total_t << endl;
    cout << "����������˳�...\n";
    /*-----------------------------------*/
    struct tm t;
    t.tm_sec = 10;
    t.tm_min = 10;
    t.tm_hour = 6;
    t.tm_mday = 25;
    t.tm_mon = 2;
    t.tm_year = 89;
    t.tm_wday = 6;
    puts(asctime(&t));
    /*-----------------------------------*/
    time_t raw_time;
    struct tm *info1;

    time(&raw_time);
    /* ��ȡ GMT ʱ�� */
    info = gmtime(&raw_time );
    printf("�׶أ�%2d:%02d\n", (info1->tm_hour + BST)%24, info1->tm_min);
    printf("�й���%2d:%02d\n", (info1->tm_hour + CCT)%24, info1->tm_min);
    /*-----------------------------------*/
    time_t raw_time1;
    struct tm * timeinfo;
    int year,month,day;
    const char * weekday[] = {"����", "��һ","�ܶ�", "����","����", "����", "����"};
    /* �û��������� */
    printf ("����������: "); fflush(stdout); scanf ("%d",&year);
    printf ("����������: "); fflush(stdout); scanf ("%d",&month);
    printf ("����������: "); fflush(stdout); scanf ("%d",&day);
 
    /* ��ȡ��ǰʱ����Ϣ�����޸��û������������Ϣ */
    time ( &raw_time1 );
    timeinfo = localtime ( &raw_time1 );
    timeinfo->tm_year = year - 1900;
    timeinfo->tm_mon = month - 1;
    timeinfo->tm_mday = day;
 
    /* ���� mktime: timeinfo->tm_wday  */
    mktime ( timeinfo );
 
    printf ("��һ���ǣ�%s\n", weekday[timeinfo->tm_wday]);
    /*-----------------------------------*/
    time_t start_t1, end_t1;
    double diff_t1;
    cout << "��������\n";
    time(&start_t1);
    cout << "����1000s\n";
    Sleep(1000);
    time(&end_t1);
    diff_t1 = difftime(end_t1, start_t1);
    cout << "ִ��ʱ��: " << diff_t1<< endl;
    cout << "�����˳�\n";
    /*-----------------------------------*/
    // 2.��ǰ���ں�ʱ��
    time_t now = time(0);
    // �� now ת��Ϊ�ַ�����ʽ
    char* dt = ctime(&now);
    cout << "�������ں�ʱ�䣺" << dt << endl;
    // �� now ת��Ϊ tm �ṹ
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "UTC���ں�ʱ�䣺"<< dt << endl;
    // 3.ʹ�ýṹtm��ʽ��ʱ��
    time_t now = time(0);  //  ���ڵ�ǰϵͳ�ĵ�ǰ����/ʱ��
    cout << "1970 ��Ŀǰ��������:" << now << endl;
    
    tm *ltm = localtime(&now);
    
    // ��� tm �ṹ�ĸ�����ɲ���
    cout << "��: "<< 1900 + ltm->tm_year << endl;
    cout << "��: "<< 1 + ltm->tm_mon<< endl;
    cout << "��: "<<  ltm->tm_mday << endl;
    cout << "ʱ��: "<< ltm->tm_hour << ":";
    cout << ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;
    return 0;
}