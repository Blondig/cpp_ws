#include <iostream>
#include <string>
using namespace std;

#define PI 3.14

#define CALL_MAX(a, b) f((a) > (b) ? (a):(b))
// ʹ��inline����������ĺ�
template<typename T>
inline void call_max(const T &a, const T &b){
    f(a > b) ? a:b;
}

class GamePlayer{
    public:
        static const int NumTurns = 5;
        static const double Factor;
        int scores[NumTurns];
        enum {numTurns = 8};
        int scoress[numTurns];
};

static const double Factor = 5.55;  // ��̬��Ա������������г�ʼ��


const int GamePlayer::NumTurns;  // NumTurns�Ķ��壬û�и�ֵ����Ϊ֮ǰ�Ѿ����ֵ5������ʱ���������ֵ



int main(){
    cout << PI << endl;
    const double Pi = 3.14;
    cout << Pi << endl;
    const char* const authorName = "Curry_Coder";  // ָ�����ĳ���ָ��
    cout << authorName << endl;
    const string author_Name("Curry_Coder");
    cout << author_Name << endl;
    cout << GamePlayer::NumTurns << endl;
    return 0;
}