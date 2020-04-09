#include <iostream>
using namespace std;
struct Employee{
private:
    int id;
    string first_name, last_name;
public:
    // Default constructor
    Employee(){
        id = 0;
        first_name = "";
        last_name = "";
    }

    // Non-default constructor
    Employee(int id, string first_name, string last_name){
        id = id;
        first_name = first_name;
        last_name = last_name;
    }


    //Copy constructor
    Employee(Employee &e){
        id = e.ShowID();
        first_name = e.ShowFirstName();
        last_name = e.ShowLastName();
    }


    // Outputs the employee's information
    void OutputInfo(){
        cout << "ID: " << id << " First Name: " << first_name << " Last Name: " << last_name << endl;
    }

    // Changes the employee's id
    void UpdateID(int new_id){
        id = new_id;
    }

    // Changes the employee's first name
    void UpdateFirstName(string new_first_name){
        first_name = new_first_name;
    }

    // Changes the employee's last name
    void UpdateLastName(string new_last_name){
        last_name = new_last_name;
    }

    // Outputs the employee's id
    int ShowID(){
        return id;
    }

    // Outputs the employee's first name
    string ShowFirstName(){
        return first_name;
    }

    // Outputs the employee's last name
    string ShowLastName(){
        return last_name;
    }

    // Changes all of the employee's information
    void ChangeAll(int new_id, string new_first_name, string new_last_name){
        id = new_id;
        first_name = new_first_name;
        last_name = new_last_name;
    }

    void

};

int main(){
    Employee e1;
    e1.OutputInfo();
    e1.ChangeAll(2, "Bob", "Hill");
    e1.OutputInfo();
    cout << e1.ShowID() << endl;
    cout << e1.ShowFirstName() << endl;
    cout << e1.ShowLastName() << endl;
    e1.UpdateFirstName("Yusuke");
    e1.UpdateLastName("Urameshi");
    e1.UpdateID(3);
    e1.OutputInfo();

    Employee e2(e1);
    e2.OutputInfo();

    return 0;
}

