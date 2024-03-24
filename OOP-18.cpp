/*
This program demos following, 
    - Single Inheritance
*/

#include <iostream>
using namespace std;


// forward declarations
class Base;
class Derived;

// ---------- seperator ----------

class Base{
    private:
        // private member of base class and are inheritable
        int data1;
    public:
        // public member of base class and are inheritable
        int data2;
        void setData();
        int getData1();
        int getData2();

};

void Base :: setData(){
    data1 = 10;
    data2 = 20;
};

int Base :: getData1(){
    return data1;
};

int Base :: getData2(){
    return data2;
};

// ---------- seperator ----------

class Derived : public Base{
    private:
        int data3;
    public:
        void process();
        void display();
};

void Derived :: process(){
    data3 = data2 * getData1();
};

void Derived :: display(){
    cout << "Value of data 1 is "<< getData1 ()<<endl;
    cout << "Value of data 2 is "<< getData2 ()<<endl;
    cout << "Value of data 3 is "<< data3 <<endl;
}

// ---------- seperator ----------

int main() {
    Derived der;
    der.setData();
    der.display();
    cout << endl;
    der.process();
    der.display();
    
    

    return 0;
}

/*
    - data1 of Base class is private, can not be accessed by Derived class or it's objects
    - but the method setData is public, which can be accessed by Derived class or it's objects

    - in this case, public access specifiers is used for inheritance
*/