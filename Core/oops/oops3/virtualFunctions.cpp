#include<bits/stdc++.h>
using namespace std;

class Vehicle
{
    public:
    string color;

    //pure virtual function
    virtual void print() = 0;
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


int main()
{
    //Vehicle v; abstract class ka object nahi bana sakte 

    Car c;//can declare if print function is completed inside car class
    /*v.print();
    c.print();

    Vehicle *v1 = new Vehicle;
    Vehicle *v2;
    //v2 = &v;

    v2 = &c;//This is allowed
    v1->print();

    v2->print();*/
    return 0;
}