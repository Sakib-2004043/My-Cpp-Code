#include<iostream>
#include<conio.h>
using namespace std;
int main ( )
{
    int a,b,n;
    char c;
    cc:
    cout<<"Which shift do you want?\n";
    cout<<"Press 'r' for right shift or press 'l' for left shift:";
    cin>>c;
    if(c=='r')
        {
            cout<<"Now enter a number to shift:";
            cin>>a;
            cout<<"Enter the room size for right shifting:";
            cin>>n;
            b=a>>n;
            cout<<b;
        }
     else if(c=='l')
        {
            cout<<"Now enter a number to shift:";
            cin>>a;
            cout<<"Enter the room size for left shifting:";
            cin>>n;
            b=a<<n;
            cout<<b;
        }
     else
       {
            cout<<"ERROR OCCURER. \n\n\n";
            goto cc;
       }
     getch( );
     return 0;
}
