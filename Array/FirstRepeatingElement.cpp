// First Repeating element
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int n,num=0;
    cout<<"Enter value of n \n"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<"\nFirst repeating element is found at index "<<i<<" with value "<<arr[i]<<endl;
            }
        }
    }
    return 0;
}