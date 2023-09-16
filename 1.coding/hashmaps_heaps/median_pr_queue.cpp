#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue<int>pq;
    priority_queue<int, vector<int>, greater<int>>rs;
    string method = "";
    int i, pq_size, rs_size;

    while(method != "quit")
    {
        cin>>method; i=0;
        if(method == "add")
        {
            int x; cin>>x;
            pq.push(x);
        }
        else if(method == "peek")//ie return median
        {
            if(pq.empty())
            {
                cout<<"Underflow"<<"\n";
            }
            else
            {
                while(i<=pq_size/2) //check when size is odd and even
                {
                    rs.push(pq.top());
                    pq.pop();
                    i++;
                }
                cout<<rs.top()<<"\n";
                
                i=0;

                while(!rs.empty()) //check when size is odd and even
                {
                    pq.push(rs.top());
                    rs.pop();
                }
            }
        }
        else if(method == "remove")//ie remove median
        {
            if(pq.empty())
            {
                cout<<"Underflow"<<"\n";
            }
            else
            {   
                while(i<=(pq_size/2) - 1) //check when size is odd and even
                {
                    rs.push(pq.top());
                    pq.pop();
                    i++;
                }
                cout<<pq.top()<<"\n";
                pq.pop();

                i=0;
                while(!rs.empty()) //check when size is odd and even
                {
                    pq.push(rs.top());
                    rs.pop();
                }
            }
        }
        else if(method == "size")
        {
            cout<<pq.size()<<"\n";
        }

        pq_size = pq.size();
        rs_size = rs.size();
    }
    return 0;
}

// import java.io.*;
// import java.util.*;

// public class Main {

//   public static class MedianPriorityQueue {
//     PriorityQueue<Integer> left;
//     PriorityQueue<Integer> right;

//     public MedianPriorityQueue() {
//       left = new PriorityQueue<>(Collections.reverseOrder());
//       right = new PriorityQueue<>();
//     }

//     public void add(int val)
//     {
//       // write your code here
//     }

//     public int remove() {
//       // write your code here
//     }

//     public int peek() {
//       // write your code here
//     }

//     public int size() {
//       // write your code here
//     }
//   }

// public static void main(String[] args) throws Exception
// {
//     BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//     MedianPriorityQueue qu = new MedianPriorityQueue();

//     String str = br.readLine();
//     while (str.equals("quit") == false)
//     {
//         if (str.startsWith("add")) 
//         {
//             int val = Integer.parseInt(str.split(" ")[1]);
//             qu.add(val);
//         } 
//         else if (str.startsWith("remove"))
//         {
//             int val = qu.remove();
//             if (val != -1) 
//              {
//                  System.out.println(val);
//              }
//         } 
//         else if (str.startsWith("peek")) 
//         {
//             int val = qu.peek();
//             if (val != -1) 
//             {
//                 System.out.println(val);
//             }
//         } 
//         else if (str.startsWith("size")) 
//         {
//             System.out.println(qu.size());
//         }
//         str = br.readLine();
//     }
//   }
// }