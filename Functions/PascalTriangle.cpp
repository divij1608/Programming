#include<iostream>
#include<math.h>
using namespace std;
int Factorial(int n)
{
    int f=1;
    for(int i=2;i<=n;i++)
    {
        f*=i;
    }  
    return f;}


int main()
{
    cout<<"Pascal Triangle of number: \n";
    int k;
    cin>>k;
    for(int i=0;i<k;i++){
        for(int j=0;j<=i;j++){
             cout<<Factorial(i)/(Factorial(j)*Factorial(i-j))<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
