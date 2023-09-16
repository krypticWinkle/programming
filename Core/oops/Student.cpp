#include<iostream>
using namespace std;
class Student
{
private:
    int age;
public:
    int rollNumber;
    Student(/* args */)
    {
        cout<<"Constructor 1 called!\n";
    }
    Student(int rollNumber)
    {
        cout<<"Constructor 2 called!\n";
        this->rollNumber = rollNumber;
    }
    Student(int a, int r)
    {
        cout<<"Constructor 3 called!\n";
        this->rollNumber = r;
        this->age = a;
    }
    ~Student()
    {
        cout<<"Destructor called!\n";
    }
};

// Student::Student(/* args */)
// {
// }

// Student::~Student()
// {
// }
