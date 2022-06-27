#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int nums[10];
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    int target;
    cout<<"Enter the value of target";
    cin>>target;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(nums[i]+nums[j] == target)
            {
                cout<<"Verified";
            }
            else
            {
                cout<<"Not verified";
            }
        }
    }
    return 0;
}