#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int compliment_of2_of_n = (~n) + 1;

    bitset<32> bs1(compliment_of2_of_n & n);
    //https://en.cppreference.com/w/cpp/utility/bitset/to_string
    string s = bs1.to_string();

    int i=0;
    for(i=0; i<32; i++)
    {
        if(s[i] == '1')
        {
            cout<<s[i]; i++;
        }
    }
    while(i<32)
    {
        cout<<0; i++;
    }
    
    return 0;
}

/*EXPLANATION:
58 : 1110 1 0
1's compliment of 58: 0001 0 1
2's compliment of 58: 0001 1 0 = x (let's say)

=> rsb = (58 & x) = 000010
*/

/*
ip: 58
op: 10
*/
