//https://dmoj.ca/problem/coci13c1p4
#include<bits/stdc++.h>
using namespace std;

bool compare(vector<long long int>a, vector<long long int>b)
{
    // if(a[1]==b[1])
    // {
    //     return a[0] < b[0];
    // }
    return a[1] > b[1];//consider when both have same value and different weight
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<long long int>> jewellary;
    long long int totalJewel, totalBags;
    cin>>totalJewel>>totalBags;
    vector<long long int> bag_weights;

    for(long long int i=0; i<totalJewel; i++)
    {
        long long int mass, val;
        cin>>mass>>val;
        jewellary.push_back({mass, val});
    }

    sort(jewellary.begin(), jewellary.end(), compare);

    for(long long int i=0; i<totalBags; i++)
    {
        int x;
        cin>>x;
        bag_weights.push_back(x);
    }
    sort(bag_weights.begin(), bag_weights.end());

    long long int total_value = 0;

    for(long long int i=0; i<totalJewel; i++)
    {
        for(long long int j=0; j<bag_weights.size(); j++)
        {
            if(jewellary[i][0] <= bag_weights[j])
            {
                total_value += jewellary[i][1];
                bag_weights.erase(bag_weights.begin() + j);
                break;
            }
        }
        //jewellary.erase(jewellary.begin() + i);
    }
    cout<<total_value<<"\n";
    return 0;
}

    // for(long long int i=0; i<totalJewel; i++)
    // {
    //     for(long long int j=0; j<2; j++)
    //     {
    //         cout<<jewellary[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }


int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
  

        if (arr[mid] == x)
            return mid;
  

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
  

        return binarySearch(arr, mid + 1, r, x);
    }
    
    return -1;
}