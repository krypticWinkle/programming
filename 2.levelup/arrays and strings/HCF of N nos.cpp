#include<bits/stdc++.h>
using namespace std;

int calculateHCF(int a, int b)
{
    if(a==0)
        return b;
    if(a > b)
        swap(a, b);

    return calculateHCF(a, b-a);
}

int main()
{
    int size; cin>>size;
    vector<int>v(size, 0);
    
    for(int i=0; i<size; i++)
    {
        int x; cin>>x;
        v[i] = x;
    }
    int x = calculateHCF(0, v[0]);
    for(int i=1; i<size; i++)
    {
        x = calculateHCF(x, v[i]);
    }
    cout<<x;
    return 0;
}