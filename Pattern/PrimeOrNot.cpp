#include<iostream>
using namespace std;
int main()
{
    int n,f=2;
    cout<<"Enter the number";
    cin>>n;
    while(f<n){
    if(n%f==0)
    {
        cout<<n<<" is not a Prime Number \n";
        break;
    }
    else
    {
        f++;
    }

    }
    return 0;
}