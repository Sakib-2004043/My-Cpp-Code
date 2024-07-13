#include<iostream>
#include<conio.h>
using namespace std;
int main( )
{
    int r,x=0,n;
    cout<<"Enter N:";
    cin>>n;
    vv:
    x++;
    r=rand();
    cout<<r<<endl;
    if(r==n)
        {
            cout<<"\n\n\n\nRound="<<x<<"\n\n\n\n\n\n\n";
            goto mm;
        }
    goto vv;
    mm:
    getch();
    return 0;
}
