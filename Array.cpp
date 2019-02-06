#include <iostream>
using namespace std;

void outputArray(int array[], int size);
void reverseArray(int array[], int array2[], int size);

void outputArray(int array[], const int size){
    for(int x = 0;  x < size; x++){
        cout << array[x] << endl;
    }
    cout << endl;
}

void reverseArray(int array[], int array2[], const int size){
    for(int x = 0; x < size; x++){
        array2[x] = array[size - 1 - x];
    }
}

int main(){
    const int size = 5;
    int arrayNums[size] = {1, 2, 3, 4, 5};
    outputArray(arrayNums, size);
    int arrayNums2[size];
    reverseArray(arrayNums, arrayNums2, size);
    outputArray(arrayNums2, size);
    return 0;
}


