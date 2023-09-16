#include <bits/stdc++.h>
using namespace std;

int countAnalogousArrays(vector<int> consecutiveDifference, int lowerBound, int upperBound) 
{
    int size = consecutiveDifference.size(), maxi = 0, mini = 0;
    int arr[size+1] = {0};
    for(int i=1; i<size+1; i++)
    {
        arr[i] = arr[i-1] - consecutiveDifference[i-1];
    }
    for(int i=0; i<size+1; i++)
    {
        if(maxi < arr[i])
        {
            maxi = arr[i];
        }
        if(mini > arr[i])
        {
            mini = arr[i];
        }
    }
    int ourRange = maxi - mini, givenRange = upperBound - lowerBound;
    if(ourRange > givenRange)
    {
        return 0;
    }

    return givenRange - ourRange + 1;
     
}
int main()
{
    int size, lowerBound, upperBound; cin>>size;
    vector<int>consecutiveDifference;
    for(int i=0; i<size; i++)
    {
        int x; cin>>x;
        consecutiveDifference.push_back(x);
    }
    cin>>lowerBound>>upperBound;

    cout<<countAnalogousArrays(consecutiveDifference, lowerBound, upperBound)<<"\n";
    
    return 0;
}