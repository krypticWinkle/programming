#include<bits/stdc++.h>
using namespace std;



map<long long, long long> insertPF(map<long long, long long> primeFact, long long fact)
{
    if (primeFact.find(fact) != primeFact.end())
    {
        primeFact[fact]++;
    }
    else
    {
        primeFact[fact] = 1;
    }
    return primeFact;
}

map<long long, long long> primeFactors (long long n)
{
    map<long long, long long> primeFact;

    while (n % 2 == 0)
    {
        primeFact = insertPF(primeFact, 2);
        n /= 2;
    }

    for(long long i = 3; i <= sqrt(n); i += 2)
    {

        while (n % i == 0)
        {
            primeFact = insertPF(primeFact, i);
            n /= i;
        }
    }


    if (n > 2)
        primeFact = insertPF(primeFact, n);

    return primeFact;
}

string perfectCube (long long n)
{
    map<long long, long long> primeFact;
    primeFact = primeFactors(n);

    for(auto x : primeFact)
    {
        if (x.second % 3 != 0)
            return "NO";
    }
    return "YES";
}


int main()
{
    long long tc; cin>>tc;
    for(long long i=0; i<tc; i++)
    {
        long long N; cin>>N;
        if(N==0){cout<<"YES\n";}
        else{
            cout << perfectCube(N)<<"\n";
        }
    }

    return 0;
}
