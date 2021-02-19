#include <iostream>
using namespace std;

// call by reference 원본으로 작업함

void swap(int& x, int& y){
    int t;
    t = x;
    x = y;
    y = t;
}

int main(int argc, char const *argv[]){
    int a = 100, b = 200;

    printf("before : a=%d, b=%d\n", a, b);
    swap(a,b);
    printf("after : a=%d, b=%d\n", a, b);

    return 0;
}