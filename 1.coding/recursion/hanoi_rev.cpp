#include<iostream>
using namespace std;

void toh(int total_disks, char t1id, char t2id, char t3id)
{    
    if(total_disks==1)
    {
        cout<<1<<"["<<t1id<<" -> "<<t2id<<"]\n";
        return;
    }
    toh(total_disks-1, t1id, t3id, t2id);
    cout<<total_disks<<"["<<t1id<<" -> "<<t2id<<"]\n";
    toh(total_disks-1, t3id, t2id, t1id);
}

int  main() 
{

    int total_disks;cin>>total_disks;
    char n1,n2,n3;cin>>n1>>n2>>n3; //(id of the three towers. i.e A, B, C)
    toh(total_disks, n1, n2, n3);
    return 0;
}