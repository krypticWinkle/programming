#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define xx ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector
#define rep(i, a, b) for(int i=a; i<b; i++)
#define ump unordered_map<int, int>
using namespace std;

/*
https://leetcode.com/problems/reverse-words-in-a-string-ii/ M
https://leetcode.com/problems/basic-calculator-ii/ M
*/
string reverseOnlyLetters(string s) 
{
    int i=0, j=s.size()-1;// i suru se, j last se
    while(i<j)
    {
        if((s[i] >= 'A' && s[i] <= 'Z')|| (s[i] >= 'a' && s[i] <= 'z'))//i is alphabet
        {
            if((s[j] >= 'A' && s[j] <= 'Z')|| (s[j] >= 'a' && s[j] <= 'z'))
            {
                swap(s[i], s[j]);i++;
            }
            j--;//if 'i' is alphabet, j ghatega whether j is alphabet or not
        }
        else//i is not an alphabet
            i++;
    }
    return s;
}

//LC 917
int32_t main()
{
    string s; cin>>s;
    cout<<reverseOnlyLetters(s)<<endl;
    return 0;
}