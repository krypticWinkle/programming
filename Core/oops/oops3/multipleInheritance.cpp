#include<iostream>
using namespace std;

class Teacher
{
    public:
    string name;
    string age;

    void print()
    {
        cout<<"Teacher\n";
    }
};

class Student
{
    public:
    string name;
    void print ()
    {
        cout<<"Student\n";
    }
};

class TA: public Teacher, public Student
{
    public:
    void print()
    {
        cout<<"TA\n";
    }
};

int main()
{
    TA a;
    //a.Student::print();
    a.Teacher::name = "abcd";
    a.print();
    return 0;
}
