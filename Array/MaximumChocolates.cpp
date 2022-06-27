// Maximum Chocolates question
// Money is given, price of chocolates is given and 3 wrappers can be exchanged with one chocolate

#include<iostream>
using namespace std;

int main()
{
    int num,price,amt,wrappers,extra=0,wrap;
    cout<<"Enter the number of wrappers per chocolate \n";
    cin>>wrap;
    cout<<"\nEnter the price per chocolate \n";
    cin>>price;
    cout<<"\nEnter the amount of money\n";
    cin>>amt;
    wrappers= amt/price;
    num = amt/price;
    while(wrappers != 0)
    {
    num+= wrappers/wrap;
    extra+=wrappers%wrap;
    wrappers = (wrappers)/wrap;
    }
    num = num + extra/wrap;
    cout<<" \n Number of chocolates: "<<num;
    return 0;
}