#include <iostream>
using namespace std;

void outputArray(int array[], int size);
void outputArray2(int array[], int size);
void reverseArray(int array[], int array2[], int size);
void outputArrayAddresses(int array[], const int size);
void outputArrayAddresses2(int array[], const int size);

//outputs the values of the array
void outputArray(int array[], const int size){
    for(int x = 0;  x < size; x++){
        cout << array[x] << endl;
    }
    cout << endl;
}

void outputArray2(int array[], const int size){
    for(int x = 0; x < size; x++){
        cout << *(array + x) << endl;
    }
    cout << endl;
}

//outputs the memory addresses of the elements in the array
void outputArrayAddresses(int array[], const int size){
    for(int x = 0; x < size; x++){
        cout << &array[x] << endl;
    }
    cout << endl;
}
void outputArrayAddresses2(int array[], const int size){
    for(int x = 0; x < size; x++){
        cout << (array + x) << endl;
    }
    cout << endl;
}

//the second array gets the values of the first array, but in reverse order
void reverseArray(int array[], int array2[], const int size){
    for(int x = 0; x < size; x++){
        array2[x] = array[size - 1 - x];
    }
}

int main(){
    const int size = 5;
    int arrayNums[size] = {1, 2, 3, 4, 5};
    outputArray(arrayNums, size);
    outputArrayAddresses(arrayNums, size);
    outputArrayAddresses2(arrayNums, size);

    int arrayNums2[size];
    reverseArray(arrayNums, arrayNums2, size);
    outputArray2(arrayNums2, size);
    outputArrayAddresses(arrayNums2, size);
    outputArrayAddresses2(arrayNums2, size);
    return 0;
}


