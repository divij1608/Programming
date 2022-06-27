#include<iostream>
#include<math.h>
using namespace std;
int Factorial(int n)
{
    for(int i=n-1;i>0;i--)
    {
        n=n*i;
    }  
    cout<<"Factorial is : \n";
    return n;
}
int main()
{
    cout<<"Factorial of number: \n";
    int k;
    cin>>k;
    cout<<Factorial(k);
    return 0;
}
