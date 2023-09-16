
#include <iostream>
using namespace std;

string checkNumber(int N)
{
    int temp = N;

    while (temp > 0) {

        if (temp % 1000 == 233)
            temp /= 1000;
        else if (temp % 100 == 23)
            temp /= 100;
        else if (temp % 10 == 2)
            temp /= 10;
        else {
            return "Try Again";
        }
    }

    return "Sherlock Key";
}

int main()
{
    int tc; cin>>tc;
    for(int i=0; i<tc; i++)
    {
        int num; cin>>num;
        cout << checkNumber(num)<<"\n";
    }

    return 0;
}

























// #include<bits/stdc++.h>
// using namespace std;
// #define long long int

// bool isSherlockKey(string s, string *predefined, int count0, int count1, int count2)
// {
//     if(s.find(predefined[2]) != string::npos)
//     {
//         count2++;
//     }
//     if(s.find(predefined[1]) != string::npos)
//     {
//         count1++;
//     }
//     if(s.find(predefined[0]) != string::npos)
//     {
//         count0++;
//     }
//     if(s.size() == (count0*1 + count1*2 + count2*3))
//     {
//         return true;
//     }
//     return false;
// }

// int32_t main()
// {
//     //int tc; cin>>tc;
//     string predefined[3] = {"2", "23", "233"};
//     //for(int i=0; i<tc; i++)
//     //{
//         int num; cin>>num; 
//         int count0 = 0, count1=0, count2 = 0;
//         string s = to_string(num);

//         if(isSherlockKey(s, predefined, count0, count1, count2) == true)
//         {
//             cout<<"Sherlock Key\n";
//         }
//         else
//         {
//             cout<<"Try Again\n";
//         }
//     //}
//     return 0;
// }