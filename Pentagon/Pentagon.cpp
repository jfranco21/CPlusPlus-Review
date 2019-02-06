#include "Pentagon.h"
#include "math.h"
int Pentagon:: count = 0;

Pentagon::Pentagon(){
    a = 1;
    count++;
}

Pentagon::Pentagon(double a){
    this->a = a;
    count++;
}

Pentagon::~Pentagon(){
    count--;
}

/*double Pentagon::getLength() const{
    return this->a;
}*/

double Pentagon::getArea(){
    double area = (.25) * sqrt(5 * (5 + 2 * sqrt(50))) * pow(this->a, 2);
    return area;
}

 void Pentagon::changeLength(double newLength){
    this->a = newLength;
}

/*int Pentagon::getCount(){
    return count;
}*/
