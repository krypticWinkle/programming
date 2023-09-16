#include<bits/stdc++.h>
using namespace std;

int fibonacci(int num, int* prev_solutions)
{
    if(num == 0 || num == 1)
    {
        return num;
    }
    if(prev_solutions[num] != 0)
    {
        return prev_solutions[num];
    }
    int ans = fibonacci(num-1, prev_solutions) + fibonacci(num-2, prev_solutions);

    prev_solutions[num] = ans;
    return ans;
}

int main()
{
    int num; cin>>num;
    int prev_solutions[num+1] = {0};
    cout<<fibonacci(num, prev_solutions);
    return 0;
}