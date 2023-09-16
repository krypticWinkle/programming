#include<bits/stdc++.h>
using namespace std;
class Box
{
    private:
    int l, b, h;
    public:
    Box()
    {
        l = b = h = 0;
    }
    Box(int length,int breadth,int height)
    {
        l = length;
        b = breadth;
        h = height;
    }
    Box(const Box &B)
    {
        l=B.l;
        b=B.b;
        h=B.h;
    }
    //operator overloading
    friend bool operator < (Box &A, Box &B)
    {
        bool x = false;
        if((A.l < B.l)||((A.h < B.h) && (A.b == B.b) && (A.l == B.l)) || ((A.b < B.b) && (A.l == B.l)))
        {
            x = true;
        }
        return x;
    }
    friend ostream& operator << (ostream& output, const Box &B)
    {
        output<<B.l<<" "<<B.b<<" "<<B.h;
        return output;
    }
    int getLength();
    int getBreadth();
    int getHeight();
    long long CalculateVolume();
};

int Box :: getLength()
{
    return l;
}
int Box :: getBreadth()
{
    return b;
}
int Box :: getHeight()
{
    return h;
}
long long Box :: CalculateVolume()
{
    long long volume = l * b * h;
    return volume;
}


void checB()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type ==B)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	checB();
}