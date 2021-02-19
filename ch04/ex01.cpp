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
    Circle obj; // 객체 생성
    obj.radius = 100;
    obj.color = "blue";

    cout << "Area of Circle : " << obj.calcArea() << endl;

    return 0;
}