#include <iostream>
//Includes the source files for generating random values
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
    //Init(ializes the random seed
    srand(time(nullptr));

    //Generates random values for 2 dice 10 times
    for(int x = 0; x < 10; x++){
        int dice1 = rand () % 6 + 1;
        int dice2 = rand () % 6 + 1;

        cout << "The total roll of the two dice is: " << dice1 + dice2 << endl;
    }

    return 0;
}
