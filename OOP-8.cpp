/*
This code demos
    - basic use of constructor

Constructors
    - these are special member functions which are called auto when object is initilized

Types 
    - default constructor : no instructors
    - parameterized constructor : parameters are initialized
    - copy constructor : copy the datamembers and create another object

Characteristics
    - no return, not even void/null
    - class can have multiple constructors
    - they are responsible for intialization of data members
    - Implicit and Explicit Invocation
*/

#include <iostream>
using namespace std;

class Base{
    private:
        string name;
    public:
        // declaration of constructors - return not mentioned
        Base(string _name);
        void display();
};

// defination of constructors
Base :: Base(string _name){
    // initilizing the data members of class
    name = _name;
}

void Base :: display(){
    cout << "Constructor is called"<<endl;
    cout << "Username is "<<name<<endl;
}

int main(){
    // object creation, which auto calls constructors
    Base b("John");
    b.display();
}