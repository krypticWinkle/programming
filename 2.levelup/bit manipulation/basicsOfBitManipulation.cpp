#include<bits/stdc++.h>
using namespace std;
/*
1. You are given a number n.
2. Print the number produced on setting-on its i-th bit.
3. Print the number produced on unsetting-off its j-th bit.
4. Print the number produced on toggling its k-th bit.
5. Also, Check if its m-th bit is on or off. Print 'true' if it is on, otherwise print 'false'.*/

int main()
{
    int n, i, j, k, m;
    cin>>n>>i>>j>>k>>m;

    int onmask  = 1<<i;
    int offmask  = ~(1<<j);
    int toggle  = (1<<k);
    int check  = (1<<m);

    cout<<(n | onmask)<<"\n"<<(n & offmask)<<"\n"<<(n ^ toggle)<<"\n";
    if((n & check) == 0)
    {
        cout<<"false";
    }
    else
    {
        cout<<"true";
    }
    return 0;
}

/*
ip:
57
3 
3 
3 
3

op:
57
49
49
true*/