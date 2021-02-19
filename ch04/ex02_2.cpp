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

void print(Circle p){
    cout << "Area of Pizza : " << p.calcArea() << endl;
}

int main(int argc, char const *argv[]){
    Circle pizza1, pizza2; // 객체 생성
    
    pizza1.radius = 100;
    pizza1.color = "yellow";
    print(pizza1);

    pizza2.radius = 200;
    pizza2.color = "white";
    print(pizza2);

    Circle pizza3 = pizza1; // 복사본을 스택에 새로운 인스턴스로 만듬. 따라서 pizza3에서 값을 바꾸어도 pizza1이 바뀌지 않음
    pizza3.radius = 300;
    print(pizza3);

    print(pizza1);

    // 이것들은 정적할당. 파이썬에서는 불가능. 파이썬은 객체 운영 방식이 동적 할당. c++는 동적, 정적 둘 다 가능


    return 0;
}