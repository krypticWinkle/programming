/*Calculating the power of a number in O(n/2) complexity*/

/*in O(n) the loop is like
int exponent(int number, int power)
{
    if(power == 1)
    {
        return number;
    }
    return number * exponent(number, power-1);
*/

#include<bits/stdc++.h>
using namespace std;

int exponent(int number, int power)
{
    if(power == 1)
    {
        return number;
    }
    if(power % 2 == 1)
    {
        int x = exponent(number, power/2);
        return number * x * x;
        //return number * exponent(number, power/2) * exponent(number, power/2);
    }
    int k = exponent(number, power/2);
    return k * k;
    //return exponent(number, power/2) * exponent(number, power/2);
}
int main()
{
    int number, power;
    cin>>number>>power;
    int ans = exponent(number, power);
    cout<<ans;
    return 0;
}// ye code hai