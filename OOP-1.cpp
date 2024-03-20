/*
This code demostrate the following
    - class syntax
    - public, private and protected access specifiers
    - writing the methods outside of class
*/

#include <iostream>
#include <string>
using namespace std;

// class syntax
class Employee
{
    // access modifiers declaration and usage
private:
    // private means nowhere access, only inside class

    // salary and name are data members of instance
    int salary;
    string name;

public:
    // public means every where access, both outside and inside 

    // method declaration inside class only
    void setName(string _name);
    void setSalary(int _salary);
    string getIntroduction();
    // method declaration and initilization inside class
    void dummy()
    {
        cout << "Does nothing !" << endl;
    };
};

// method implementation outside of class
void Employee ::setName(string _name)
{
    name = _name;
};

void Employee ::setSalary(int _salary)
{
    salary = _salary;
};

// return type of method should be mentioned as shown below
string Employee ::getIntroduction()
{
    // to_string function - typecast any dtype to string dtype
    return "Name :" + name + "\nSalary :" + to_string(salary);
};

int main()
{
    // instace or object initlization
    Employee e;
    // accessing the setter and getter methods
    e.setName("Harry");
    e.setSalary(4500);
    cout << e.getIntroduction() << endl;
};