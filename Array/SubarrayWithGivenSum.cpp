//SubArray with given Sum
#include<stdio.h>
#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int n,s,sum=0;
    cout<<"Enter value of n \n"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\n Enter the sum of subarray needed \n";
    cin>>s;
    int st=-1;
    int en=-1;
    int j=0,i=0;
    while(j<n && sum+arr[j]<=s)
    {
             sum+=arr[j];
             j++;
    }
    if(sum==s)
    {
        cout<<endl<<i+1<<"  "<<j<<endl;
        return 0;
    }
    while(j<n)
    {
        sum+=arr[j];
        while(sum>s)
        {
            sum-=arr[i];
            i++;
        }
        if(sum==s)
        {
            st=i+1;
            en=j+1;
            break;
        }
        j++;
    }
    cout<<endl<<st<<" "<<en<<endl;
    return 0;
}