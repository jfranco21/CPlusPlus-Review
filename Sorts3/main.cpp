#include <iostream>
#include <math.h>
using namespace std;

//output array
void outputArray(int array[], int size){
    for(int x = 0; x < size; x++){
        cout << array[x] << " ";
    }
    cout << endl;
}

//Selection sort
void selectionSort(int arr[], int size){
    //for each element in the array...
    for(int x = 0; x < size; x++){
        //Check the elements of its right side and swap it with the smallest element
        int smallest = arr[x];
        int index = x;
        for(int y = x + 1; y < size; y++){
            if(arr[y] < smallest){
                smallest  = arr[y];
                index = y;
            }
        }
        //Note: if no smaller element is found then the element swaps with itself producing no changes
        int tempVal = arr[x];
        arr[x] = arr[index];
        arr[index] = tempVal;
    }
}

//Insertion sort
void insertionSort(int arr[], int size){
    //for each element in the array
    for(int x = 0; x < size; x++){
        int index1 = x;
        int index2 = x - 1;
        while(index2 != -1){
            //if the current array element value is less than its left neighbor...
            if(arr[index1] < arr[index2]){
                //swap the values in the array
                int tempVal = arr[index1];
                arr[index1] = arr[index2];
                arr[index2] = tempVal;
                //update index values so we can continue checking if the current array value is in the right spot
                index1--;
                index2--;
            }
            //if the current array element is greater then its left neighbor no need to do comparisons since its already in its correct spot
            else if(arr[index1] > arr[index2]){
                break;
            }
        }
    }
}

//shell sort implementation is wrong
void shellSort(int Nums[], int size){
    int index = size;
    while(index != 1){
        index = floor(index / 2);
        for(int x = 0; x < size - index; x++){
            if(Nums[x] > Nums[x + index]){
                int temp = Nums[index];
                Nums[index] = Nums[x];
                Nums[x] = temp;
            }
        }
    }
    outputArray(Nums, size);
}

void Quicksort(int Nums[], int size){

}

void Mergesort(int Nums[], int size){

}

void bubbleSort(int arr[], int size){

    for(int x = 0; x < size; x++){
        for(int y = 0; y < size - 1; y++){
            if(arr[y] > arr[y + 1]){
                int tempVal = arr[y];
                arr[y] = arr[y + 1];
                arr[y+1] = tempVal;
            }
        }
    }
}

int main()
{
    const int size1 = 6;
    int array1[size1] = {7, 3, 1, 2, 4, 6};
    cout << "before selection sort: " << endl;
    outputArray(array1, size1);
    selectionSort(array1, size1);
    cout << "after selection sort: " << endl;
    outputArray(array1, size1);

    cout << endl;

    const int size2 = 6;
    int array2[size2] = {2, 8, 5, 3, 9, 4};
    cout << "before insertion sort: " << endl;
    outputArray(array2, size2);
    insertionSort(array2, size2);
    cout << "after insertion sort: " << endl;
    outputArray(array2, size2);

    cout << endl;

    const int size3 = 7;
    int array3[size3] = {2, 8, 5, 3, 9, 4, 1};
    cout << "before bubble sort: " << endl;
    outputArray(array3, size3);
    cout << "after bubble sort: " << endl;
    bubbleSort(array3, size3);
    outputArray(array3, size3);

    cout << endl;


    /*const int size4 = 12;
    int array4[] = {24, 109, 149, 111, 34, 2, 24, 119, 122, 125, 27, 145};
    cout << "before using the shell sort" << endl;
    outputArray(array4, size4);
    cout << endl;
    cout << "after shell sort" << endl;
    shellSort(array4, size4);*/




}
