#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define rep(i,a,b) for(int i=a; i<b; i++)
#define vi vector<int>
using namespace std;

int binarySearch(vi v, int target, int l, int h)
{
    int mid = (l+h)/2;
    if(target==v[mid])
        return mid;
    else if(l==h)
        return -1;
    else if(target < v[mid])
        return binarySearch(v, target, l, mid);
    else
        return binarySearch(v, target, mid+1, h);
    return -1;
}

int binSearch(vi v, int target)
{
    int l=0, h=v.size();
    while(l <= h)
    {
        int mid = (l+h)/2;
        if(target == v[mid])
        {
            return mid;
        }
        else if(target < v[mid])
        {
            h = mid-1;
        }
        else if(target > v[mid])
        {
            l = mid+1;
        }
    }
    return -1;
}

int32_t main()
{
    int size; cin>>size;
    vi v(size, 0);

    rep(i,0,size)
    {
        cin>>v[i];
    }
    int target; cin>>target;
    //cout<<binarySearch(v, target, 0, v.size())<<endl;
    cout<<binSearch(v, target)<<endl;
    return 0;
}
