#include <bits/stdc++.h>
using namespace std;

int countAnalogousArrays(vector<int> &consecutiveDifference, int lowerBound, int upperBound) 
{
    int size = consecutiveDifference.size(), count = 0;
    for(int i=upperBound; i>=lowerBound; i--)
    {
        int x = i;
        for(int j=0; j<size; j++)
        {
            x = x - consecutiveDifference[j];
            if(x <= upperBound && x >= lowerBound)
            {
                //do nothing
            }
            else
            {
                break;
            }
            if(j==size-1)
            {
                count++;
            }
        }
    }
    return count;


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