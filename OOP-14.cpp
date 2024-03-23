/*
Copy Constructor
    - these use existing objects to create new objects
    - create the exact copy useully deep copy of object
    - compiler provide default copy constructor for each class creation

Need 
    - whenever the copy of object is needed
*/

#include <iostream>
using namespace std;

class Number{
    private:
        int a;
    public:
        // default constructor
        Number(){};
        // parameterized constructor
        Number(int _a);
        // copy constructor declaration
        Number(Number &number);
        void display();
};

Number :: Number(int _a){
    a = _a;
}

Number :: Number(Number &number){
    cout << "Copy constructor called"<<endl;
    a = number.a;
}

void Number :: display(){
    cout << "The number - "<< a<<endl;
}

int main() {
    Number x(4);
    x.display();
    Number z1(x);
    z1.display();

    Number y(40);
    Number y1 = y;  // copy constructor will be called

    Number y2; 
    y2 = y; // copy constructor will not be called

    return 0;
}