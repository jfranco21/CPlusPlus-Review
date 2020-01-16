#include <iostream>
using namespace std;

int main(){
    const int SIZE = 5;
    int numbers[SIZE] = {1, 2, 3, 4, 5};

    //For loop for outputtingthe numbers in the array
    cout << "Outputting the 5 numbers in the array using a for loop: " << endl;
    for(int x = 0; x < SIZE; x++){
        cout << numbers[x] << " ";
    }
    cout << endl;

    //While loop for outputting the numbers in the array
    cout << "Outputting the 5 numbersin the array using a while loop" << endl;
    int count = 0;
    while(count < SIZE){
        cout << numbers[count] << " ";
        count++;
    }
    cout << endl;

    //Do while for outputting the numbers in the array
    cout << "Outputting the 5 numbers in the array using a do while loop" << endl;
    int count2 = 0;
    do{
        cout << numbers[count2] << " ";
        count2++;
    }while(count2 < SIZE);
    return 0;
}
