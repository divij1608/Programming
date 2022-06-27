#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;
int main()
{
    int n,ch;  
    cout<<"Enter number : \n";
    cin>>n;
    cout<<"Enter choice : \n";
    cin>>ch;
    switch(ch)
    {
        case 1: cout<<"Factorial of N : ";
        int a=0;
        for(int i=0;i<n;i++)
        {
            a*=i;
        }
        cout<<a;
        break;
    }   
    return 0;
}