#include <iostream>
using namespace std;

// call by reference 원본으로 작업함

int test(int arr[]){
    int s = sizeof(arr);
    cout << "array size : " << s << endl;
    arr[0] = 10;
    return arr[0];
}

int main(int argc, char const *argv[]){
    int n[] = {1,2,3};
    cout << "array n size : " << sizeof(n) << endl;

    int m = test(n); // 배열의 이름(n)을 넘김 -> 배열의 시작 주소를 넘김 : 그니까 배열이 넘겨진게 아니라 주소값이 넘어감 (8 Bytes)
    cout << "result : " << n[0] << endl;

    return 0;
}