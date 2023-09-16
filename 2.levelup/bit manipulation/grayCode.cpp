#include<bits/stdc++.h>
using namespace std;

vector<string> ggrayCode(int n) 
{
    if(n == 1)
    {
        vector<string>x; //string s = 
        x.push_back("0");
        x.push_back("1");
        return x;
    }
    vector<string> sm = ggrayCode(n-1);
    vector<string> ans; int k = sm.size();
    for(int i=0; i<k; i++)
    {
        ans.push_back('0' + sm[i]);
    }
    for(int i=k-1; i>=0; i--)
    {
        ans.push_back('1' + sm[i]);
    }

    return ans;
}


vector<int> grayCode(int n) 
{
    if(n == 1)
    {
        vector<int>x;
        x.push_back(0);
        x.push_back(1);
        return x;
    }
    vector<int> sm = grayCode(n-1);
    vector<int> ans; int k = sm.size();
    vector<string> ans2;
    for(int i=0; i<k; i++)
    {
        string x = "0" + to_string(sm[i]);
        ans.push_back(stoi(x));
    }
    for(int i=k-1; i>=0; i--)
    {
        string x = "1" + to_string(sm[i]);
        ans.push_back(stoi(x));
    }
    
    for(int i=0; i<ans.size(); i++)
    {
        ans2.push_back(to_string(ans[i]));
    } 
    for(int i=0; i<ans2.size(); i++)
    {
        string xx = ans2[i];
        int x = stoi(xx, 0, 2);
        ans[i] = x;
    }
    return ans;
}
int main()
{
    int n; cin>>n;
    vector<int> ans = grayCode(n);
    for(auto it: ans)
    {
        //cout<<it<<"\n";
    }
    return 0;
}


// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
// 	string bin_string = "10101010";

// 	int number = stoi(bin_string, 0, 2);
// 	cout<<"bin_string: "<<bin_string<<endl;
// 	cout<<"number: "<<number<<endl;

// 	return 0;
// }
