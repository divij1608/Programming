#include<iostream>
using namespace std;
int main()
{
    cout<<"BUTTERFLY PATTERN \n";
    int n;
    cout<<"Enter N : ";
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
                cout<<"*";   
        }
        int s= 8 -2*(i+1);
        for(int j=1;j<=s;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
                cout<<"*";   
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++)
    {
     for(int j=n-i;j>0;j--)
        {
            cout<<"*";
        }
    
    for(int j=0;j< 2*i;j++)
    {
        cout<<" ";
    }
    for(int j=n-i;j>0;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}