#include<bits/stdc++.h>
using namespace std;

void addInRange(int *a, int size, int L, int R)
{
    a[L] += 1;
    a[R+1] += -1;
}

int main()
{
    int size; cin>>size;
    int a[size] = {0};

    int query; cin>>query;
    for(int i=0; i<query; i++)
    {
        int L, R; cin>>L>>R;
        addInRange(a, size, L, R);
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
3 (queries)
2 4 (left and right)
1 2 (left and right)
3 4 (left and right)
op: 0 1 2 2 2
*/