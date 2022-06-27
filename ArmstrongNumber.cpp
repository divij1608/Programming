#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;
int main()
{
    int n,a,b,k;int c=0;
    cout<<"Enter number : ";
    cin>>n;
    k=n;
    while(n>0)
    {
        a= n%10;
        b= pow(a,3);
        c= c+b;
        n=n/10;
    }
    if(c==k)
    {
        cout<<"The number is an Armstrong number";
    }
    else
    {
        cout<<"The number is not an Armstrong number "<<c<<" "<<k;
    }
    return 0;
}