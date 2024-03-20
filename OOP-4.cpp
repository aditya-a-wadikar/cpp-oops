#include <iostream>
using namespace std;

/*
About static members,
    - static member also known as class member or class variable
    - static members are shared accross each object of class
    - static members are associated with class, one copy per class
    - data members are associated with objects, one copy for one object

This code implementation shows usage of static members
*/

class Employee{
    private:
        // declaration of static data member
        static int count;
        string name;
        int id;

    public:
        Employee(string _name);

};

// writing constructor outside of class using scope resolution operator
// although constructor dose not return anything, 
// but you do not have to mention return type.
Employee :: Employee(string _name){
    name = _name;
    id = count;
    ++count;
};


int main() {

};