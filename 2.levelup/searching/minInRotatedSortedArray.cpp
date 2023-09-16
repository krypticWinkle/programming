#include<bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/ H

int findMin(vector<int>& v) 
{
    int l=0, h=v.size()-1, mini = INT_MAX;;
    while(l<=h)
    {
        int mid = (l+h)/2;

        if(v[mid]>=v[l])
        {
            mini = min(mini, v[l]);
            l = mid+1;
        }
        else if(v[mid]<=v[h])
        {
            mini = min(mini, v[mid]);
            h = mid-1;
        }
    }
    return mini;

}

int main()
{
    int size; cin>>size;
    vector<int>v(size, 0);

    cout<<findMin(v)<<"\n";
    return 0;
}