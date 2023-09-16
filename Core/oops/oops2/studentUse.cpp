#include<bits/stdc++.h>
#include "Student.cpp"
using namespace std;

int main()
{
    char name[] = "abcd";
    Student s1(20, name);
    s1.display();

    name[3] = 'e';
    Student s2(24, name);

    //s2.display();
    //s1.display();

    for(int i=0; i<4; i++)
    {
        cout<<*(name+i);
    }

    return 0;
}
/*o/p:
abcd 20
abce 24
abcd 20//It's not abce because in the constructor, we made a deep copy of name and assigned it to s1.
abce*/