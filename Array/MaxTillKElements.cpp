#include<iostream>
using namespace std;

int Max(int k,int arr[])
{
    int max=arr[0];
    for(int i=0;i<k;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}

int Maximum(int k,int arr[])
{
    int mx=-1999999;
    for(int i=0;i<k;i++)
    {
        mx= max(mx,arr[i]);
    }
    return mx;
}

int main()
{
    int n,k;
    int arr[n];
    cout<<"Enter the total number of elements : ";
    cin>>n;
    cout<<"\nEnter all elements of the array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
 
    }
    cout<<"\nEnter the element till where max is to be found : ";
    cin>>k;
    cout<<Max(k,arr)<<endl;
    cout<<Maximum(k,arr);
    return 0;
}