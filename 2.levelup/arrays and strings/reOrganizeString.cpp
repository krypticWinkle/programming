#include<bits/stdc++.h>
using namespace std;

//leetcode

string reorganizeString(string s) 
{
    map<char, int>hm;
    for(int i=0; i<s.size(); i++)
    {
        hm[s[i]]++;
    }
    priority_queue<pair<int, char>>pq;
    for(auto it: hm)
    {
        pair<int, char>pr;
        pr.first = it.second;
        pr.second = it.first;
        pq.push(pr);
    }
    //char c = '0';
    string ans; int i=0;
    ans.append(s.size(), '0');
    
    while(pq.size() != 0)
        {
            pair<int, char> popped = pq.top();
            pq.pop();
            while(popped.first != 0)
            {
                popped.first = popped.first-1;
                ans[i] = popped.second;
                if(i > 0 && ans[i] == ans[i-1])
                {
                    ans = "";
                    return ans;
                }
                if(i == s.size() - 2)
                {
                    i =( i+3)%s.size();
                }
                else
                {
                    i = (i+2)%s.size();
                }
            }
            
        }
    return ans;
}

int main()
{
    string str; cin>>str;
    cout<<reorganizeString(str);
    return 0;
}
