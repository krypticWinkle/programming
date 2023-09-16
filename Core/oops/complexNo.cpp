#include<bits/stdc++.h>
using namespace std;

class Complex
{
    private:
    int real, imaginary;

    public:
    void display()
    {
        cout<<this->real<<" + "<<this->imaginary<<"i\n";
    }
    Complex(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    void plus(const Complex &c2)
    {
        this->real += c2.real;
        this->imaginary += c2.imaginary;
    }

    void into(const Complex &c2)
    {
        int realPart = this->real * c2.real + (this->imaginary * c2.imaginary * -1);
        int imaginaryPart = this->real * c2.imaginary + (this->imaginary * c2.real);

        this->real = realPart; this->imaginary = imaginaryPart;
    }
};

int main()
{
    class Complex c1(3, 4);
    class Complex c2(10, 16);
    //c1.plus(c2);
    c1.into(c2);
    c1.display();
    return 0;
}