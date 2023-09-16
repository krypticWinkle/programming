/*Write a C++ program to create a class ZooAnimal and define its constructor function.
The function has 4 parameters, namely a character string followed by three integer
parameters. In the constructor function dynamically allocate the name field (20
characters), copy the character string parameter into the name field, and then assign the
three integer parameters to cageNumber, weightDate, and weight respectively.*/

#include<bits/stdc++.h>
using namespace std;
class ZooAnimal
{
    private:
    int Cage_Number, Weight_Date, Weight;
    char* Name;
    public:
    ZooAnimal(char* nm, int cn, int wd, int w)
    {
        Name = (char*)calloc(20, sizeof(char));
        for(int i = 0; i < 20; i++)
        {
            *(Name + i) = nm[i];
        }
        Cage_Number = cn;
        Weight_Date = wd;
        Weight = w;
    }
    void display();
};

void ZooAnimal :: display ()
{
    cout<<Name<<"\n"<<Cage_Number<<"\n"<<Weight_Date<<"\n"<<Weight<<"\n";
}

int main ()
{
    char nm[10] = "CAMEL";
    int cageN = 10, weightD = 26012021, wt = 80;
    class ZooAnimal z1(nm,cageN,weightD,wt);
    z1.display();
    return 0;
}