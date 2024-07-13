#include<iostream>
#include<conio.h>
using namespace std;
int main ( )
{
    int x,y,s;
    cout<<"Enter two integer number: \n";
    cin>>x>>y;
    int *p1,*p2;
    p1=&x;
    p2=&y;
    s=*p1+*p2;
    cout<<"\nSummation="<<s<<endl;
    getch( );
}
