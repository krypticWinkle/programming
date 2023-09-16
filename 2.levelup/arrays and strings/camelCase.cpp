#include <bits/stdc++.h>

using namespace std;
 //hackerrank
/*
 * Complete the 'camelcase' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int camelcase(string s) 
{
    int count = 0;
    for(int i=0; i<s.size(); i++)
    {
        if((s.at(i)  >= 65) && (s.at(i)  <= 90))
        {
            //cout<<s.at(i)<<":"<<s.at(i) - '0'<<"\n";
            count++;
        }
    }
    //cout<<"B:"<<'B' + '0';
    return count+1;
}

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    cout << result << "\n";

    //fout.close();

    return 0;
}

/*
ip:heIsABoyDidYouGetIt
op:8*/