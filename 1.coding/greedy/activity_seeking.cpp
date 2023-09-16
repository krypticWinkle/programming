#include<bits/stdc++.h>
using namespace std;

bool sort_end_time(vector<int>a, vector<int>b)
{
    return a[1] < b[1];
}

int main()
{
    vector<vector<int>>tasks;       //This is different from: vector<int>tasks[2];     
    int no_of_tasks; cin>>no_of_tasks;
    for(int i=0; i< no_of_tasks; i++)
    {
        int start, end;
        cin>>start>>end;
        tasks.push_back({start, end});
    }

    //sorting the tasks a/c to finish time in ascending order
    sort(tasks.begin(), tasks.end(), sort_end_time);
/*
        sort(points.begin(), points.end(),[&](vector<int>&a,vector<int>&b)
        {
            return a[1] < b[1];
        });*/
    //Now choose the jobs
    int no_of_jobs_taken = 1, last_finish_time = tasks[0][1];
    for(int i=1; i<no_of_tasks; i++)
    {
        //cout<<tasks[i][0];
        if( tasks[i][0] >= last_finish_time)
        {
            no_of_jobs_taken++;
            last_finish_time = tasks[i][1];
        }
    }

    cout<<no_of_jobs_taken<<"\n";
    return 0;
}