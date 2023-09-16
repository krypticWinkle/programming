#include<bits/stdc++.h>
using namespace std;

int fibonacci(int num)
{
    if(num == 0 || num == 1)
    {
        return num;
    }
    int ans = fibonacci(num-1) + fibonacci(num-2);
    return ans;
}

int main()
{
    int num; cin>>num;

    cout<<fibonacci(num);
    return 0;
}