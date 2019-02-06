#include <iostream>
using namespace std;
#include <string.h>
#include <stdio.h>

void output(char cstring[]){
    int count = 0;
    while(count != strlen(cstring)){
        cout << cstring[count] << " ";
        count++;
    }
    cout << endl;
}

int main(){
    char cString[20] = "Hello world";
    cout << cString << endl;

    //outputs a c-string using a while loop
    output(cString);

    //sets a c-string using the cin.getline(cstring, size, delimeterChar) function
    char cString2[20];
    cout << "Enter the name of your favorite dog?" << endl;
    cin.getline(cString2, 20, '\n');
    cout << "The dog that you entered that is your favorite is: " << cString2 << endl;
    cout << endl;

    //copying a c-string using strcpy() and strncpy
    cout << "we will be using the strncpy(dest, src, #chars) function" << endl;
    char source1[] = "golden doodle poodle";
    cout << "source1 is: " << source1 << endl;
    char target1[10];
    strncpy(target1, source1, 6);
    cout << "target1 is now: " << target1 << endl;
    cout << "the source is: " << source1 << endl;
    output(target1);

    cout << endl;
    cout << "we will be using the strcpy(dest, src) function" << endl;
    char source2[] = "tuxedo cat";
    cout << "source2 initally is: " << source2 << endl;
    char destination2[5];
    strcpy(destination2, source2);
    cout << "source2 after using the function is: " << source2 << endl;
    cout << "destination2 is: " << destination2 << endl;
    output(destination2);


    //concatening strings
    //when using the strcat(target, src, #chars) make sure the target has enough space in order for it to work
    char target3[] = "Walker";
    strcat(target3, " Road NE");
    cout << target3 << endl;

    //strncat(target, src, #chars)
    char target4[] = "Portland";
    strncat(target4, " , Oregon", 9);
    cout << target4 << endl;

    //atoi(cstring) used to convert a c-string to an integer;
    char numberCString[] = "100";
    int numInt = atoi(numberCString);
    cout << "The number of numInt is: " << numInt << endl;

    //atof(cstring) used to convert a c-string to a floating pt #
    char numberCString2[] = "114.4";
    double doubleNum = atof(numberCString2);
    cout << "the number of doubleNum is: " << doubleNum << endl;

}
