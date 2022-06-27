#include<iostream>
using namespace std;
int main()
{
    cout<<"RECTANGLE PATTERN \n";
    int a,b;
    cout<<"Enter number of rows: ";
    cin>>a;
    cout<<"Enter number of columns: ";
    cin>>b;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(i>0 && i<a-1 && j>0 && j<b-1)
            {cout<<" ";}
            else
            {cout<<"*";}
        }
        cout<<endl;
    }
    return 0;
}