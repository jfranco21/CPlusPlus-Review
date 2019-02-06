#include <iostream>
using namespace std;
#include <math.h>
int main(){
    //example of the sqrt(value) function
    int num = 9;
    cout << "The square root of " << num << " is: " << sqrt(num) << endl;

    //examples of the pow(a, b) function
    cout << "2 to the power of 8 is: " << pow(2, 8) << endl;

    //calculates the area for a circle
    double radius;
    const double PI = 3.14;
    cout << "Enter the radius of the circle" << endl;
    cin >> radius;
    cout << "The area of the circle is: " << PI * pow(radius, 2) << endl;

    //floating pt numbers
    int num2 = 19.6;
    cout << "declaring 19.6 as an int results in: " << num2 << endl;
    double num3 = 6;
    cout << "declaring 6 as a double results in: " << num3 << endl;

    return 0;
}
