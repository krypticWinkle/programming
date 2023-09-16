#include<bits/stdc++.h>
using namespace std;

//make data structure for a shop if there are [items & prices], cust name, item colors

class Product
{
    private:
    string item_name, customer_name, items_color;
    int price;

    Product(string item_name, string customer_name, string items_color, int price)
    {
        this->customer_name = customer_name;
        this->item_name = item_name;
        this->items_color = items_color;

        this->price = price;
    }

    int getPrice()
    {
        return price;
    }
};


int main()
{
    Product p1();


    return 0;
}