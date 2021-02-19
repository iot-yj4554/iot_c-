#include <iostream> 
using namespace std;
#define WIDTH 9
#define HEIGHT 3

// # : 전처리기(pre-processor) -> 컴파일 하기 전에 처리 (#define : 상수 처리하는 기법)

int main(){
    int table[HEIGHT][WIDTH];
    int r, c;

    for(r=0; r<HEIGHT; r++){
        for(c=0; c<WIDTH; c++){
            table[r][c] = (r+1)*(c+1);
        }
    }

    for(r=0; r<HEIGHT; r++){
        for(c=0; c<WIDTH; c++){
            cout << table[r][c] << ", ";
        }
        cout << endl;
    }

    return 0;
}