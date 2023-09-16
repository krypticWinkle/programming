#include<bits/stdc++.h>

using namespace std;

int maxSubjectsNumber(vector<int>answered, vector<int>needed, int q)
{
    vector<int> toPass(answered.size(), 0);
    int ans = 0;
    for(int i=0; i<answered.size(); i++)
    {
        if(needed[i]>=answered[i])
        {
            toPass[i] = needed[i]-answered[i];
        }
    }
    sort(toPass.begin(), toPass.end());
    int i=0;
    while(q > 0 && i < answered.size())
    {
        if(toPass[i] >= 0)
        {
            q -= toPass[i];
            ans++;
        }
        i++;
    }
    if(q < 0)
        return ans-1;
    
    return ans;

}

int main()
{
    int size; cin>>size;
    vector<int>answered; vector<int>needed;
    for(int i=0; i<size; i++)
    {
        int x; cin>>x;
        answered.push_back(x);

    }
    for(int i=0; i<size; i++)
    {
        int x; cin>>x;
        needed.push_back(x);

    }

    int q; cin>>q;

    cout<<maxSubjectsNumber(answered, needed, q);

}