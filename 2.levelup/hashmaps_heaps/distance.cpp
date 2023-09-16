#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define xx ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ump unordered_map
using namespace std;
//codeforces

int32_t main()
{
    xx;
    int tc; cin>>tc;
    while(tc--)
    {
        int x, y; cin>>x>>y;
        if((x+y) %2 == 0)
        {
            if(x%2 ==1 && y%2 == 1){cout<<(x+1)/2<<" "<<(y-1)/2<<endl;}
            
            else{cout<<(x)/2<<" "<<(y)/2<<endl;}
        }
        else
        {
            cout<<"-1 -1"<<endl;
        }
    }
    return 0;
}

/*
Hello Sir! I'm Ayush. We talked yesterday about the offer to work @DFYN.
I confirmed from college TnP cell today and they said that if I take fast
track for 8th sem, I'll have to stay in that company only, for 6 months (there is course
credit based on only that company's report submission). If someone doesn't do so,
he needs to repeat 8th sem else they won't give degree.

So now I can think of 2 ways since I was really interested in @Dfyn and
if you have something better to suggest, please do
1: I'll refuse fast track and hence cancel offer at cognizant. And if I get WFH internship
in 8th sem @Dfyn and final offer from July, I'm fine with it

2: If @Dfyn allows this - I'd like to intern there for 2 months - December and January. And 
when internship is over at Cognizant Feb-June, I'd get back @Dfyn then

Thanks and regards
*/