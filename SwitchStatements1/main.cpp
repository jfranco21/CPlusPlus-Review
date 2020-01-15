#include <iostream>
using namespace std;

int main(){
    int choice;
    while(choice != -1){
        cout << "1. Soccer" << endl;
        cout << "2. Baseball" << endl;
        cout << "3. Football" << endl;
        cout << "Enter -1 to quit the menu or choose a sport to play by enterin its corresponding #: ";
        cin >> choice;
        switch(choice){
            case 1:
                cout << "You chose to play soccer" << endl;
                break;
            case 2:
                cout << "You chose to play baseball" << endl;
                break;
            case 3:
                cout << "You chose to play football" << endl;
                break;
            case -1:
                cout << "quitting the menu" << endl;
                break;
            default:
                cout << "You entered an invalid option" << endl;
                break;
        }

    }
    return 0;
}
