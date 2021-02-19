#include <iostream>
#include <string>
#include "Car.hpp"
using namespace std;

int main(int argc, char const *argv[]) {
    std::cout << "Hello Easy C++ project!" << std::endl;

    Car myCar;

    myCar.setSpeed(100);
    cout << "speed : " << myCar.getSpeed() << endl;

    return 0;
}