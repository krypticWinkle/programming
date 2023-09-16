#include<bits/stdc++.h>
using namespace std;

void fun_merge(int *a, int s, int e)
{
    int mid = (s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;
    int temp[100];
    while(i<=j && j<=e)
    {
        if(a[i]<a[j])
        {
            temp[k]=a[i];
            k++;
            i++;
        }
        else
        {
            temp[k]=a[j];
            k++;
            j++;
        }
    }
    while(i<=mid)
    {
        temp[k]=a[i];
        k++;
        i++;
    }
    while(j<=e)
    {
        temp[k]=a[j];
        k++;
        j++;
    }
    //We need to copy all the elements back to the original array
    for(int i=s;i<=e;i++)
    {
        a[i]=temp[i];
    }
    return;
}

void Merge_sort(int *a, int s,int e)//s ->start. e->end
{
    //base case
    if(s>=e)
    {
        return;
    }

    int mid = (s+e)/2;
    //Recursively the arrays - s, mid, and mid+1, e
    Merge_sort(a,s,mid);
    Merge_sort(a,mid+1,e);
    //Merge the two parts
     fun_merge(a,s,e);
}

int main()
{
    int a[] = {5,4,3,1,2};
    int n=5;
    //bubble_sort_recursive(a,0,n);
    Merge_sort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}
