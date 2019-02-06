#include <iostream>
using namespace std;

int main(){
    //converting a string to an int
    string stringNum = "100";
    int numInt = std::stoi(stringNum);
    //converting a int to a string
    int numInt2 = 500;
    string numString2 = std::to_string(numInt2);
    //converting a char to an int
    char numChar = '9';
    int num3 = numChar - '0';
    cout << "The conversion of '9' to int is: " << num3 << endl;
    int num4 = '0';
    cout << "The ASCII value of '0' is: " << num4 << endl;

    int num5 = '9';
    cout << "The ASCII range for 0-9 is: " << num4 << "-" << num5 << endl;

    int num6 = 'A';
    int num7 = 'Z';
    cout << "The ASCII range for A-Z is: " << num6 << "-" << num7 << endl;

    int num8 = 'a';
    int num9 = 'z';
    cout << "The ASCII range for a-z is: " << num8 << "-" << num9 << endl;
    return 0;
}
