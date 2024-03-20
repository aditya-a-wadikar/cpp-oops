#include <iostream>
#include <string>
using namespace std;

class Binary
{
private:
    string s;

public:
    void read();
    bool chk_bin();
    void ones();
    string display();
};

// :: - this is scope resolution operator
// scope resolution operator used to accessing data members (function and variables) of class.
void Binary ::read()
{
    cout << "Enter binary number : ";
    cin >> s;
};

bool Binary ::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        // .at method give access to i'th index of string
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            return false;
        }
        return true;
    }
};

void Binary::ones()
{
    // Invoking chk_bin() member function
    // this is called of nesting of member function
    bool decision = chk_bin();
    if (decision == true)
    {
        // Proceed with modifying the binary number
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) == '0')
            {
                s.at(i) = '1';
            }
            else
            {
                s.at(i) = '0';
            }
        }
    }
}


string Binary ::display()
{
    return s;
}

int main()
{
    Binary b;
    b.read();
    b.ones();
    cout << b.display() << endl;
}
