#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void SelectionSort(int arr[],int n)
{
    int i,j,min;
    for(int i=0;i<n-1;i++)
    {
        min = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
                swap(arr[min],arr[i]);
            }
        }
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

    SelectionSort(arr,n);
    cout<<"\n Sorted Array : \n";
    PrintArray(arr,n);
    return 0;
}