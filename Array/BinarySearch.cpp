#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n, int key)
{
    int s=0,e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter number of elements in array \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        cout<<endl;
    }
    int key;
    cout<<"Enter the element to be searched \n";
    cin>>key;
    cout<<endl<<" Output ";
    cout<<BinarySearch(arr,n,key);
    return 0;
}