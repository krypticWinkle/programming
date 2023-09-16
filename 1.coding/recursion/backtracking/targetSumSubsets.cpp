#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define xx ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define ump unordered_map<int, int>
#define rep(i, a, b) for(int i=a; i<b; i++)

using namespace std;

// set is the subset
// sos is sum of subset
// tar is target

void printTargetSumSubsets(vi v, int idx, string set, int sos, int tar)
{
    if(idx == v.size())//if(sos == tar)
    {
        if(sos == tar)
            cout<<set<<"."<<endl;
        //else
            return;
    }
    if(sos > tar)
    {
        return;
    }
    //int sum = 0;
    //sum += v[idx];

        printTargetSumSubsets(v, idx+1, set+to_string(v[idx])+", ", sos+v[idx], tar);
        printTargetSumSubsets(v, idx+1, set, sos, tar);
}



int32_t main()
{
    int n; cin>>n;
    vi v(n, 0);
    rep(i, 0, n)
    {
        cin>>v[i];
    }
    int target; cin>>target;
    printTargetSumSubsets(v, 0, "", 0, target);
    return 0;
}