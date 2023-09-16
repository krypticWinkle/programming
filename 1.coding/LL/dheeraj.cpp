#include<iostream>
using namespace std;

template <typename T>
struct func
{
    void x()
    {
        cout<<"hi"<<endl;
    }
    void y()
    {
        cout<<"hello\n";
    }
};

template<>
void func<int>::x()
{
    cout<<"hello world\n";
}

int main()
{
    func<int>t;
    t.x();
    t.y();
    return 0;
}