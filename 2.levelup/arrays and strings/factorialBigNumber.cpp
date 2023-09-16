#include<bits/stdc++.h>
using namespace std;

vector<int> bigFactorial(int n)
{
    vector<int> ans;
    ans.push_back(1);
    int carry = 0;
    int it = 2;
    while(it <= n)
    {
        for(int i = ans.size()-1; i>=0; i--)
        {
            int temp = ans[i]*it + carry;
            ans[i] = temp%10;
            carry = temp / 10;
        }
        while(carry != 0)
        {
            int x = carry%10;
            ans.insert(ans.begin(), x);
            carry /= 10;
        }
        it++;
    }
    return ans;
}
//Time Cmplxty: O(n * ans.size()); Space Complexity: O(ans.size())
int main()
{
    int number; cin>>number;
    vector<int> ans = bigFactorial(number);
    for(auto it: ans)
        cout<<it;
    return 0;
}