/*Merge the computation times of different files in such a way that their final computation time is
minimum. User will input the computation time of each files individually*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>>pq;
    int size; cin>>size;
    for(int i=0; i<size; i++)
    {
        int computation_time; cin>>computation_time;
        pq.push(computation_time);
    }
    //cout<<pq.top()<<"\n";
    int final_comp_time = 0;
    while(pq.size() != 1)
    {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        final_comp_time += a + b;
        pq.push(a+b);
    }
    cout<<final_comp_time<<"\n";

    return 0;
}