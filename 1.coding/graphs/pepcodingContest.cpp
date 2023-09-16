#include<bits/stdc++.h>
using namespace std;

//Asked in 1st contest launched by pepcoding

int main()
{
    //p_hr -> pre set hour, d_hr -> desired hour
    int p_hr, p_mns, d_hr, d_min;
    cin>>p_hr>>p_mns>>d_hr>>d_min;

    int h1, h2, m1, m2;

    h1 = abs(p_hr - d_hr);
    if(p_hr > d_hr)
    {
        swap(p_hr, d_hr);
    }
    h2 = p_hr + (24 - d_hr);


    m1 = abs(p_mns - d_min);
    if(p_mns > d_min)
    {
        swap(p_mns, d_min);
    }
    m2 = p_mns + (60 - d_min);

    cout<<min(h1, h2)<<" "<<min(m1, m2);

    return 0;
}