#include <iostream>
using namespace std;

int main(int argc, char const * argv[]){
    string s = "When in Rome, do as the Romans.";

    int size = s.size(); // 문자열 길이
    int index = s.find("Rome"); // 처음 찾은 인덱스

    cout << size << endl;
    cout << index << endl;

    return 0;
}