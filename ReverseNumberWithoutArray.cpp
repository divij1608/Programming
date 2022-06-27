#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i,a;
    cout<<"Enter number : ";
    cin>>n;
    
    while(n>0)
    {
        a+= n%10;
        n=n/10;
        a= a*10;
    }
    cout<<a/10;
    return 0;
}