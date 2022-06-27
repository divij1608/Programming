#include<iostream>
using namespace std;
int main()
{
    cout<<"FLOYD TRIANGLE \n";
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<i+j;
        }
        cout<<endl;
    }
    return 0;
}