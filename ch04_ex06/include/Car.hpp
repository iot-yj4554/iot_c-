#pragma once
#include <string>
using namespace std;

// Car 클래스의 Signature(원형)
class Car {

// public:
//     Car(); // 생성자. 인스턴스 만들어질 때 자동 호출.
//     ~Car(); // 파괴자. 인스턴스가 메모리에서 제거될 때 호출되어 사라짐.

    int speed;
    int gear;
    string color;

public:
    int getSpeed();
    void setSpeed(int s);
};