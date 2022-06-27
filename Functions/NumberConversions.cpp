#include<iostream>
using namespace std;



int main()
{
    cout<<"conversions"<<endl;
    cout<<"MENU"<<endl;
    cout<<"1. Binary to Decimal"<<endl<<"2.Octal to Decimal"<<endl<<"3. Hex to Decimal"<<endl<<"4. Decimal to Binary"<<endl<<"5. Decimal to Octal"<<endl<<"6. Decimal to Hex";
    int ch,num;
    cout<<"Enter number :"<<endl;
    cin>>num;
    cout<<"Enter Choice :"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:
        cout<<"Binary to Decimal";
        for(int i=0;i<to_string(num).length();)
        break;

        case 2:
        cout<<"Octal to Decimal";
        break;

        case 3:
        cout<<"Hex to Decimal";
        break;

        case 4:
        cout<<"Decimal to Binary";
        break;

        case 5:
        cout<<"Decimal to Octal";
        break;

        case 6:
        cout<<"Decimal to Hex";
        break;

    }

}