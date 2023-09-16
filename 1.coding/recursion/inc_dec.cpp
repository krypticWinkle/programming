#include<bits/stdc++.h>
using namespace std;

void print(int num)
{
    if(num==0)
    {
        //cout<<num<<" ";
        return;
    }
    cout<<num<<" ";
    print(num-1);
    cout<<num<<" ";

}
int main()
{
    int n;
    cin>>n;
    print(n);
    return 0;
}