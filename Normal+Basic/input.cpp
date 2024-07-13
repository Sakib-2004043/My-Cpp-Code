#include<iostream>
#include<conio.h>
using namespace std;
int main ( )
{
    int a;
    char b,s[9999];
    float c;
    double d;
    cout<<"Enter integer number:";
    cin>>a;
    cout<<"Enter character:";
    cin>>b;
    cout<<"Enter floating point number:";
    cin>>c;
    cout<<"Enter long integer number:";
    cin>>d;
    cout<<"Enter string:";
    cin>>s;
    cout<<"\n\n\t<YOU ENTERED>\n\n";
    cout<<"Integer="<<a<<endl;
    cout<<"Character="<<b<<endl;
    cout<<"Floating Number="<<c<<endl;
    cout<<"Long Integer="<<d<<endl;
    cout<<"String="<<s<<endl;
    getch( );
    return 0;
}
