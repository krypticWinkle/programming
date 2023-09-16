class Solution {
public:
    bool isPalindrome(int x)
    {
        if(x<0)
            return false;
        else
        {
            std::string s = std::to_string(x);
            int j =s.size()-1;

            for(int i=0;i<(s.size()/2);i++)
            {
                if((s[i])!= s[j])
                {
                    return false;
                }
                else
                {

                }
                j--;
            }
        }
        return true;
    }
};

/*


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x)
    {
        if(x<0)
            return false;
        else
        {
            std::string s = std::to_string(x);
            int j =s.size()-1;

            for(int i=0;i<(s.size()/2);i++)
            {
                if((s[i])!= s[j])
                {
                    return false;
                }
                else
                {

                }
                j--;
            }
        }
        return true;
    }
};
int main ()
{
    int x;
    cin>>x;
    isPalindrome(int x);
    return 0;
}*/