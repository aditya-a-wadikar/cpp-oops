/*
below code demos following,
    - protected access specifiers

Need
    - private members cannot be inherited
    - public members are accessible outside class also
    - protected members are kind of private but can be accessible using

Protected access specifiers
    - protected and public members of base class become protected member of derived class

Table of behaviour for data members in different access specifiers

    |----------------------------------------------------------------------------------------|
    | Access Specifier | Public Inheritance | Protected Inheritance | Private Inheritance    |
    |------------------|--------------------|-----------------------|------------------------|
    | private member   | not inherited      | not inherited         | not inherited          |
    |------------------|--------------------|-----------------------|------------------------|
    | public member    | public             | protected             | private                |
    |------------------|--------------------|-----------------------|------------------------|
    | protected member | protected          | protected             | private                |
    |----------------------------------------------------------------------------------------|

Notes
    - for inheritance private member cannot be accessed in any case

*/

#include <iostream>
using namespace std;

class Base{
    private:
        int b = 20;
    protected:
        int a = 10;
    public:
};

class Derived : protected Base{
    private:
    protected:
    public:
        int c;
        // only a is accessible
        // b is private for Base, so it inaccessible in Derived class
        void process(){
            c = a;
        };
};

int main() {
    Base base;
    Derived derived;
    derived.process();
    
    // this line will give inaccessible error
    // b cannot be accessed using derived object
    cout << derived.b << endl;
    cout << derived.c << endl;
    
    return 0;
}