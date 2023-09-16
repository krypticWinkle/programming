#include<bits/stdc++.h>
using namespace std;

float median(vector<int>v1, vector<int>v2)
{
    int n1=v1.size(), n2 = v2.size();
    int *merged;//[n1+n2];
    merged = (int*)calloc((n1+n2), sizeof(int));
    int i=0, j=0, k=0;
    while(i<n1 && j<n2)
    {
        if(v1[i] < v2[j])
        {
            //merged[k] = v1[i];
            *(merged + k) = v1[i];
            i++;
        }
        else
        {
            //merged[k] = v2[j];
            *(merged + k) = v2[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        //merged[k] = v1[i];
        *(merged + k) = v1[i];
        i++; k++;
    }
    while(j<n2)
    {
        //merged[k] = v2[j];
        *(merged + k) = v2[j];
        j++; k++;
    }
    
    if((n1+n2)%2 != 0)
    {
        float x = *(merged + (n1+n2)/2)/1.0;
        return static_cast<int>(x);
    }
    float y = (static_cast<float>(*(merged + (n1+n2-1)/2)) + static_cast<float>(*(merged + (n1+n2)/2))) /2;
    return (y);
    //return merged;
}

int main()
{
    int n1, n2;
    cin>>n1;
    vector<int>v1(n1, 0);
    for(int i=0; i<n1; i++)
    {
        cin>>v1[i];
    }
    cin>>n2;
    vector<int>v2(n2, 0);
    for(int i=0; i<n2; i++)
    {
        cin>>v2[i];
    }
    //int *mrg = median(v1, v2);
    /*for(int i=0; i<(n1+n2); i++)
    {
        cout<<*(mrg + i)<<" ";
    }*/
    cout << fixed; 
    cout << setprecision(1);
    cout<<median(v1, v2)<<"\n";
    
    return 0;
}