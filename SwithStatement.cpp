#include <iostream>
using namespace std;

//program that shows a simple example of using a switch statement
int main(){
    int value;
    cout << "Enter a value between 1-3" << endl;
    cin >> value;
    switch(value){
        case 1:
            cout << "The value you entered is 1" << endl;
            break;
        case 2:
            cout << "The value you entered is 2" << endl;
            break;
        case 3:
            cout << "The value you entered is 3" << endl;
            break;
        default:
            cout << "You entered a number that is not within 1-3 range" << endl;
    }
    return 0;
}
