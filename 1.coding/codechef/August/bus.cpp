#include<bits/stdc++.h>
using namespace std;

bool isConsistent(int n, int m, int q)
{
    unordered_map<int, char>hm; int count = 0; 
    bool flag = true;

    for(int i=0; i<q; i++)
    {
        char op; int x;
        cin>>op>>x;

        if(op == '+')
        {
            count++;
            if(count <= m)// count <= m
            {
                hm[x] = op;
            }
            else//count > m
            {
                flag = false;
            }
        }
        else
        {
            if(hm.find(x) == hm.end())
            {
                flag = false;
            }
            else
            {
                hm.erase(x);
                count--;
            }
        }
    }
    return flag;
}

int main()
{
    
    //ios_base::sync_with_stdio(false); 
    //cin.tie(NULL);

    int t; cin>>t;
    for(int i=0; i<t; i++)
    {
        int n, m, q; cin>>n>>m>>q;
        bool a = isConsistent(n, m, q);
        if(a==true)
        {
            cout<<"Consistent\n";
        }
        else
        {
            cout<<"Inconsistent\n";
        }
    }
    return 0;
}


/*
2
2 1 4
+ 1
+ 2
- 1
- 2
*/