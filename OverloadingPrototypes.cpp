#include <iostream>
using namespace std;

//program that show function overloading, prototypes, and default function parameters

//function prototypes
int addNums(int num1, int num2);
int addNums(int num1, int num2, int num3);
double addNums(double num1, double num2);
double addNums(double num1, double num2, double num3);

double calcCircleArea(double r = 1){
    const double PI = 3.14;
    return r * r * PI;
}
int main(){
    cout << addNums(1, 2) << endl;
    cout << addNums(1, 2 , 3) << endl;
    cout << addNums(2.5, 6.75) << endl;
    cout << addNums(1.25, 1.5, 1.1) << endl;
    cout << "The area of the circle is: " << calcCircleArea() << endl;
    cout << "The area of a circle with r = 5 is: " << calcCircleArea(5.0) << endl;
    return 0;
}

//function implementations
int addNums(int num1, int num2){
    return num1 + num2;
}

int addNums(int num1, int num2, int num3){
    return num1 + num2 + num3;
}

double addNums(double num1, double num2){
    return num1 + num2;
}

double addNums(double num1, double num2, double num3){
    return num1 + num2 + num3;
}
