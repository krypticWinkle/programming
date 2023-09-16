#include<bits/stdc++.h>
using namespace std;

void execute (int x, int y = 200)
{
    int temp = x + y;

    x +=temp;

    cout<<x<<" "<<y<<endl;
    //if (y!= 200)
        //cout << temp <<" "<< x <<" "<< y <<" "<< endl;
}

int main ( )
{

    int a = 50, b = 20;
    execute (b);
    //cout << a <<" "<< b <<" "<< endl;
    execute (a, b);
}



// int main()
// {
//     int a=12,b=39;
//     printf ("%d",a&b);
//     return 0;
// }