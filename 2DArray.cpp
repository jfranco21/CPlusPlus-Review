#include <iostream>
using namespace std;

//globals for 2D
const int rowSize  = 3;
const int colSize = 4;

//function prototypes
void output(int arrayNums[rowSize][colSize]);
void output2(int array[][colSize], const int rowSize);


int main(){

    int arrayNums[rowSize][colSize] = {{1, 2, 3, 4}, {5, 6, 7 , 8}, {9, 10, 11, 12}};
    output(arrayNums);
    output2(arrayNums, rowSize);
    return 0;
}

//outputs the contents of a 2-D array
void output(int arrayNums[rowSize][colSize]){
    for(int x = 0; x < rowSize; x++){
        for(int y = 0; y < colSize; y++){
            cout << arrayNums[x][y] << " ";
        }
        cout << endl;
    }
}

void output2(int array[][colSize], const int rowSize){
    for(int x = 0; x < rowSize; x++){
        for(int y = 0; y < colSize; y++){
            cout << array[x][y] << " ";
        }
        cout << endl;
    }
}


