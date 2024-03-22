/*
Friend Classes
    - have access to private and protected members of another class
    - they are declared using the friend keyword inside the class declaration.
    - friend classes do not inherit from the class in which they are declared as friends.
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// forward declaration
class User;
class Friend;

class User{
    private:
        string name;
        int age;
        int no_connects;
    public:
        User(string _name, int _age, int _no_connects);
        friend class Friend;
        string getName();
        int getAge();
        int getConnects();
        void setName(string _name);
        void setAge(int age);
        void incrementConnects();
        void decrementConnects();
};

User :: User(string _name, int _age, int _no_connects){
    name = _name;
    age = _age;
    no_connects = _no_connects;
};

string User :: getName(){
    return name;
};

int User :: getAge(){
    return age;
};
int User :: getConnects(){
    return no_connects;
};
void User :: setName(string _name){
    name = _name;
};
void User :: setAge(int _age){
    age = _age;
};

void User :: incrementConnects(){
    ++no_connects;
};

void User :: decrementConnects(){
    --no_connects;
};
// -------------------------

class Friend{
    private:
    public:
        // we are passing the reference/address of user object
        // this avoid unnecessory copying, improvement
        // using const, function makes promise that, it will not change the parameter in original
        // not using const, function can make changes to parameter using address
        void displayUser(const User &user);
};

void Friend :: displayUser(const User &user){
    cout << "UserName : "<<user.name<<endl;
    cout << "Age : "<<user.age<<endl;
    cout << "Total Connections : "<<user.no_connects<<endl;
};

// -------------------------

int main() {
    User user1("John", 30, 5);
    Friend friendObj;
    friendObj.displayUser(user1);
};