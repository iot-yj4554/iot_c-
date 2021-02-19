#include <iostream>
using namespace std;

void display(char c = 'c', int n = 10){ // 인수의 디폴트 값 지정, 뒤에서 부터 지정해야 함
    for(int i=0; i<n; i++){
        cout << c;
    }
    cout << endl;
}

int main(int argc, char const *argv[]){
    display(); // 인수를 지정하지 않았으므로 디폴트 값을 가짐
    display('#');
    display('#', 5);
    return 0;
}