//This programme will give the maximum and minimum of an array that a user provides
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int size; cin>>size;
    vector<int>set_of_nums;
    for(int i=0; i< size; i++)
    {
        int x; cin>>x;
        set_of_nums.push_back(x);
    }
    sort(set_of_nums.begin(), set_of_nums.end());
    int max = 0; int min = 0;

    for(int i=0; i<size/2; i++)
    {
        max += set_of_nums[i+size/2] - set_of_nums[i];
        min += set_of_nums[2*i] - set_of_nums[2*i+1];
    }

    cout<<max<<" "<<abs(min);
    return 0;
}
/*
i/p:
10
1 2 3 4 5 6 7 8 9 10
o/p:
25 -5*/