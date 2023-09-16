#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n, x;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    int freq_arr[100] = {0};
    for(int i=0; i<n; i++)
    {
        freq_arr[arr[i]]++;
    }
    for(int i=1; i<100; i++)
    {
        freq_arr[i] = freq_arr[i] + freq_arr[i-1];
    }
    // for(int i=0; i<n;i++)
    // {
    //     cout<<freq_arr[i]<<" ";
    // }
    int *ans;
    ans = (int*)calloc(n, sizeof(int));
    for(int i=n-1; i>-1; i--)
    {
        int val = arr[i];
        *(ans + freq_arr[val] - 1) = val;
        freq_arr[val]--;
    }
    for(int i=0; i<n;i++)
    {
        cout<<*(ans + i)<<" ";
    }
    return 0;
}





//mine 0 1 1 3 3 6 8 9 9 10 12 13 16 16 18 20 21 21 22 23 24 25 25 25 27 27 30 30 32 32 32 33 33 33 34 39 39 40 40 41 42 43 44 44 46 46 48 50 53 56 56 57 59 60 61 63 65 67 67 68 69 69 69 70 70 73 73 74 75 75 76 78 78 79 79 80 81 81 82 83 83 84 85 86 86 87 87 89 89 89 90 90 91 92 94 95 96 98 98 99
//ans    1 1 3 3 6 8 9 9 10 12 13 16 16 18 20 21 21 22 23 24 25 25 25 27 27 30 30 32 32 32 33 33 33 34 39 39 40 40 41 42 43 44 44 46 46 48 50 53 56 56 57 59 60 61 63 65 67 67 68 69 69 69 70 70 73 73 74 75 75 76 78 78 79 79 80 81 81 82 83 83 84 85 86 86 87 87 89 89 89 90 90 91 92 94 95 96 98 98 99 99