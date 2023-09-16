#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>data_store;
    int x, maximum;
    for(int i=0; i<18;i++)
    {
        cin>>x;
        data_store.push_back(x);
    }
    maximum = data_store.at(0);
    for(int i=0; i<data_store.size();i++)
    {
        if(data_store.at(i) > maximum)
        {
            maximum = data_store.at(i);
        }
    }
    cout<<data_store.size()<<" "<<maximum;
    return 0;
}