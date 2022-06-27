//First Repeating Element using 2 different arrays
#include<stdio.h>
#include<iostream>
#include<math.h>
#include<limits.h>
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
    
    const int N= 1e6+2;
    int id[N];
    for(int i=0;i<N;i++)
    {
        id[i]=-1;
    }
    int minid = INT_MAX;

    for(int i=0;i<N;i++)
    {
        if(id[i] != -1)
        {
            minid = min(minid,id[i]);
        }
    }

    if(minid==INT_MAX)
    {
        cout<<"-1";
    }
    else
    cout<<minid+1<<endl;
    return 0;
}