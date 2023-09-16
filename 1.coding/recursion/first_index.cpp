#include<iostream>
using namespace std;
// You are required to find the first index at which x occurs in array a.
int firstIndex(int arr[], int idx, int x, int n)
{
    if(x == arr[idx])
    {
        return idx;
    }
    if(idx == n)
    {
        return -1;
    }
    int f_indx = firstIndex(arr, idx+1, x, n);
    return f_indx;

}

int main()
{
    int n;
    cin >> n;
    int d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> d;
    int p = firstIndex(arr, 0, d, n);
    cout << p << endl;
}