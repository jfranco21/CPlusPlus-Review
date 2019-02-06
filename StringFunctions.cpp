#include <iostream>

using namespace std;

int main()
{
    string city = "Salem";
    string state = "Oregon";
    string country = "United States of America";

    //outputting a string's characters and using the size() function
    for(int x = 0; x < city.size(); x++){
        cout << city[x] << " ";
    }
    cout << endl;

    //outputting a string while using the alternative length() function
    for(int x = 0; x < state.length(); x++){
        cout << state[x] << " ";
    }
    cout << endl;

    //outputting a string and getting each string character using at() function instead of using []
    for(int x = 0; x < country.length(); x++){
        cout << country.at(x) << " ";
    }
    cout << endl;
}
