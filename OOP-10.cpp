/*
This code demos,
    - implicit and explicit invoke
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
};

void Complex :: print(){
    cout << "Complex Number - "<<a<<" + "<<b<<"i"<<endl;
};

int main(){
    // this is implicit call with declaration
    Complex c(4, 5);

    // this is explicit call with declaration
    Complex d = Complex(5, 7);
    
    c.print();
    d.print();
};