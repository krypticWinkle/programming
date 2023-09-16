#include<bits/stdc++.h>
using namespace std;
    int main()
    {
        int x,y;
        string s2 = "";
        cin>>x;
        if(x>=0)
        {

        }
        else
        {
            y=x;
            x = x*(-1);
        }
        std::string s = std::to_string(x);
        for(int i=s.size()-1;i>=0;i--)
        {
            s2 = s2 + s[i];
        }
        std::long x = std::to_long(s2);
        if(y<0)
            x = x*(-1);
        else{   }
        cout<<x<<"\n";

        return 0;
    }
    

//1534236469