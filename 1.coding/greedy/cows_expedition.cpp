#include<bits/stdc++.h>
using namespace std;

bool compare(vector<int>a, vector<int>b)
{
    return a[0] < b[0];
}

int main()
{
    priority_queue<int, vector<int>>pq;
    vector<vector<int>> details;
    int total_stops, initial_fuel, dist_of_truck_frm_town;
    cin>>total_stops;

    for(int i=0; i<total_stops; i++)
    {
        int dist_frm_town, fuel;
        cin>>dist_frm_town>>fuel;
        details.push_back({dist_frm_town, fuel});
    }

    cin>>dist_of_truck_frm_town>>initial_fuel;
    int curr_fuel = initial_fuel;
    for(int i=0; i<total_stops; i++)
    {
        details[i][0] = dist_of_truck_frm_town - details[i][0];
    }
    sort(details.begin(), details.end(), compare);

    bool flag = 0; int ans = 0;
    for(int i=0; i<total_stops; i++)
    {
        if(dist_of_truck_frm_town >= initial_fuel)
            break;

        while(curr_fuel < details[i][0])
        {
            if(pq.empty())
            {
                flag = 1;
                break;
            }
            ans++;
            curr_fuel = curr_fuel + pq.top();
            pq.pop();
            
        }
        if(flag)
            break;
        pq.push(details[i][1]);
    }

    if(flag)
    {
        cout<<"-1"<<"\n";
    }
    while(!pq.empty() && curr_fuel < initial_fuel)
    {
        curr_fuel+=pq.top();
        pq.pop();
        ans++;
    }
    if(curr_fuel < initial_fuel)
    {
        cout<<"-1\n";
    }
    cout<<ans<<"\n";

    return 0;
}

/*
4
4 4
5 2
11 5
15 10
25 10

ans: 2*/