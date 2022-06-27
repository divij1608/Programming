#include<iostream>
using namespace std;
int main(){
    cout<<"PRINT ALL PRIME NUMBERS BETWEEN A AND B";
    int a,b,i,j;
    cout<<"Enter the range (values of a and b): ";
    cin>>a>>b;
    cout<<endl;
    for(i=a;i<b;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                cout<<i<<" Not Prime \n";
                break;
            }            
        }
        if(i==j){
            cout<<i<<" is prime \n";
        }
    }
return 0;
}
