#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main ( )
{
    int y=2,x=2e+5;
    int *p;
    p=&x;
    cout<<x<<"=x"<<endl;
    cout<<*&x<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    getch( );
}
