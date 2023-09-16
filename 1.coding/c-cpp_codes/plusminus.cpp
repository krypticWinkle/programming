#include<bits/stdc++.h>
using namespace std;
int main()
{
    float t,x; float p=0.000000,n=0.000000,z=0.000000;
    cin>>t;
    for(float i=0;i<t;i++)
    {
        //float a,b,c;
        cin>>x;
        if(x>0)
            p++;
        else if(x==0)
            z++;
        else
            n++;
    }
    cout<<fixed<<setprecision(6)<<(p/t)<<"\n"<<fixed<<setprecision(6)<<(n/t)<<"\n"<<fixed<<setprecision(6)<<(z/t)<<"\n";
    return 0;
}