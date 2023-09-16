#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define xx ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define ump unordered_map<int, int>
#define rep(i, a, b) for(int i=a; i<b; i++)
using namespace std;

bool cmp(string a, string b)//what if lengths are equal
{
    return a.length() < b.length();
}

int32_t main()
{
    xx;
    int tc; cin>>tc;
    while(tc--)
    {
        int no_chapters; cin>>no_chapters;
        vector<string> chapters(no_chapters, ""); 
        vector<string> chapters2;
        int ans=0, i=0;
        while(no_chapters--)
        {
            cin>>chapters[i];
            i++;
        }
        i=0;
        sort(chapters.begin(), chapters.end(), cmp);
        chapters2 = chapters;
        vector<string>v;
        // while(chapters[i].size() == 1)
        // {
        //     ans++; 
        //     v.push_back(chapters[i]); 
        //     i++;
        // }
        while(i<chapters.size())
        {
            int len_substr=0; int count=0;
            for(int it=v.size()-1; it>=0;it--)
            {
                int S=chapters[i].size(), T=v[it].size(); int t_count=0;//temp count
                for(int j=0; j<S-T+1; j++)
                {
                    if(chapters[i].substr(j, T) == v[it] && count<2)
                    {
                        count++;t_count++;
                        chapters[i].erase(j, v[it].length());
                        S -= v[it].size();
                        j--;//j+=v[it].size()-1;//j=-1;
                    }
                }
                len_substr += t_count * v[it].size();
                //count = 0;//i++; 
            }
            ans += chapters2[i].size()-len_substr;//it++;
            v.push_back(chapters2[i]);
            i++;
        }
        cout<<ans<<endl;

    }
    return 0;






}