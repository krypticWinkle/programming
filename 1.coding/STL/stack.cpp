#include<bits/stdc++.h>
//#include<deque.h>
using namespace std;

int main()
{
    stack<int> st; //you can only access the top element
    st.push(1);
    st.push(10);
    st.push(100);
    st.push(2);
    st.push(20);
    st.push(200);

    cout<<st.top()<<"\n";

    st.pop();

    //queue
    queue<int> qu;
    qu.push(5);qu.push(18);
    qu.push(111);qu.push(200);
    qu.push(205);qu.push(300);

    qu.pop();//pops 1st element

    cout<<qu.front();


    deque<int>dq;
    dq.push_back(1);dq.push_back(2);
    dq.push_front(10);dq.push_front(40);

    dq.pop_back();
    dq.pop_front();
    return 0;
}