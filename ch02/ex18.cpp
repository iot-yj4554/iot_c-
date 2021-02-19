#include <iostream>
using namespace std;

int main(){
    int list[] = {1,2,3,4,5,6,7,8,9,10};
    int sum = 0;
    
    for(int i : list){
        sum += i;
    }

    cout << sum << endl << endl;
    
    for(int& i : list){ // 참조 변수로 선언 : 원본 값으로 작업함
        cout << i << " ";
    }

    cout << endl;

    for(auto& i : list){ // 가장 많이 쓰이는 형태
        cout << i << " ";
    }

    return 0;
}