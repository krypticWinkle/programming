#include<bits/stdc++.h>
using namespace std;

int noOfDefeatedMonsters(int* power, int* bonus, int experience, int num)
{
    int count = 0;
    for(int i=0; i<num; i++)
    {
        if(experience >= power[i])
        {
            experience += bonus[i];
            count++;
        }
    }
    return count;
}

int main ()
{
    int noOfMonsters; cin>>noOfMonsters;
    int experience; cin>>experience;
    int power[noOfMonsters], bonus[noOfMonsters];

    for(int i=0; i<noOfMonsters; i++)
    {
        cin>>power[i];
    }
    for(int i=0; i<noOfMonsters; i++)
    {
        cin>>bonus[i];
    }

    cout<<noOfDefeatedMonsters(power, bonus, experience, noOfMonsters);
    return 0;
}