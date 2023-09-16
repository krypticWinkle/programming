#include<stdio.h>
struct fraction
{
    int numerator, denominator;
};
int comparing(int x, int y)
{
    float z;
    z = x/y;
    return z;
}
int main ()
{
    int z1,z2;
    struct fraction f1, f2;
    scanf("%d %d",&f1.numerator, &f1.denominator);
    comparing(f1.numerator,f1.denominator);
    scanf("%d %d",&f2.numerator, &f2.denominator);
    comparing(f2.numerator,f2.denominator);

    if(z1<z2)
    {
        printf("%d/%d\n",f2.numerator,f2.denominator);
    }
    else
    {
        printf("%d/%d\n",f1.numerator,f1.denominator);
    }
    
    return 0;
}