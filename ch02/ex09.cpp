#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){
    int number;

    cout << "input number:";
    cin >> number;

    switch(number){
        case 0:
            cout << "zero\n";
        case 1:
            cout << "one\n";
        case 2:
            cout << "two\n";
        default:
            cout << "many\n";
            break;
    }
    return 0;
}