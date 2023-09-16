#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> getAllSubseq(int *a, int n)
{
    if(n == 0)
    {
        vector<vector<int>> x; x.push_back({0});
        return x;
    }

    int x = a[0];
    vector<vector<int>>y = getAllSubseq(a+1, n-1);
    vector<vector<int>>z;
    int ss = y.size();
    for(int i=0; i<ss; i++)
    {
        z.push_back(y[i]);
    }
    for(int i=0; i<ss; i++)
    {
        y[i].push_back(x);
    }
    for(int i=0; i<ss; i++)
    {
        z.push_back(y[i]);
    }
    return z;
}

bool isPossible(int *a, int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum += a[i];
    }
    if(sum % 2 != 0)
    {
        return false;
    }
    sum /= 2;
    vector<vector<int>>subs = getAllSubseq(a, n);

    int half = 0;
    for(int i=0; i< subs.size(); i++)
    {
        for(int j=0; j< subs[i].size(); j++)
        {
            half += subs[i][j];
        }
        if(half == sum)
        {
            return true;
            
        }
        half = 0;
    }
    return false;
}


/*Wrong Ans on i/p:
3
4 4 4
*/
int main()
{
    int size; cin>>size;
    int array[size];
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }
    if(isPossible(array, size) == true)
    {
        cout<<"Possible\n";
    }
    else{
        cout<<"Impossible\n";
    }
    return 0;
}