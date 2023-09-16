//There is an awesome EULER ANALYSIS behind this question!!
//Most important to understand to understand recursion

#include<bits/stdc++.h>
using namespace std;


void printZigZag(int n)
{
    
    if(n==0)
    {
        return;
    }
    cout<<n<<" ";
    printZigZag(n-1);
    cout<<n<<" ";
    printZigZag(n-1);
    cout<<n<<" ";

}


int main()
{
    int n;
    cin>>n;
    printZigZag(n);
}
