#include<bits/stdc++.h>
using namespace std;

class Bus
{
    public:
    void print();
};

void test();

class Truck
{
    private:
    int x;

    protected:
    int y;

    public:
    int z;

    friend class Bus;// i.e all members of Bus class are friend of Truck.
    //Bus cas access all its properties.
/*
    friend void Bus:: print();//i.e. print() of bus is the friend of truck
    so, it can access its private and protected properties
*/
    friend void test();

};

void test()
{
    Truck t;
    t.x = 10;
    t.y = 20;
    cout<<t.x<<" "<<t.y<<"\n";
}

void Bus:: print()
{
    Truck t;
    t.x = 10;
    t.y = 20;
    cout<<t.x<<" "<<t.y<<"\n";
}


int main()
{
    Bus b;
    b.print();

    test();
    return 0;
}