#include<bits/stdc++.h>
using namespace std;


string addStrings(string num1, string num2) 
{
    if(num1.size() < num2.size())swap(num1, num2);
    vector<int>a(num1.size(), 0);vector<int>b(num2.size(), 0);
    
    for(int i=0; i<num1.size(); i++)
    {
        a[i] = num1[i] - '0';
    }
    for(int i=0; i<num2.size(); i++)
    {
        b[i] = num2[i] - '0';
    }
    int i=num1.size()-1, j = num2.size()-1;
    int carry=0; string ans="";
    
    while(j >= 0)
    {
        int x = a[i] + b[j] + carry;
        carry = x/10;
        ans = to_string(x%10) + ans;
        i--;j--;
    }
    while(i >= 0)
    {
        int x = a[i] + carry;
        carry = x/10;
        ans = to_string(x%10) + ans;
        i--;
    }
    if(carry > 0)
    {
        ans = to_string(carry) + ans;
    }
    return ans;
}

int32_t main()
{
    string s1, s2; cin>>s1>>s2;
    cout<<addStrings(s1, s2);
    return 0;
}