#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0; cin>>n;
    while(n>0)
    {
        int rsbm = (n & (-n));
        n = n-rsbm;
        count++;
    }
    cout<<count;
    return 0;
}

/*
ip:58 //111010 (total 4 ones are there)
op: 4*/





/*
leetcode 191
int hammingWeight(uint32_t n) {
        
        int res = 0;
        
        while(n)
        {
            if(n & 1)
                res++;
            
            n>>=1;
        }
        
        return res;
    }

*/