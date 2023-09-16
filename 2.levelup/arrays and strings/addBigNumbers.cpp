#include<bits/stdc++.h>
using namespace std;

vector<int> add(vector<int>x, vector<int>y)
{
    vector<int>ans; int i;
    //adding last digit and storing in ans. Not in loop b/c 1st we're PUSHING then INSERTING each time
    int tmp = x[x.size()-1] + y[y.size()-1];
    ans.push_back(tmp % 10);
    int carry = tmp/10;

    for(i=1; i<x.size(); i++)
    {
        int tmp = x[x.size()-1-i] + y[y.size()-1 -i] + carry;
        ans.insert(ans.begin(), tmp % 10);
        carry = tmp/10;
    }
    while(carry != 0 || i!=y.size())//assuming that either b was bigger in size or both were equal
    {
        if(i < y.size())
        {
            int tmp = y[y.size()-1-i] + carry;
            ans.insert(ans.begin(), tmp%10);
            carry = tmp / 10;
            i++;
        }
        else//this will fail if carry is huge and beyond long long.
        {
            ans.insert(ans.begin(), carry);
            carry=0;
        }
    }
    return ans;
}

int main()
{
    string a, b;
    cin>>a>>b;
    vector<int>x, y;
    for(int i=0; i<a.size(); i++)
    {
        x.push_back(a[i] - '0');
    }
    for(int i=0; i<b.size(); i++)
    {
        y.push_back(b[i] - '0');
    }
    vector<int> ans = add(x, y);
    for(auto it: ans)
        cout<<it;
    return 0;
}