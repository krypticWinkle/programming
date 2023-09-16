#include<bits/stdc++.h>
using namespace std;

class Fraction
{
    private:
    int numerator, denominator;

    public:
    Fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }

    void print()
    {
        //we can skip writing "this" here. because it's already called for function f1;
        cout<<this->numerator<<"/"<<this->denominator<<"\n";
    }

    void simplify()
    {
        //int num1 = this->numerator, num2 = this->denominator;
        int num2 = max(this->numerator, this->denominator);//15
        int num1 = min(this->numerator, this->denominator);//10

        while(num1 != 0)
        {
            int temp = num1;
            num1 = num2 % num1;
            num2 = temp;
        }
        this->numerator /= num2;
        this->denominator /= num2;
    }
    void add(Fraction &f2)//const Fraction &f2 -> even better
    {
        int newDenom = this->denominator * f2.denominator;
        int newNum = (((newDenom/this->denominator) * this->numerator) + ((newDenom/f2.denominator) * f2.numerator));
        this->numerator = newNum;
        this->denominator = newDenom;

        this->simplify();

    }

    Fraction operator+(Fraction &f2)//const Fraction &f2 -> even better
    {
        int newDenom = this->denominator * f2.denominator;
        int newNum = (((newDenom/this->denominator) * this->numerator) + ((newDenom/f2.denominator) * f2.numerator));
        
        Fraction f3(newNum, newDenom);
        f3.simplify();

        return f3;

    }

    void multiply(const Fraction &f2)
    {
        this->numerator *= f2.numerator ;
        this->denominator *= f2.denominator ;
        this->simplify();
    }

    Fraction operator*(const Fraction &f2)
    {

        int num = this->numerator * f2.numerator;
        int denom = this->denominator * f2.denominator ;
        Fraction f3(num, denom);
        f3.simplify();

        return f3;
    }
};

int main()
{
    class Fraction f1(10, 2);
    class Fraction f2(15, 4);

    Fraction f4 = f2+f1;//f2 will be passed in "this" and f1 as argument
    //f1.add(f2);
    //f1.multiply(f2);
    //f1.print();
    //f2.print();
    Fraction f5 = f2*f1;
    f4.print();
    f5.print();
    return 0;
}