#include<bits/stdc++.h>
using namespace std;

int factorial(int number)
{
    if(number == 1)
    {
        return 1;
    }
    return number * factorial(number - 1);
}
int main()
{
    int number;
    cin>>number;
    int ans = factorial(number);
    cout<<ans;
    return 0;
}
