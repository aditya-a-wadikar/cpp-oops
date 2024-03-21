/*
This code demonstrate following
    - friend functions which can access private data members of class

Properties
    - not in the scope of class
    - since it is not in the scope of class, it can not be called from object
    - can be invoked without the help of object
    - usually contains the objects as arguments
*/

#include <iostream>
using namespace std;


class Complex{
    private:
        int a, b;
    public:
        // declaration of friend function
        // this gives access to sumComplex about private data members
        friend Complex sumComplex(Complex o1, Complex o2);
        void setNumber(int n1, int n2);
        void printNumber();
};

void Complex :: setNumber(int n1, int n2){
    a = n1;
    b = n2;
};

void Complex :: printNumber(){
    cout << "Your number = "<<a<<" + "<<b<<"i"<<endl;
};

// friend function return Complex class instance
Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber(o1.a + o2.a, o1.b + o2.b);
    return o3;
};

int main() {
    Complex c1, c2, o3;
    c1.setNumber(1, 4);
    c2.setNumber(5, 8);

    c1.printNumber();
    c2.printNumber();

    o3 = sumComplex(c1, c2);
    o3.printNumber();
    
    return 0;
}