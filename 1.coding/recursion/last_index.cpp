#include <iostream>
using namespace std;

int lastIndex(int arr[], int idx, int x, int n)
{
    if(idx == n)
    {
        return -1;
    }
    int l_indx = lastIndex(arr, idx+1, x, n);
    if(l_indx == -1)
    {
        if(x == arr[idx])
        {
            return idx;
        }
        else
        {
            return -1;
        }
    }

    return l_indx;
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
    int p = lastIndex(arr, 0, d, n);
    cout << p << endl;
}