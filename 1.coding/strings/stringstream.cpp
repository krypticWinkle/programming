//https://www.geeksforgeeks.org/stringstream-c-applications/

#include<bits/stdc++.h>
using namespace std;

int countSegments(string s) 
{
    int count=0;
    //passing the string 's' to stringstream object 'ss'. Internally, it'll break words in the loop
    stringstream ss(s);
    while(ss>>s)//it means ">>" will read something from string "s"
    {
        count++;
        //s will always contain word between next space and what has already been read by ss
    }
    return count;
}

int main()
{
    string str;
    getline(cin, str);
    cout<<countSegments(str);
}