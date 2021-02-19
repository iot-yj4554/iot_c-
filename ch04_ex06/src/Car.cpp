#include "Car.hpp"
#include <iostream>

// Car::Car() { // ::는 scope 연산자. Car라는 클래스에서 Car()라는 메서드를 호출

// }

// Car::~Car() {

// }

void Car::setSpeed(int s){
    speed = s;
}

int Car::getSpeed(){
    return speed;
}