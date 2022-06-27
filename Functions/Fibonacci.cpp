#include<iostream>
#include<math.h>
using namespace std;

void Fibonacci(int n)
{
    int a=0;
    int b=1;
    int num=0;
    for(int i=1;i<=n;i++)
    {
        cout<<num;
        num=a+b;
        a=b;
        b=num;   
    
    }  
}
int main()
{
    cout<<"Fibonacci Series: ";
    int k;
    cin>>k;
    Fibonacci(k);
    return 0;
}
