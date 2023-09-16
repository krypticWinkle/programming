#include<bits/stdc++.h>
#include"Student.cpp"
using namespace std;

int main()
{
    class Student s1;//constructor 1 called
    class Student s2(101);//constructor 2 called
    class Student s3(20, 102);//constructor 3 called
    class Student s4(s3);//copy constructor called

    s1 = s2;//copy assignment operator

    class Student s5 = s4;//here also, copy constructor is called, not copy assignment operator
    return 0;
}