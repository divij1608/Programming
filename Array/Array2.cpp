#include<iostream>
using namespace std;

int main()
{
    int n;
    int max= 0;
    int min;
    cout<<"Maximum and Minimum element in array \n";
    cout<<"Enter number of elements in array \n"; 
    cin>>n;

    int arr[n];
    min=arr[0];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Elements of array are :\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(int i=1;i<n;i++){
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"max element in array: "<<max<<" "<<"Min element in array: "<<min;
    return 0;
}