#include<iostream>
#include<math.h>
using namespace std;
int PythagorianTriplet(int a,int b,int c)
{
    int max=0;
    if(a>b)
    {
        if(a>c)
        {
            if(pow(a,2)==pow(b,2)+pow(c,2))
            {
                cout<<"It is a Pythagorian Triplet";
            }
            else
            {
                cout<<"It is not a Pythagorian Triplet";
            }
        }
        else
        {
             if(pow(c,2)==pow(b,2)+pow(a,2))
            {
                cout<<"It is a Pythagorian Triplet";
            }
            else
            {
                cout<<"It is not a Pythagorian Triplet";
            }
        }
    }
    else
    {
        if(b>c)
        {
            if(pow(b,2)==pow(a,2)+pow(c,2))
            {
                cout<<"It is a Pythagorian Triplet";
            }
            else
            {
                cout<<"It is not a Pythagorian Triplet";
            }
        }
        else
        {
             if(pow(c,2)==pow(b,2)+pow(a,2))
            {
                cout<<"It is a Pythagorian Triplet";
            }
            else
            {
                cout<<"It is not a Pythagorian Triplet";
            }
        }
    }
    return NULL;
}

int main()
{
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<PythagorianTriplet(a,b,c);
    return 0;
}