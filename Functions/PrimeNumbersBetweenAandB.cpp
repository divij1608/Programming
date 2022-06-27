#include<iostream>
#include<math.h>
using namespace std;

bool Prime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    cout<<"Print all prime numbers between 2 numbers : ";
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(Prime(i))
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
