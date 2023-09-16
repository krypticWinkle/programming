#include<bits/stdc++.h>
using namespace std;

class Student
{
    private:
    int age; 

    public:
    char *name;
    Student(int age, char *name)
    {
        this->age = age;
        //Shallow copy
        //this->name = name;

        //Deep Copy
        this ->name = new char[strlen(name) + 1];//1 extra length is for '0' at the end
        strcpy(this->name, name);
    }

    Student(const Student &s)
    {
        this->age = s.age;
        //this->name = s.name;//this is shallow copy
        //deep copy
        this->name = new char[strlen(s.name) + 1];
        strcpy(this->name, s.name);
    }

    void display()
    {
        cout<<name<<" "<<age<<"\n";
    }
};