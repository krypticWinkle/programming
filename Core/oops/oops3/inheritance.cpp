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
        this->color = "red";
    }
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
    private:
    int numGears;

    protected:

    public:

    void print()
    {
        cout<<"NumTyres: "<<numTyres<<"\n";
        cout<<"color: "<<color<<"\n";
        cout<<"numGears: "<<numGears<<"\n";
        //cout<<"Max Speed:"; can't be inherited
    }

    /*before car's constructor is called, Vehicle's constructor is called. If we
    want a specific constructor of Vehicle to be called, we have to mention
    //like here we do*/
    /*Car():Vehicle(10)
    {
        cout<<"Car's default constructor called\n";
    }*/

    Car()
    {
        cout<<"Car's default constructor called\n";
    }

    Car(int x):Vehicle(x)//x is 50 here
    {
        cout<<"Car's constructor called\n";
    }

    ~Car()
    {
        cout<<"Car's destructor called\n";
    }
    
};

class HondaCity: public Car
{
    public:
    HondaCity(): Car(5)
    {
        cout<<"Honda City constructor\n";
        cout<<this->color;
    }

    ~HondaCity()
    {
        cout<<"Honda City destructor\n";
    }
};

int main ()
{
    HondaCity H;
    //Vehicle v;
    //Car c(50); 
    //c.print();
    //c.color = "black";


    return 0;
}

