#include<iostream>
using namespace std;

int main()
{
    int n,f;
    cout<<"Enter the number: \n";
    cin>>n;

    for(f=2;f<n;f++){
        if(n%f==0)
        {
            cout<<n<<" is not a prime number";
            break;
        }
    }
        if(f==n)
        {
            cout<<n<<" is a prime number";
        }
    return 0;
}