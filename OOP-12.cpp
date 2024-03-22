/*
below code demos,
    - default parameters in function or constructor
*/
#include <iostream>
using namespace std;


class Base{
    private:
        int a;
    public:
        // defining the default value for parameter
        Base(int _a=9){
            a = _a;
        }
        void print(){
            cout << "Value - "<<a;
        }
};

int main(){
    Base b;
    b.print();
}
