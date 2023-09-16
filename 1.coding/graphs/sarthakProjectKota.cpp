#include<bits/stdc++.h>
using namespace std;

class Driver
{
    public:
    string nameOfDriver, vehicleName, cabDriverType; 
    int numPlate, pricePerKM, mobileNo;

    Driver(string nameOfDriver, string vehicleName, string cabDriverType, int numPlate, int pricePerKM, int mobileNo)
    {
        this->nameOfDriver = nameOfDriver;
        this->vehicleName = vehicleName;
        this->cabDriverType = cabDriverType;

        this->numPlate = numPlate;
        this->pricePerKM = pricePerKM;
        this->mobileNo = mobileNo;
    }
};



int driverDetails (int numOfDrivers)
{
    /*this is a node. int is key(0-11). In each node, you can keep 2-3 (or more)
    number of drivers where each driver is a class (properties defined there)*/
    unordered_map<int, vector<Driver>>Nodes[numOfDrivers];
    
    /*here we are taking the input for each driver's personal detail. We're
    keeping that in graph of map*/
    for(int i=0; i<numOfDrivers; i++)
    {
        string nameOfDriver, vehicleName, cabDriverType;
        cin>>nameOfDriver>>vehicleName>>cabDriverType;

        int numPlate, pricePerKM, mobileNo;
        cin>>numPlate>>pricePerKM>>mobileNo;

        Driver drivers(nameOfDriver, vehicleName, cabDriverType, numPlate, pricePerKM, mobileNo);

        vector<Driver>temp;
        temp.push_back(drivers);

        Nodes[i][i] = temp;
        
    }
    /*Since there are 3 such graphs, we'll call this function 3 times*/
}

