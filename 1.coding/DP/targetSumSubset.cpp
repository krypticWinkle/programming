#include<bits/stdc++.h>
using namespace std;
//greedy approach - wrong solution
int isSubsetAvailable(int *numbers, int target)
{
    if(numbers[0] == target)
    {
        return numbers[0];
    }
    int sum=0;
    while(sum < target)
    {
        sum = numbers[0];
        sum += isSubsetAvailable((numbers + 1), target - sum);
    }

    return sum;
}

bool callForEachElement(int* numbers, int size, int target)
{
    for(int i=0; i<size; i++)
    {
        int a = isSubsetAvailable((numbers+i), target);
        if(a == target)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int size; cin>>size;
    int numbers[size];
    for(int i=0; i<size; i++)
    {
        cin>>numbers[i];
    }
    sort(numbers, numbers+size);
    int target; cin>>target;

    if(callForEachElement(numbers, size, target))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    //cout<<isSubsetAvailable(numbers, target);

    return 0;
}