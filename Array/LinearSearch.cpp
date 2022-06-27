#include<iostream>
using namespace std;
int main()
{
    int key;
    int n;
    cout<<"Enter Size of array"<<endl;
    cin>>n;
    cout<<"Enter element to be found"<<endl;
    cin>>key;
    int array[n];

    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    for(int i=0;i<n;i++)
    {
        if(array[i]==key)
        {
            cout<<"Element "<<key<<" found at index "<<i<<endl;
        }
    }
    return 0;
}