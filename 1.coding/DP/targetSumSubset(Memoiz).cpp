#include<bits/stdc++.h>
using namespace std;

int isSubsetAvailable(int *numbers, int size, int target)
{
    if(target == 0)
    {
        return 0;
    }
    for(int i=1; i<size; i++)
    {
        int x = numbers[0];
        int y = isSubsetAvailable(numbers+i, size-i, target-x);

        if(x + y == target)
        {
            return target;
        }
    }
    return -1;
}

// int callForEachElement(int* arr, int size)
// {
//     int sum = 0;
//     for(int i=0; i<size; i++)
//     {
//         isSubsetAvailable(arr+i, size-i, target-x);
//     }
// }
int main()
{
    int size; cin>>size;
    int numbers[size];
    for(int i=0; i<size; i++)
    {
        cin>>numbers[i];
    }
    int target; cin>>target;

    if(isSubsetAvailable(numbers, size, target) == target)
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
o/p: true

3
1 3 7 
10
false*/