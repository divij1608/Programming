#include<iostream>
using namespace std;
int main()
{
int n;
int A[n];
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>A[i];
}
int B[n];
for(int i=0;i<n;i++)
{
    for(int j=i;j>=0;j--)
{
    B[i]+=A[j];
}
}
for(int i=0;i<n;i++)
{
    cout<<B[i]<<endl;
}
    return 0;
}
