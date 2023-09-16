#include<iostream>
using namespace std;

class Vehicle
{
    private:
    int maxSpeed;

    protected:
    int numTyres;

    public:
    string color;

    // Vehicle()
    // {
    //     cout<<"Vehicle's default constructor\n";
    //     this->color = "red";
    // }
    Vehicle(int z)
    {
        cout<<"Vehicle's Parametrized constructor called\n";
        this->maxSpeed = z;
        this->color = "red";
    }

    ~Vehicle()
    {
        cout<<"Vehicle's destructor called\n";
    }

};


class Car: public Vehicle
{
    public:
    int numGears;
    void print()
    {
        cout<<"NumTyres: "<<numTyres<<"\n";
        cout<<"color:"<<color<<"\n";
        cout<<"numGears: "<<numGears<<"\n";

    }

    Car(int x, int y):Vehicle(x)//x is 50 here
    {
        cout<<"Car's constructor called\n";
        numGears = y;
    }

    ~Car()
    {
        cout<<"Car's destructor called\n";
    }
    
};

class Truck: public Vehicle //
{};

int main ()
{

    return 0;
}