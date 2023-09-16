#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool compare(int a, int b)
{
    return a < b;
}

bool sort_col(vector<int>p, vector<int>q)
{
    return p[1] < q[1];
}

int main()
{
    int arr[] = {10, 5, 120, 8, 19};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+size, compare);

    for(int i=0; i< size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    vector<vector<int>> v{{3, 5, 1}, {4, 8, 6}, {7, 2, 9}};
    sort(v.begin(), v.end(), sort_col);

    for (int i=0; i<v.size(); i++)
    {
        for (int j=0; j<v[i].size(); j++)
            cout << v[i][j] << " ";
        cout <<"\n";
    }

}