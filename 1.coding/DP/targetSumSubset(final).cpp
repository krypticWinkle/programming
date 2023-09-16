#include<bits/stdc++.h>
using namespace std;

bool isSubsetAvailable(int *numbers, int size, int target)
{
    bool subsets[size+1][target+1];
    for(int i=0; i<=size; i++)
    {
        for(int j=0; j<=target; j++)
        {
            if(i==0 && j==0)//1st row
            {
                subsets[i][j] = true;
            }
            else if(i==0)//1st row
            {
                subsets[i][j] = false;
            }
            else if(j==0)//
            {
                subsets[i][j] = true;
            }
            else
            {
                if(subsets[i-1][j] == true)
                {
                    subsets[i][j] = true;
                }
                else if(j >= numbers[i-1])
                {
                    if(subsets[i-1][j - numbers[i-1]] == true)
                        subsets[i][j] = true;
                    else
                        subsets[i][j] = false;
                }
                else
                {
                    subsets[i][j] = false;
                }
            }
        }
    }

    // for(int i=0; i<=size; i++)
    // {
    //     for(int j=0; j<=target; j++)
    //     {
    //         cout<<subsets[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    return (subsets[size][target]);
}

int main()
{
    int size; cin>>size;
    int numbers[size];
    for(int i=0; i<size; i++)
    {
        cin>>numbers[i];
    }
    int target; cin>>target;

    //cout<<isSubsetAvailable(numbers, size, target)<<endl;
    if(isSubsetAvailable(numbers, size, target) == true)
    {
        cout<<"true\n";
    }
    else
    {
        cout<<"false\n";
    }
    return 0;
}
/*
5
4 2 7 1 3
10
o/p: true*/