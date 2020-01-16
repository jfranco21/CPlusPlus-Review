#include <iostream>
#include <vector>

using namespace std;

//Function prototypes
//Note: const will prevent any changes from being made to the vector
void output_elements(const vector<int> &numbers);
void output_elements2(const vector<int> &numbers);

//The following function will make a copy of the vector when passed to the function instead of referencing the vector itself
//void output_elements(vector<int> number);

int main(){
    vector <int> numbers = {1, 2, 3, 4, 5};
    /*Alternative way to implement the vector, but its less compact and tedious
     * vector <int> numbers (3);
     * numbers[0] = 1;
     * numbers[1] = 2;
     * numbers[2] = 3;
     * numbers[3] = 4;
     * numbers[4] = 5;
     */

    //Loop displaying the values of the vector
    cout << "Displaying vector numbers using a range base-loop" << endl;
    output_elements(numbers);

    //Loop that displays the values using a loop the usual way
    cout << "Displaying vector numbers normally" << endl;
    output_elements2(numbers);


    //Checks if the vector is empty
    if(numbers.empty() == true){
        cout << "The vector of numbers is empty" << endl;
    }
    else{
        cout << "The vector is not empty" << endl;
    }

    //Gets the first value of the vector
    cout << "The first value of the vector is: " << numbers.front() << endl;

    //Gets the last value of the vector
    cout << "The last value of the vector is: " << numbers.back() << endl;

    //Adds a value to the back of the vector
    cout << "Adding 6 to the back of the vector" << endl;
    numbers.push_back(6);
    output_elements(numbers);

    //Removes the last value of the vector
    cout << "Removing the last element in the vector" << endl;
    numbers.pop_back();
    output_elements(numbers);


    //Returns values at index 3 and 0 in the vector
    cout << "The value at index 3 in the vector is : " << numbers.at(3) << endl;
    cout << "The value at index 0 in the vector is : " << numbers.at(0) << endl;

    //Removes the value at index 2 in the vector
    cout << "The value at index 2 that we will be removing is: " << numbers.at(2) << endl;
    numbers.erase(numbers.begin() + 2);
    output_elements(numbers);


    //Inserts 10 to the vector as the 3rd element
    cout << "Inserting 10 to index 3 in the vector" << endl;
    numbers.insert(numbers.begin() + 2, 10);
    output_elements(numbers);

    //Clears the vector
    cout << "Clearing the vector \n";
    numbers.clear();
    output_elements(numbers);


    return 0;
}

//This function outputs the values in the vector using a base-range loop
void output_elements(const vector<int> &numbers){
    for(int number:numbers){
        cout << number << " ";
    }
    cout << endl;
}

//This function outputs the values in the vector normally
void output_elements2(const vector<int> &numbers){
    for(int x = 0; x < numbers.size(); x++){
        cout << numbers.at(x) << " ";
    }
    cout << endl;
}
