//First Repeating Element using 2 different arrays
#include<stdio.h>
#include<iostream>
#include<limits.h>
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
    const int K= 1e6+2;
    int id[K];
    for(int i=0;i<K;i++)
    {
        id[i]=-1;
    }

    int minid = INT_MAX;
    for(int i=0;i<K;i++)
    {
        if(id[arr[i]] != -1)
        {
            minid = min(minid,id[arr[i]]);
        }
        else
        {
            id[arr[i]]=i;
        }
    }

    if(minid==INT_MAX)
    {
        cout<<"-1";
    }
    else
    {
    cout<<minid+1<<endl;
    }
    return 0;
}