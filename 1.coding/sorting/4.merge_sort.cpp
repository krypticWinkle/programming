#include<bits/stdc++.h>
using namespace std;

vector<int> mergeTwoSortedArrays(vector<int>fsh, vector<int>ssh)
{
    int i=0, j=0;
    vector<int>fsa;
    while(i < fsh.size() && j < ssh.size())
    {
        if(fsh[i] <= ssh[j])
        {
            fsa.push_back(fsh[i]);
            i++;
        }
        else //if(ssh[j] < fsh[i])
        {
            fsa.push_back(ssh[j]);
            j++;
        }

    }
    if(i < fsh.size())
    {
        while(i != fsh.size())
        {
            fsa.push_back(fsh[i]);
            i++;
        }
    }
    else //if(i == fsh.size())
    {
        while(j != ssh.size())
        {
            fsa.push_back(ssh[j]);
            j++;
        }
    }

    return fsa;
}

vector<int> mergesort(vector<int>arr, int low, int high)
{
    if(low == high)
    {
        vector<int>x;
        x.push_back(arr[low]);
        return x;
    }
    int mid = (low + high)/2;
    
    vector<int>fsh = mergesort(arr, low, mid);
    vector<int>ssh = mergesort(arr, mid+1, high);
    vector<int>fsa = mergeTwoSortedArrays(fsh, ssh);

    return fsa;
}


int main ()
{
    vector<int>arr;
    arr.push_back(7); arr.push_back(4);
    arr.push_back(1); arr.push_back(3);
    arr.push_back(6); arr.push_back(8);
    arr.push_back(2); arr.push_back(5);
    int high = arr.size()-1;

    vector<int>ans = mergesort(arr, 0, high);
    //cout<<ans.size();
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}
