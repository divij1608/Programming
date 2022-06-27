#include<iostream>
using namespace std;
int sumfunction(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+= i;
    }
    return sum;
}
int sumfunction2(int n){
    int sum;
    sum = (n*(n+1))/2;
    return sum;
}
int main()
{
    cout<<"Sum of first n natural numbers \n";
    int n;
    cout<<"Enter numbers :";
    cin>>n;
    cout<<sumfunction(n)<<endl;
    cout<<sumfunction2(n);
    return 0;
}