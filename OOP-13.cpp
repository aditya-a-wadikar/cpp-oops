/*
below code demos following,
    - dynamic initilization of objects using constructor
    - dynamic initilization means taking user input and initilize data members
*/

#include <iostream>
using namespace std;

class Base{
    private:
        int a;
    public:
        Base();
        void print();
};

Base :: Base(){
    cout << "Enter some value - ";
    cin >> a;
};

void Base :: print(){
    cout << "The value - "<<a<<endl;
};

int main(){
    Base b;
    b.print();
}