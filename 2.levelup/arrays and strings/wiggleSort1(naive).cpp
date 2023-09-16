#include<bits/stdc++.h>
using namespace std;
//wiggleSort 1:
void wiggle(int *a, int size)
{
    int i;
    sort(a, a+size);
    for(i=0; i<=(size/2)-1; i++)
    {
        cout<<a[i]<<" "<<a[size-i-1]<<" ";
    }
    if(i%2 == 0)cout<<a[i];

}

int main()
{
    int size; cin>>size;
    int a[size];
    for(int i=0; i<size; i++)
        cin>>a[i];
        
    wiggle(a, size);
    
    return 0;
}