#include<bits/stdc++.h>
#define int long long
#define vi vector
#define endl "\n"
#define ump unordered_map
#define rep(i,a,b) for(int i=a; i<b; i++)
#define fs ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

/*int maxSumAfterOperations(vi<int>v)
{
    sort(v.begin(), v.end());
    int sum=0; int i=0;
    while(i < v.size()-1)
    {
        while(v[i]%2 != 1)
        {

            v[i] /= 2;
            v[v.size() - 1] *= 2;
        }
        i++;
    }
    rep(i, 0, v.size())
    {
        sum += v[i];
    }
    return sum;
}*/

int maxSumAfterOperations(vi<int>v)
{
    
    int sum=0, size=0; int i=0;
    string arr[v.size()];
    while(i < v.size())
    {
        arr[i] = bitset<8>(v[i]).to_string();
        i++;
    }
    int marker1, marker2, maxIndex=0, totalZeros=0;
    rep(i, 0, v.size())
    {
        rep(j, 0, 8)
        {
            if(arr[i][j] != '0')
            {
                marker1 = j;
                break;
            }
        }
        
        for(int j=7; j>=0; j--)
        {
            if(arr[i][j] != '0')
            {
                marker2 = j;
                break;
            }
        }
        
        if(marker2-marker1+1 > size)
        {
            size = marker2-marker1+1;
            maxIndex = i;
        }
    }
    rep(i, 0, v.size())
    {
        for(int j=7; j>=0 && j != maxIndex; j--)
        {
            int tmpzeros = 0;
            if(arr[i][j] == '0')
            {
                tmpzeros++;
                totalZeros++;
            }
            else
            {
                string tmp = "";
                for(int k=0; k<arr[i].size()-tmpzeros; k++)
                {
                    tmp += arr[i][k];
                }
                arr[i] = tmp;
                break;
            }
        }
    }
    string x = "";
    for(int i=marker1; i<=marker2; i++)
    {
        x += arr[maxIndex][i];
    }
    while(totalZeros--)
    {
        x += '0';
    }
    arr[maxIndex] = x;
    rep(i, 0, v.size())
    {
        v[i] = stoi(arr[i], 0, 2);
    }
    rep(i, 0, v.size())
    {
        sum += v[i];
    }
    return sum;
}


int32_t main()
{
    fs;
    int tc; cin>>tc;
    while(tc--)
    {
        int size; cin>>size;
        vi<int> v(size, 0);
        rep(i, 0, size)
        {
            cin>>v[i];
        }
        cout<<maxSumAfterOperations(v)<<endl;
    }
    return 0;
}