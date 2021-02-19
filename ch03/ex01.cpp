#include <iostream>
using namespace std;

int max(int x, int y); // 함수 원형 : 메인에서 아직 정의되지 않은 함수를 사용할 때 선언

int main(){
    int n;
    n = max(2,3);
    cout << "result : " << n << endl;
    return 0;
}

int max(int x, int y) {
    if(x>y)
        return x;
    else
        return y;
}