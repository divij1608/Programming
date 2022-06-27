//LONGEST ARITHMETIC ARRAY - difference between 2 consecutive elements is same e.g. [1,3,5,7,9]
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value of n \n"<<endl;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int dif = A[1]-A[0];
    int ans=2;
    int j=2;
    int curr=2;
    while(j<n)
    {
        if(dif==A[j]-A[j-1])
        {
            curr++;
        }
        else{
            dif=A[j]-A[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<"\n LONGEST SUBARRAY LENGTH : \n"<<ans;
    return 0;
}