//Record Breaker is no. of visitors > no. or visitors on all previous days and also following day should have less visitors
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int n,num=0;
    cout<<"Enter value of n \n"<<endl;
    cin>>n;
    int V[n];
    for(int i=0;i<n;i++)
    {
        cin>>V[i];
    }
    int max=V[0];
    for(int i=0;i<n;i++)
    {
        if(V[i]>max)
        {
            max = V[i];
            {
                if(max>V[i+1])
                {
                    num++;
                }
            }
        }
    }
    cout<<endl<<num;    
    return 0;
}