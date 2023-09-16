#include<bits/stdc++.h>
using namespace std;

int main ()
{
   // ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int a,b,c,d,testcase;
    cin>>testcase;

    for(int i=0;i<testcase;i++)
    {
        cout<<"Enter 2 numbers to get their GCD:\n";
        cin>>a>>b;
	    if(a<b)
        {
            swap(a,b);
        }
        
        while (b!=0)
        {
            c = a;
            d = b;
            a = d;
            b = c%d;

		/*c=b;
		b=a%b;
		a=c;
			this works more efficiently*/
        }
    }
        cout<<"The GCD is "<<a<<"\n";
    }
    return 0;
    
}