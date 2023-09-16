#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n[15] = {9, 6, 3, 5, 3, 4, 3, 9, 6, 4, 6, 5, 8, 9, 9};
    int min = 3, max = 9;
    int range = max - min + 1;
    int index;

    int freq_array[7] = {0, 0, 0, 0 , 0, 0, 0};
    for(int i=0; i<15; i++)
    {
        index = n[i] - min;
        freq_array[index] += 1;
    }
    for(int i=1; i<7; i++)//prefix sum array
    {
        freq_array[i] = freq_array[i] + freq_array[i-1];
    }

    int ans[15];
    for(int i=14; i>-1;i--)
    {
        int val = n[i];
        ans[freq_array[val - min] - 1] = val;
        freq_array[val - min]--;
    }
    for(int i=0; i<15; i++)
        cout<<ans[i]<<" ";
        
    return 0;
}

