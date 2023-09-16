#include<bits/stdc++.h>//map, vector, priority queue, set, algorithm, vector, etc
#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;



int main()
{
    typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;// null_type i.e if we want to store sets
    pbds arr;
    for(int i=0; i<10; i++)
    {
        arr.insert(i);
    }

    cout<<*arr.find_by_order(0)<<"\n";
    cout<<*arr.find_by_order(2)<<"\n";
    cout<<*arr.find_by_order(3)<<"\n";
    cout<<*arr.find_by_order(20)<<"\n";
    cout<<*arr.find_by_order(10)<<"\n";

    cout<<arr.order_of_key(7)<<"\n";
    return 0;
}
