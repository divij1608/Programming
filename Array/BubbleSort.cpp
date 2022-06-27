#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void BubbleSort(int arr[],int n)
{
    int i,j,min,counter=1;
    while(counter < n){
    for(int i=0;i<n-counter;i++)
    {
        {
            if(arr[i+1]<arr[i])
            {
                swap(arr[i+1],arr[i]);
            }
            
        }

    }
    counter++;
    }
}

void PrintArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
}

int main()
{
    int n;
    cout<<"enter the number of elements in array \n";
    cin>>n;
    cout<<"enter the elements of array";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    BubbleSort(arr,n);
    cout<<"\n Sorted Array : \n";
    PrintArray(arr,n);
    return 0;
}