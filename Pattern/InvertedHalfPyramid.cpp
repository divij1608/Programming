#include<iostream>
using namespace std;
int main()
{
    cout<<"RECTANGLE PATTERN \n";
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=n-i;j>0;j--)
        {
        cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}