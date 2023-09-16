#include<bits/stdc++.h>
using namespace std;

int factorial(int len)
{
    int result = 1;
    for(int i=1; i<=len; i++)
    {
        result *= i;
    }
    return result;
}

void allPermutationOfaString(string str)
{
    string dup = str;//dup ->duplicate
    int len = str.size();
    int fact = factorial(len);

    for(int i=0; i<fact; i++)
    {
        int quo = i;
        for(int j=len; j>0; j--)
        {
            int rem = quo % j;
            quo = quo / j;
            cout<<dup[rem];
            dup.erase(dup.begin() + rem);
        }
        cout<<"\n";
        dup = str;
    }
}

int main()
{
    string str; cin>>str;
    allPermutationOfaString(str);
    return 0;
}

/*
i/p: abc
o/p: 
abc
bac
cab
acb
bca
cba
*/