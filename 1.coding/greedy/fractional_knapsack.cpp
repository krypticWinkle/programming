#include<bits/stdc++.h>
using namespace std;

bool compare(vector<int>a, vector<int>b)
{
    return (a[0] / a[1]) > (b[0] / b[1]);
    //you can name a[0] / a[1]) and b[0] / b[1] as p1 and p2 and then return like: return p1>p2
}

int main()
{
    int size; cin>>size;
    vector<vector<int>>substance;
    for(int i=0; i<size; i++)
    {
        int val, wt;
        cin>>val>>wt;
        substance.push_back({val, wt});
    }
    int sack_capacity; cin>>sack_capacity;//in kg

    sort(substance.begin(), substance.end(), compare);

    int gain = 0;
    for(int i=0; i<size; i++)
    {
        if(sack_capacity > 0 && substance[i][1] <= sack_capacity)
        {
            sack_capacity -= substance[i][1];
            gain += substance[i][1] * (substance[i][0] / substance[i][1]);
        }
        else if(sack_capacity > 0 && substance[i][1] > sack_capacity)
        {
            gain += sack_capacity * (substance[i][0] / substance[i][1]);
            sack_capacity = 0;
            break;
        }
    }
    cout<<gain<<"\n";
    return 0;
}
/*INPUT:
3
60 10
100 20
120 30
50*/

/* Printing the vector:
for(int i=0; i<size; i++)
{
    for(int j=0; j<substance[i].size(); j++)
    {
        cout<<substance[i][j]<<" ";
    }
    cout<<"\n";
}*/