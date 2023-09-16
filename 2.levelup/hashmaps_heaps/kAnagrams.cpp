#include<bits/stdc++.h>
using namespace std;
/*check if 2 strings are k anagrams(ie after replacing k char in s1, can we make it anagram of s2)
(leetcode problem too)*/
void checkIfStringsAreAnagrams(string s1, string s2, int k)
{
   unordered_map<char, int>hm1, hm2;// for s1 and s2
   for(int i=0; i<s1.size(); i++)
   {
       hm1[s1[i]]++; hm2[s2[i]]++;
   }
   int x = 0;
   for(auto it: hm1)
   {
        int xx = it.second - hm2[it.first];
        if(xx > 0){ x += xx;}
   }
   //cout<<x;

    if(x <= k)cout<<"true\n";
     else{cout<<"false\n";}
}

int main()
{
    string s1, s2;
    int k;
    cin>>s1>>s2>>k;
    checkIfStringsAreAnagrams(s1, s2, k);
    return 0;
}

/*
fodr 
gork
2
OP: true*/

/*
alalallaalalsksksksksjdjdjdjdhfhffhfhfgggahahahsjsjsjdkdkdlllfjkjggalalallaalalsksksksksjdjdjdjdhfhffhfhfgggahahahsjsjsjdkdkdlllfjkjggalalallaalalsksksksksjdjdjdjdhfhffhfhfgggahahahsjsjsjdkdkdlllfjkjggalalallaalalsksksksksjdjdjdjdhfhffhfhfgggahahahsjsjsjdkdkdlllfjkjggalalallaalalsksksksksjdjdjdjdhfhffhfhfgggahahahsjsjsjdkdkdlllfjkjggalalallaalalsksksksksjdjdjdjdhfhffhfhfgggahahahsjsjsjdkdkdlllfjkjgg
alalalskskskhjjddjdjfhfhfhggggalalalskskskhjjddjdjfhfhfhggggalalalskskskhjjddjdjfhfhfhggggalalalskskskhjjddjdjfhfhfhggggalalalskskskhjjddjdjfhfhfhggggalalalskskskhjjddjdjfhfhfhggggalalalskskskhjjddjdjfhfhfhggggalalalskskskhjjddjdjfhfhfhggggalalalskskskhjjddjdjfhfhfhggggalalalskskskhjjddjdjfhfhfhggggalalalskskskhjjddjdjfhfhfhggggalalalskskskhjjddjdjfhfhfhggggalalalskskskhjjddjdjfhfhfhggggfyhgdhgdhghg
41

false
*/
