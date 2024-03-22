/*
This code demos following,
    - defualt constructor - takes no parameter
    - parameterized constructor - take one or more parameters
*/

#include <iostream>
using namespace std;

class Complex{
    private:
        int a, b;
    public:
        // declaring constructor
        Complex(int _a, int _b);
        void print();
};

// constructor defination
Complex :: Complex(int _a, int _b){
    a = _a;
    b = _b;
}

void Complex :: print(){
    cout << "Complex Number = "<<a<<" + "<<b<<"i"<<endl;
};

int main(){
    Complex c(4, 5);
    c.print();
}