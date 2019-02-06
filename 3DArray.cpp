#include <iostream>
using namespace std;

//the row, column, and height sizes for an 3D array
const int rowSize = 2;
const int colSize = 3;
const int heightSize = 4;

//function prototypes
void output(int array[][rowSize][colSize], const int row);
void output(int array[rowSize][colSize][heightSize]);

int main(){
    int arrayNums[rowSize][colSize][heightSize] = {{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}}, {{13, 14, 15, 16},
                                                    {17, 18 , 19, 20}, {21, 22, 23, 24}}};
    output(arrayNums);
    return 0;
}

//function implementations
void output(int array[rowSize][colSize][heightSize]){
    for(int x = 0; x < rowSize; x++){
        for(int y = 0; y < colSize; y++){
            for(int z = 0; z < heightSize; z++){
                cout << array[x][y][z] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}
