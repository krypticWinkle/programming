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

    Vehicle()
    {
        cout<<"Vehicle's default constructor\n";
    }
    Vehicle(int z)
    {
        cout<<"Vehicle's Parametrized constructor called "<<z<<"\n";
        this->maxSpeed = z;
        this->color = "red";
    }

    void print()
    {
        cout<<"Vehicle\n";
    }

    ~Vehicle()
    {
        cout<<"Vehicle's destructor called\n";
    }

};

class Car: virtual public Vehicle
{
    public:
    int numGears;

    Car()
    {
        cout<<"Car's default constructor called\n";
    }

    /*Car(int x):Vehicle(x)//x is 50 here
    {
        cout<<"Car's constructor called\n";
    }*/
    // void print()
    // {
    //     cout<<"NumTyres: "<<numTyres<<"\n";
    //     //cout<<"color: "<<color<<"\n";
    //     cout<<"numGears: "<<numGears<<"\n";
    // }

    ~Car()
    {
        cout<<"Car's destructor called\n";
    }
    
};

class Truck: virtual public Vehicle
{
    public:
    Truck()
    {
        cout<<"Truck's constructor\n";
    }

    void print()
    {
        cout<<"truck\n";
    }
};

class Bus: public Car, public Truck
{
    public:
    Bus(): Vehicle(5)
    {
        cout<<"Bus's constructor\n";
    }
    // void print()
    // {
    //     cout<<"Bus\n";
    // }

};

int main()
{
    Bus b;//order of constr: Vehicle -> car -> Vehicle -> Truck -> Bus

    //it's there in multiple base classes (i.e car and truck both (because they both are derived from public))
    //b.print(); //so, add print in bus or use scope resolution operator.

    //b.Car::print();


    return 0;
}