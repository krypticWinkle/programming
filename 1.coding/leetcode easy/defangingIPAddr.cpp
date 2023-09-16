#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define vi vector<int>
#define xx ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ump unordered_map<int, int>
#define rep(i, a, b) for(int i=a; i<b; i++)

using namespace std;

//https://leetcode.com/problems/verify-preorder-serialization-of-a-binary-tree/ (M)
//https://leetcode.com/problems/custom-sort-string/ (M)
//https://leetcode.com/problems/smallest-string-starting-from-leaf/ (M)


//LC 1108
string defangIPaddr(string address)
{
    int i = address.size()-1;
    //string ans = "";
    while(i >= 0)
    {
        if(address[i] == '.')
        {
            string s1 = address.substr(0, i);
            string s2 = address.substr(i+1);
            address = s1 + "[.]" + s2;
        }
        i--;
    }
    return address;
}

int32_t main()
{
    string address; cin>>address;
    cout<<defangIPaddr(address)<<endl;
    return 0;
}

/*
Input: address = 255.100.50.0
Output: 255[.]100[.]50[.]0
*/


/*
class Solution {
public:
    int rob(vector<int>& nums) {
	    const int n = (int)nums.size();
        
        if(n == 1)
           return nums[0];
        if(n == 2)
           return max(nums[0], nums[1]);
        
       
        int a1 = nums[0], b1 = max(nums[0], nums[1]);
        int a2 = nums[1], b2 = max(nums[1], nums[2]);
        
        for(int i=2;i<n-1;i++){
            a1 = max(a1+nums[i], b1);
            swap(a1, b1);
            
            a2 = max(a2+nums[i+1], b2);
            swap(a2, b2);
        }
        
        return max(b1, b2);
    }
};
*/