//https://dmoj.ca/problem/coci13c1p4
#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int, int>a, pair<int, int>b)
{
    if(a.second==b.second)
    {
       return a.first < b.first;
    }
    return a.second > b.second;//consider when both have same value and different weight
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int totalJewel, totalBags;
    cin>>totalJewel>>totalBags;
    pair<int, int> jewellary[totalJewel];

    for(int i=0; i<totalJewel; i++)
    {
        //int mass, val;
        cin>>jewellary[i].first>>jewellary[i].second;
        //jewellary.push_back({mass, val});
    }

    sort(jewellary, jewellary+totalJewel, compare);

    multiset<int> bag_weights;
    for(int i=0; i<totalBags; i++)
    {
        int x;
        cin>>x;
        bag_weights.insert(x);
    }

    long total_value = 0;

    for(int i=0; i<totalJewel; i++)
    {
        if(bag_weights.empty() == true)
            break;
        else if(bag_weights.lower_bound(jewellary[i].first)!=bag_weights.end())
        {
            total_value += jewellary[i].second;
            bag_weights.erase(bag_weights.lower_bound(jewellary[i].first));
        }
    }
    cout<<total_value<<"\n";
    return 0;
}