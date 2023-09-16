#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b)
{
    return a.first>b.first;
}
//Source: Apna College: 8.4. 14:09 min
void longestArithmetic(int *a, int size)
{
    vector<pair<int, int>>countVector;
    int count = 2, idx = 0;
    int diff = a[1]-a[0];
    for(int i=2; i<size; i++)
    {
        if(a[i]-a[i-1] == diff)
        {
            count++;
        }
        else
        {
            diff = a[i]-a[i-1];
            countVector.push_back({count, idx});
            idx = i-1;
            count = 2;
        }
    }
    countVector.push_back({count, idx});
    sort(countVector.begin(), countVector.end(), comp);
    //int k = countVector.size();

    for(int i=countVector[0].second; i< countVector[0].first + idx; i++)
    {
        cout<<a[i]<<" ";
    }

}

int main()
{
    int size; cin>>size;
    int a[size];
    for(int i=0; i<size; i++)
    {
        cin>>a[i];
    }
    longestArithmetic(a, size);
    
    return 0;
}