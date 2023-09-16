#include<bits/stdc++.h>
using namespace std;

void decreasing_seq(int number, int x)
{
    cout<<number<<" ";
    if(number > x)
    {
        decreasing_seq(number - 1, x);
    }
}
int main ()
{
    int n, x, output;
    cin>>n;
    x = n * -1;
    decreasing_seq(n, x);

    return 0;
}