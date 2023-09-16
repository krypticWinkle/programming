#include<bits/stdc++.h>
//#include<deque.h>
using namespace std;

int main()
{
    list<int>li;
    
    li.push_back(10);
    li.push_back(20);

    li.push_front(2);
    li.push_front(1);

    li.pop_back();
    li.pop_front();

    cout<<li.front()<<"\n";//to access head
    cout<<li.back()<<"\n";//to access tail

    li.reverse();//it will reverse the linked list
    
    cout<<li.front()<<"\n";//to access head
    cout<<li.back()<<"\n";//to access tail
    
    return 0;
}