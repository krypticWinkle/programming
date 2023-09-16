//staircase pattern hackerrank

#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n)
{
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
        {
            cout<<" ";
        }
        for(k=0;k<i;k++)
        {
            cout<<"#";
        }
        cout<<"\n";
    }

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
