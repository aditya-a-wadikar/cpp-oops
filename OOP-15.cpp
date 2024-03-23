/*
Destructor
    - destructor is a special member function 
    - this is auto invoked when an object goes out of scope or invoked explicitly
    - Destructors don't take any parameters and don't return any value
    - these never takes any argument, nor does it return any value
    - exactly opposite of initilizers/ constructors

Purpose
    - release memory that used at time of object's lifetime
*/

#include <iostream>
using namespace std;

// forward declaration 
class Num;

class Num{
    private:
        static int count;
    public:
        // constructor declaration
        Num();
        // destructor declaration
        ~Num();
};

// static member initilization
int Num :: count=0;


// constructor defination
Num :: Num(){
    ++count;
    cout << "This is time when constructor is called for object "<<count<<endl;
};

// destructor defination
Num :: ~Num(){
    cout << "This is time when destructor is called for object "<<count<<endl;
    --count;
};



int main() {
    cout << "Inside main function"<<endl;
    cout << "Creating object n1 for num "<<endl;

    Num n1;
    {
        cout << "Entering this block"<<endl;
        cout << "Creating two more objects" << endl;
        Num n2, n3;
        cout << "Exiting this block"<<endl;
    }
    cout << "Back to main function"<<endl;   
}

