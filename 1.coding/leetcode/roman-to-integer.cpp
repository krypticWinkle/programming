#include<bits/stdc++.h>
using namespace std;

int indexx(char* roman,string s,int j)
{
    int i;
    for(i=0;i<7;i++)
    {
        if(s.at(j)==roman[i])
        {
            return i;
        }
    }
    return -1;
} 
int main ()
{
    string s;
    int k,x,testcase,number;
    char roman[7] = {'I','V','X','L','C','D','M'};
    int arabic[7] = {1,5,10,50,100,500,1000};
    cin>>testcase;
    for(int i=0;i<testcase;i++)
    {
        vector<int> indices;
        number = 0;
        cin>>s;
        for(int j=0;j<s.size();j++)
        {
            k=indexx(roman,s,j);
            indices.push_back(k);
        }
        for(int j=0;j<s.size();j++)
        {
            if( j  < s.size() - 1 )
            {
                if((indices.at(j))>=(indices.at(j+1)))
                {
                    number+=arabic[indices.at(j)];// + arabic[indices.at(j+1)];
                }
                else
                {
                    number+=arabic[indices.at(j+1)] - arabic[indices.at(j)];
                    j++;
                }
            }
            else
            {
                number+=arabic[indices.at(j)];
            }        
        }
        cout<<number;
    }
    return 0;
}
/*
very fast solution from leetcode
class Solution {
public:
int indexof(char* arr, char s)
{
int i = 0;
while(i < 7){
if(arr[i] == s){break;}
i++;
}
return i;
}

int romanToInt(string s)
{
    char roman[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int arabic[7] = {1,5,10,50,100,500,1000};

    int n=0;
    
    for(int i=0;i < s.length()-1;i++)
    {
        if(arabic[indexof(roman,s[i])] < arabic[indexof(roman,s[i+1])])
        {
            n -= arabic[indexof(roman,s[i])];
        }else{
            n += arabic[indexof(roman,s[i])];
        }
    }
    n += arabic[indexof(roman,s[s.length()-1])]; 
    return n;
}
};
*/