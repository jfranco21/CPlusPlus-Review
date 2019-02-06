#include <iostream>
#include "Pentagon.h"
using namespace std;

int main()
{
    Pentagon p1(5);
    cout << "The length of the p1 is: " << p1.getLength() << endl;
    cout << "The area of p1 is: " << p1.getArea() << endl;
    cout << "The # of pentagons created so far: " << p1.getCount() << endl;
    p1.changeLength(10);
    cout << "The new length for p1 is: " << p1.getLength() << endl;
    Pentagon p2;
    Pentagon p3;
    cout << "The number of pentagons is now: " << p1.getCount() << endl;
    return 0;
}
