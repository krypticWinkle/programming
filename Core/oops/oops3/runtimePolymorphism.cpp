#include<bits/stdc++.h>
using namespace std;

class Vehicle
{
    public:
    string color;

    virtual void print()
    {
        cout<<"Vehicle\n";
    }
};

class Car : public Vehicle
{
    public:
    int numGears;

    void print()
    {
        cout<<"Car\n";
    }
};


// int test(int a, int b)
// {

// }
// int test(int a)
// {

// }
// int test()
// {

// }

int main()
{
    Vehicle v;

    Car c;
    v.print();
    c.print();//car's print is called as we found at compile time i.e. the function
    //we are calling is of what class.

    Vehicle *v1 = new Vehicle;
    Vehicle *v2;
    //v2 = &v;

    v2 = &c;//This is allowed
    v1->print();

    v2->print();
    return 0;
}