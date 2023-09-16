#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    for(int i=2; i<= sqrt(num); i++)
    {
        if(num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main ()
{
    int testcase; cin>>testcase;
    for(int i=0; i<testcase; i++)
    {
        int number; cin>>number;
        cout<<isPrime(number)<<" ";
    }
    return 0;
}