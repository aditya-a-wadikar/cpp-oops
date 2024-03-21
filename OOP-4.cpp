#include <iostream>
using namespace std;

/*
About static members,
    - static member also known as class member or class variable
    - static members are shared accross each object of class
    - static members are associated with class, one copy for class
    - data members are associated with objects, one copy for one object

This code implementation shows usage of static members
*/




class Employee{
    private:
        // declaration of static data member
        static int count;
        // declaration of data member
        string name;

    public:
        // constructor, it runs when instance is created
        Employee(string _name);
        // static function, which access the static variables
        static int getCount();

};

// static members should be initilized outside of class
int Employee :: count = 0;

// writing constructor outside of class using scope resolution operator
// although constructor dose not return anything, 
// but you do not have to mention return type.
Employee :: Employee(string _name){
    name = _name;
    count++;
};


int Employee :: getCount(){
    return count;
};


int main() {
    Employee e1("Aditya");
    Employee e2("Shubham");
    cout << Employee :: getCount() << endl;
};