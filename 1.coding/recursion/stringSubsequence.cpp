#include<bits/stdc++.h>
using namespace std;

//[a,b,c] = [---, --c, -b-, -bc, a--, a-c, ab-, abc]
//[b,c] = [--, -c, b-, bc]
//make the result of "abc" with the help of "bc"
vector<string> getAllSubsequence(string str)
{
    if(str.size() == 1)
    {
        vector<string>a;
        a.push_back(str+"");
        return a;
    }
    string st = "";int j=0;
    string x = str.at(0) + st;//separating "a" here

    vector<string>temp = getAllSubsequence(str.substr(1));//"bc" ka result will come here i.e. [--, -c, b-, bc]
    for(int i=0; i<pow(2, str.size()-1)-1;)
    {
        if(j==0)
        {
            temp.push_back(x);
            j++;
        }
        else
        {
            temp.push_back(x+temp[i]);
            i++;
        }
    }
    /* Instead of adding final answer in the temp string, you can put it in a new vector!
    vector<string>ans;
    for(int i=0; i<temp.size(); i++)
    {
        ans.push_back(temp[i]);
    }
    for(int i=0; i<temp.size(); i++)
    {
        ans.push_back(x + temp[i]);
    }*/
    return temp;

}

int main()
{
    string str; cin>>str;

    if(str.size() == 0){cout<<"[]";}
    vector<string> ans = getAllSubsequence(str);
    cout<<"[, ";
    for(int i=0; i<ans.size()-1; i++)
    {
        cout<<ans.at(i)<<", ";
    }
    cout<<ans.at(ans.size()-1);
    cout<<"]";
    // string value = "Jamaica";
    // cout<<value.at(0);
    // cout<<value.front();
    return 0;
}