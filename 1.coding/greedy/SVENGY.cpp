#include<bits/stdc++.h>
using namespace std;

//https://www.codechef.com/problems/SVENGY
int main()
{
    long long int noOfTowns;
    cin>>noOfTowns;
    long long int energyCost[noOfTowns];

    for(long long int i=0; i<noOfTowns; i++)
    {
        cin>>energyCost[i];
    }
    long long int finalCost = 0;

    //for(long long int i=0; i<noOfTowns-1; i = index)
    //{
    long long int i=0;
    for(long long int j=i+1; j<noOfTowns; j++)
    {
        long long int cost = 0;
        if(j==noOfTowns-1)
        {
            cost = (j-i)* energyCost[i] + (j*j - i*i) * energyCost[i] * energyCost[i];
            finalCost += cost;
            i = j;
            break;
        }
        if(energyCost[j]*energyCost[j] < energyCost[i]*energyCost[i])
        {
            cost = (j-i)* energyCost[i] + (j*j - i*i) * energyCost[i] * energyCost[i];
            finalCost += cost;
            i = j;
        }
        else if(energyCost[j]*energyCost[j] == energyCost[i]*energyCost[i])
        {
            if(energyCost[j] < energyCost[i])
            {
                cost = (j-i)* energyCost[i] + (j*j - i*i) * energyCost[i] * energyCost[i];
                finalCost += cost;
                i = j;
            }
        }
    }

    //}
    cout<<finalCost<<"\n";
    return 0;
}
/*Inp 1
4
2 2 3 4

Inp 2
5
1 -1 2 2 2*/