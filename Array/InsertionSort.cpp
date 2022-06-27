#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void InsertionSort(int arr[],int n)
{
    int i,j;
    for(int i=1;i<n;i++)
    {
        int current = arr[i];
        j=i-1;
        while(arr[j] < current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
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

    InsertionSort(arr,n);
    cout<<"\n Sorted Array : \n";
    PrintArray(arr,n);
    return 0;
}