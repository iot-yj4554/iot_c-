#include <iostream>
using namespace std;

class Circle{
    public:
        int radius;
        string color;

        double calcArea(){
            return 3.14 * radius * radius;
        }
}; // 클래스 마지막에 반드시 세미콜론 붙여야 함

int main(int argc, char const *argv[]){
    Circle pizza1, pizza2; // 객체 생성
    
    pizza1.radius = 100;
    pizza1.color = "yellow";
    cout << "Area of Pizza1 : " << pizza1.calcArea() << endl;

    pizza2.radius = 200;
    pizza2.color = "white";
    cout << "Area of Pizza2 : " << pizza2.calcArea() << endl;


    return 0;
}