#include <iostream>
using namespace std;

//function prototypes
void incrementNum(int num);
void incrementNum2(int& num);

void incrementNum(int num){
    num++;
}

void incrementNum2(int& num){
    num++;
}


int main(){
    int num = 100;
    int &num2 = num;
    cout << "the value of num is: " << num << endl;
    cout << "the address of num is: " << &num << endl;
    cout << "the value of num2 is: " << num2 << endl;
    cout << "the address of num2 is: " << &num2 << endl;
    cout << endl;
    cout << "changing num2 to 50" << endl;
    num2 = 50;
    cout << "the value of num is: " << num << endl;
    cout << "the value of num2 is: " << num2 << endl;
    cout << endl;
    cout << "changing the value of num to 25" << endl;
    num = 25;
    cout << "the value of num is: " << num << endl;
    cout << "the value of num2 is: " << num2 << endl;
    cout << endl;

    int num3 = 200;
    cout << "the value of num3 is: " << num3 << endl;
    incrementNum(num3);
    cout << "after calling the incrementNum() pass by value the value of num3 is: " << num3 << endl;
    incrementNum2(num3);
    cout << "after calling the incrementNUm() pass by reference the value of num3 is: " << num3 << endl;
    return 0;
}


