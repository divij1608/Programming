#include<iostream>
#include<math.h>
using namespace std;
int Factorial(int n)
{
    for(int i=n-1;i>0;i--)
    {
        n=n*i;
    }  
    return n;
}

int main()
{
    cout<<"Binary Coefficient of number: \n";
    int n,r;
    cin>>n>>r;
    cout<<Factorial(n)/(Factorial(r)*Factorial(n-r));
    return 0;
}
