#include<bits/stdc++.h>
using namespace std;

int powerOf2(int n)
{
    if(n == 0 || n==1)
        return 0;
    int count = 0, x = 1;
    while(x <= n)
    {
        x *= 2;
        count++;
    }
    //return count-1;
    return x/2;
}

int main()
{
    int n; cin>>n;
    int pow2 = powerOf2(n);
    int l = n-pow2;
    cout<< 2*l + 1;
        
    return 0;
}