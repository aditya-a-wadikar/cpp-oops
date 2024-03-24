/*
This code demos following,
    - syntax of inheritance

Syntax

    class derived-class : visibility-class base-class-name{
        // data members and methods here
    }

    - visibility mode can be one of following
        1. public
        2. private
        3. protected

    - default visibility mode is private
    - but, you should mention for better readability

Visibility Modes
    1. Private
        - Public members of base class becomes private members of derived class
    2. Public
        - public members of base class becomes public members of derived class

Note
    - private members of base class are never inherited in any case
    
*/

#include <iostream>
using namespace std;

// base or parent class
class Employee{
    public:
        int id;
        float salary;
        Employee();
        Employee(int inpId);
};

Employee :: Employee(int inpId){
    id = 1;
    salary = 34;
};

// derived or child class
class Programmer : public Employee{
    public:
        Programmer(int inpId){
            id = inpId;
        }
        int languageCode = 9;
};


int main() {
    Employee harry(1), rohan(2);
    Programmer skillF(3);
    cout << skillF.id << endl;
    return 0;
}