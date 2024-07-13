#include<iostream>
#include<conio.h>
using namespace std;
int sum(int,int);
int main( )
{
    int x,y,m;
    cout<<"Enter two numbers:\n";
    cin>>x>>y;
    m=sum(x,y);
    cout<<"Multiplication="<<m;
    getch( );
}
int sum(int a,int b)
{
    return a*b;
}
