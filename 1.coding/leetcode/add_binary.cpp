#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcase,temp, a_decimal, b_decimal, decimal;
    string a,b, bin_sum = "";
    cin>>testcase;
    for (int i=0;i<testcase;i++)
    {
        vector<int>xx;
        a_decimal = b_decimal = 0;bin_sum = "";
        cin>>a>>b;
        if(a.size()<b.size())
        {
            swap(a,b);
        }
        for(int j=a.size()-1;j>=0;j--)
        {
            if(a.at(j)=='1')
            {
                a_decimal += pow(2,(a.size()-j-1));
            }
        }
        for(int j=b.size()-1;j>=0;j--)
        {
            if(b.at(j)=='1')
            {
                b_decimal += pow(2,b.size()-j-1);
            }
        }
        decimal = a_decimal + b_decimal;
        while(decimal>0)
        {
            temp = decimal%2;
            std::string s = std::to_string(temp);
            bin_sum = s + bin_sum;
            decimal = decimal/2;

        }
       /* for(int j=a.size();j>=0;j--)
        {
            if(decimal >= pow(2,j))
            {
                bin_sum = bin_sum + '1';
                decimal = decimal-(pow(2,j));
            }
            else
            {
                if(j!=a.size())
                {
                    bin_sum = bin_sum + '0';
                }
            }
            
        }*/
            /*class Solution {
            public:
            string addBinary(string a, string b) {
            int carry = 0; 
            string ans = ""; 
            for (int i = a.size()-1, j = b.size()-1; i >= 0 or j >= 0; --i, --j) {
            if (i >= 0) carry += a[i] - '0'; 
            if (j >= 0) carry += b[j] - '0'; 
            ans = to_string(carry & 1) + ans; 
            carry >>= 1; 
        }
        return carry? '1' + ans : ans; 
    }
};*/
        cout<<bin_sum;
    }
    return 0;
}
//o/p"1101111011000100110 001011101101000000 11101000101011001 00001101100000 000000000000 0000000000000000000"
//exp"1101111011000100110 001011101101000000 11101000101011001 00001101100000 110001111001 1010010011000000000"
