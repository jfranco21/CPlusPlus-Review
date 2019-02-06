#include <iostream>
using namespace std;
#include "Circle.h"

int main(){
    Circle c1;
    cout << "The radius of c1 is: " << c1.getRadius() << endl;
    cout << "The perimeter of c1 is: " << c1.getPerimeter() << endl;
    cout << "The area of c1 is: " << c1.getArea() << endl;
    c1.changeRadius(10);
    cout << "The new radius of the c1 is: " << c1.getRadius() << endl;

    Circle c2(20);
    cout << "The radius of c2 is: " << c2.getRadius() << endl;
    cout << "The area of c2 is: " << c2.getArea() << endl;
    cout << "The perimeter of c2 is: " << c2.getPerimeter() << endl;
    c2.changeRadius(40);
    cout << "The new radius of c2 is: " << c2.getRadius() << endl;

    cout << "The number of circles created is: " << endl;

    return 0;
}
