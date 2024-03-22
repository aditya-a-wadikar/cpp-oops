/*
This code demos,
    - constructor overloading, writing more than one constructor
*/

#include <iostream>
using namespace std;

class Complex{
    private:
        int a, b;
    public:
        // default constructor
        Complex(){
            a = 0;
            b = 0;
        }
        // first constructor
        Complex(int _a, int _b){
            a = _a;
            b = _b;
        }
        // second constructor
        Complex(int _a){
            a= _a;
            b = 0;
        }

        void print();
};       

void Complex :: print(){
    cout << "Complex Number = "<<a<<" + "<<b<<"i"<<endl;
};

int main() {
    // this will auto invoke default constructor
    Complex x;
    x.print();

    // this will invoke first constructor, because two parameters are included
    Complex y(4, 5);
    y.print();

    // this will invoke second constructor, because one param included
    Complex z(4);
    z.print();
    
    return 0;
}

