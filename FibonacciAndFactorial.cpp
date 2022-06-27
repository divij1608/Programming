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
        case 1: {
            cout<<"Factorial of N : ";
        int a=1;
        for(int i=n;i>0;i--)
        {
            a*=i;
        }
        cout<<a;}
        break;
        case 2: cout<<"Fibonacci series : ";
        int c=1,b=1;
        for(int i=0;i<n;i++){
        if(i==1)
        {cout<<"0";}
        else if(i==2)
        {cout<<"1";}
        else{
            c=c+b;
            b=b+c;
            cout<<c<<" ";
        }}
        break; 
    }   
    return 0;
}