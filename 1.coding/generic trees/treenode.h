//We need not compile this. It contains the tree node.

#include<vector>
using namespace std;

template<typename T>
class Treenode
{
    public:
    T data;
    vector<Treenode<T>*>children;
    // or this vector<treenode*>children;
    Treenode(T data)
    {
        this ->data = data;
    }
};