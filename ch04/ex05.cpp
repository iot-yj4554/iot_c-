#include <iostream>
using namespace std;

class Shape{
    protected:
        int x,y;

    public:
        void draw() {
            cout << x << ", " << y << endl;
        }
        void move() {}
};

class Rectangle : public Shape{ // 상속. public으로 상속받았으므로 부모의 접근 지정자 그대로 가져옴
    protected:
        int width;
        int height;
    
    public:
        int calcArea(){
            cout << x << ", " << y << endl;
            return width*height;
        }
};

int main(){
    Rectangle r;
    // r.x = 10; // protected는 비공개 -> 에러
    // r.width = 200; // protected는 비공개 -> 에러

    r.calcArea();
    r.move();

    return 0;
}