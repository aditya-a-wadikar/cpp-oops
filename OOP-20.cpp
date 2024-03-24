/*
This code demos following
    - Multilevel Inheritance

Multilevel Inheritance
    - class Student ->> class Exam ->> class Result
*/

#include <iostream>
using namespace std;

// ---------- seperator ---------- //

class Student{
    protected:
        int roll_number;
    public:
        void setNumber(int _roll_number);
        void getNumber();
};

void Student :: setNumber(int _roll_number){
    roll_number = _roll_number;
}

void Student :: getNumber(){
    cout << "Roll number = " << roll_number<<endl;
}

// ---------- seperator ---------- //

class Exam :public Student{
    protected:
        float maths_marks;
        float physics_marks;
    public:
        void setMarks(float _maths_marks, float _physics_marks);
        void getMarks();
};
 
void Exam :: setMarks(float _maths_marks=0, float _physics_marks=0){
    maths_marks = _maths_marks;
    physics_marks = _physics_marks;
}

void Exam :: getMarks(){
    cout << "Marks obtained in Maths are :"<<maths_marks<<endl;
    cout << "Marks obtained in Physics are :"<<physics_marks<<endl;
}

// ---------- seperator ---------- //

class Result : public Exam{
    private:
        float percentage;
    public:
        void display();
};

void Result :: display(){
    cout << "Roll Number : " << roll_number<<endl;
    cout << "Totoal :"<<(maths_marks+physics_marks)/2<<" %"<<endl;
}

// ---------- seperator ---------- //

int main() {
    Result harry;
    harry.setNumber(430);
    harry.setMarks(94, 90);
    harry.display();
    
    return 0;
}
