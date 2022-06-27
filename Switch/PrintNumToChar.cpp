#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b,n;
    cin>>a>>b;
    n=a;
    while(n<=b)
    {
        switch(n)
    {
        case 1: cout<<"one ";
        break;
        case 2: cout<<"two ";
        break;
        case 3: cout<<"three ";
        break;
        case 4: cout<<"four ";
        break;
        case 5: cout<<"five ";
        break;
        case 6: cout<<"six ";
        break;
        case 7: cout<<"seven ";
        break;
        case 8: cout<<"eight ";
        break;
        case 9: cout<<"nine ";
        break;
        default: if(n%2==0)
        {
            cout<<"even ";
        }
        else 
        {
            cout<<"odd ";
        }
    }
        n++;
    }
    return 0;
}