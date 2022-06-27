#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n-i;j>0;j--)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<i-j+1;
        }
        for(int j=0;j<i;j++)
        {
            if(j>0){
                cout<<1+j;
            }
        }
        cout<<endl;
    }
}