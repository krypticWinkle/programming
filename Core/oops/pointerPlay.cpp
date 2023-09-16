#include<iostream>
using namespace std;

int main()
{
    int kk = 5; int i = 10;
    //const int &k = i;
    int &k = i; k++;
    //k++; - wrong (since k is const)
    cout<<k<<" "<<i;



    int *ptr = &i;
    *(ptr)+=5; cout<<i;
    return 0;
}