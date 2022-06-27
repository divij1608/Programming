#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter value of n \n"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int num=0,total=0;
    for(int i=0;i<n;i++)
    {
        num=0;
        
        for(int j=i;j<n;j++)
        {
            num+=arr[j];
            cout<<num<<endl;
            total++;
        }
    }
    cout<<"\n Total subarrays = (n*(n+1))/2 \n"<<total;
    return 0;
}