#include<iostream>
#include<conio.h>
void addition(int,int); //DECLARING FUNCTION PROTOTYPE
using namespace std;
int main ( )
{
    int x,y;
    cout<<"<PROGRAMME OF SUMMATION>\n\n";
    vv:
    cout<<"Enter two numbers:\n";
    cin>>x>>y;

    addition(x,y);
    goto vv;

    getch();
}
void addition(int a,int b)
{
    int sum=a+b;
    cout<<"Summation="<<sum<<endl;
    cout<<"\n\n\n";
}
