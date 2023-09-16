#include<bits/stdc++.h>
using namespace std;
#include<vector>

//amount = 210. denominstions[] = {77, 70}. Such cases won't be covered
int noOfCoins(int* denominations, int amount, int size)
{
    int count = 0;
    for(int i=0; i<size;)
    {
        if(amount < denominations[i])
        {
            i++;
        }
        else
        {
            count += amount/denominations[i];
            amount -= amount/denominations[i] * denominations[i];
        }
        if(amount == 0)
            break;
    }
    if(amount != 0)
        count = -1;
    return count;
}

int main ()
{
    int denominations[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int size = sizeof(denominations)/sizeof(denominations[0]);
    int amount;
    cin>>amount;

    cout<<noOfCoins(denominations, amount, size);

    return 0;
}

/* LEETCODE (YET TO SUBMIT CORRECT ONE THERE)
int coinChange(vector<int>& coins, int amount) 
{
    int count = 0;
    sort(coins.begin(), coins.end());
    for(int i=coins.size()-1; i>=0;)
    {
        if(amount < coins[i])
        {
            i--;
        }
        else
        {
            amount -= coins[i];
            count++;
        }
        if(amount == 0)
        {
            break;
        }
    }
    return count;
}*/