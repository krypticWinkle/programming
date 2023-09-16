#include<bits/stdc++.h>
using namespace std;

void solveHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if(n == 1)
    {
        cout<<"Move disk 1 from "<<from_rod<<" to "<<to_rod<<"\n";
    }
    else
    {
        solveHanoi(n-1, from_rod, aux_rod, to_rod);
        cout<<"Move disk "<<n<<" from "<<from_rod<<" to "<<to_rod<<"\n";
        solveHanoi(n-1, aux_rod, to_rod, from_rod);
    }
}
int main ()
{
    int no_of_disks;
    cin>>no_of_disks;
    char A = 'A', B = 'B', C = 'C';
    solveHanoi(no_of_disks, A, B, C);

    return 0;
}
