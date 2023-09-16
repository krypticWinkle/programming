#include<bits/stdc++.h>
using namespace std;

void addInRange(int *a, int size, int L, int R, int val)
{
    a[L] += val;
    a[R+1] += -val;
}

int main()
{
    int size; cin>>size;
    int a[size] = {0};

    int query; cin>>query;
    for(int i=0; i<query; i++)
    {
        int L, R, val; cin>>L>>R>>val;
        addInRange(a, size, L, R, val);
    }
    for(int i=1; i<size; i++)
    {
        a[i] += a[i-1];
        cout<<a[i-1]<<" ";
    }
    cout<<a[size-1];
    return 0;
}
/*
ip: 
5

1  3  2
2  4  3
0  2 -2

op: -2 0 3 5 3
*/