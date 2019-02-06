#include "Circle.h"

const double Circle::PI = 3.14;
int Circle::count = 0;

Circle::Circle(){
    radius = 1;
    count++;
}

Circle::Circle(double radius){
    this->radius = radius;
    count++;
}

Circle::~Circle(){
    count--;
}

double Circle::getRadius() const{
    return this->radius;
}

double Circle::getArea() const{
    return this->radius * 3.14 * this->radius;
}

double Circle::getPerimeter() const{
    return 2 * 3.14 * this->radius;
}

int Circle::getCount() const{
    return count;
}

void Circle::changeRadius(double newRadius){
    this->radius = newRadius;
}

