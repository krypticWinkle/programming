#include<bits/stdc++.h>
using namespace std;

//https://practice.geeksforgeeks.org/problems/transform-string5648/1#

int transformAtoB(string A, string B)
{
    int ans=0;
    if(A.size() != B.size())
        return -1;

    int ans=0;
    if(A.size() != B.size())
        return -1;
    
    int a[123] = {0};
    for (int i=0; i<B.size(); i++)   
        a[B[i]]++;
        
    for (int i=0; i<A.size(); i++)   
        a[A[i]]--;      
        
    for (int i=0; i<123; i++)  
        if (a[i])
        return -1;

    int pa = A.size()-1;
    int pb = B.size()-1;
    while(pa >= 0)
    {
        if(A[pa] == B[pb])
        {
            pa--; pb--;
        }
        else
        {
            ans++;
            pa--;
        }
    }
        return ans;
}

int main()
{
    string A, B;
    cin>>A>>B;
    unordered_map<char, int>hm, hm2;
    cout<<transformAtoB(A, B);
    return 0;
}