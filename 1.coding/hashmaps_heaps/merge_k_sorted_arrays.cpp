#include<bits/stdc++.h>
using namespace std;

class pair
{
    int li, di, val;

    pair(int li, int di, int val)
    {
        this->li = li;
        this->di =di;
        this->val = val;
    }
};

int main ()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    int no_of_list, size_list, x;
    cin>>no_of_list;

    vector<int>list[no_of_list], ans;

    for(int i=0; i<no_of_list; i++)
    {
        cin>>size_list;
        for(int j=0; j<size_list; j++)
        {
            cin>>x;
            list[i].push_back(x);
        }
    }
    int i=0;
    mergeList(list, no_of_list);

    return 0;
}


// void mergeList(vector<int>*list, int size)
// {
//     vector<int>answer;
//     int i=0, j=0, k=0;
//     while((i+1) <= size)
//     {
//         while(j < list[i].size() && k < list[i+1].size())
//         {
//             if(list[i][j] <= list[i+1][k])
//             {
//                 answer.push_back(list[i][j]);
//                 j++;
//             }
//             else
//             {
//                 answer.push_back(list[i+1][k]);
//                 k++;
//             }
//         }
//         if(j < list[i].size())
//         {
//             while(j < list[i].size())
//             {
//                 answer.push_back(list[i][j]);
//                 j++;
//             }
//         }
//         else
//         {
//             while(k < list[i+1].size())
//             {
//                 answer.push_back(list[i+1][k]);
//                 k++;
//             }
//         }
//         i++;
//         list[i] = answer;
//     }

//     for(int i=0; i<answer.size(); i++)
//     {
//         cout<<answer[i]<<" ";
//     }
// }

// int array_size(vector<int>*list, int no_of_list)
// {
//     int max_arr_size = 0;
//     for(int i=0; i<no_of_list; i++)
//     {
//         if(list[i].size() > max_arr_size)
//         {
//             max_arr_size = list[i].size();
//         }
//     }

//     return max_arr_size;
// }
