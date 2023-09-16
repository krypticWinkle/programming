#include<iostream>
#include<vector>
using namespace std;

vector<int> findArray(int n, int num1, int num2)
{
    int p = n;// storing duplicate of n (to reinitialize later if needed)
    vector<int>v(n, 0); bool flag = 0;//flag = 1 when y is included in answer
    v[0] = num1;

    for(int i=1; i<=num2-num1; i++)
    {
        int tmp = num1+i, tmp2 = num1-i;
        while(n > 1)
        {
            if(tmp <= num2 || tmp2 <= 0)
            {
                v[n-1] = tmp;
                tmp += i;
                n--;
            }
            else if(tmp > num2)
            {
                if(tmp2 > 0)
                {
                    v[n-1] = tmp2;
                    tmp2 -= i;
                    n--;
                }
            }
            if(tmp-i == num2)
            {
                flag = 1;
            }
        }
        if(n==1)
        {
            if(flag == 1)
            {
                return v;
            }
            else
            {
                flag = 0; n = p;
            }
        }
    }
    return v;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);

    int tc; cin>>tc;
    for(int i=0; i<tc; i++)
    {
        int n, num1, num2;
        cin>>n>>num1>>num2;

        vector<int>ans = findArray(n, num1, num2);
        for(int i=0; i<n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
        
    }
    return 0;
}

/*
ip:
5 (5 testcases)
2 1 49 (total 2 elements out of which 1 and 49 must be there)
5 20 50
6 20 50
5 3 8
9 13 22
op:
1 49
20 10 50 40 30
20 50 44 38 32 26
3 23 18 13 8
13 25 1 4 7 10 22 19 16*/