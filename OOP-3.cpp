#include <iostream>
using namespace std;

/*
This implementation gives idea of how to 
    - use arrays inside class
    - use of scope resolution operator ( :: )
*/

class Shop{
    private:
        // data members
        int itemPrice[100]; 
        int counter = 0;
    public:
        // methods
        void setItem();
        void getItems();
};

void Shop :: setItem(){
    cout << "Enter the Price :";
    cin >> itemPrice[counter];
    counter+=1;
};

void Shop :: getItems(){
    for (int i = 0; i < counter; i++){
        cout << "Item Id = "<< i << " and Item Price = "<<itemPrice[i]<<endl;
    }
}



int main() {
    Shop dukaan;
    dukaan.setItem();
    dukaan.setItem();
    dukaan.setItem();
    dukaan.setItem();
    dukaan.getItems();
}