#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){


    srand(time(0));

    //generates 20 random numbers between 0-9
    cout << "generating 20 random numbers between 0-9" << endl;
    for(int x = 0; x < 20; x++){
        int num = rand() % 10;
        cout << num << endl;
    }

    cout << endl;

    //generates 20 random numbers between 1994-2019
    cout << "generating 20 random numbers between 1994-2019" << endl;
    for(int x = 0; x < 50; x++){
        int num = rand() % 26 + 1994;
        cout << num << endl;
    }

    return 0;
}
