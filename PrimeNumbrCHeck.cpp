#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter number : ";
    cin>>n;
    bool flag = 0;
    for(i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<"The number is divisible by "<<i<<" hence it is not prime \n ";
            flag =1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<" The number is prime";
    }
   return 0;
}