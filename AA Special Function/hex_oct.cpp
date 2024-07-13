#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;        // Some Problem is Here.
int main()
{
    long long hexadecimal,octal;

    // Taking input of an Hexadecimal Number >>>
    cout<<"Enter Hexadecimal Number : ";
    scanf("%x",&hexadecimal);
    cout<<"\nYour Entered number in Hexadecimal Form : "<<hex<<hexadecimal<<endl;
    cout<<"Your  Entered number  in  Decimal  Form : "<<dec<<hexadecimal<<endl;
    cout<<"Your  Entered number   in  Octal   Form : "<<oct<<hexadecimal<<endl;

    // Taking input of an Octal Number >>>
    cout<<"\n\n\nEnter Octal Number : ";
    cin>>oct>>octal;
    cout<<"\nYour Entered number in Hexadecimal Form : "<<hex<<octal<<endl;
    cout<<"Your  Entered  number in  Decimal  Form : "<<dec<<octal<<endl;
    cout<<"Your  Entered   number in  Octal   Form : "<<oct<<octal<<endl;
    return 0;
}
