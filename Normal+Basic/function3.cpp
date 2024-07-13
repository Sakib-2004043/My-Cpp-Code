#include<iostream>
#include<conio.h>
using namespace std;
int sum(int,int);
int sub(int,int);
int mult(int,int);
float di(float,float);

int main( )
{
    int a,b,r;
    float f;
    char c;
    cout<<"Enter two numbers:\n";
    cin>>a>>b;
    cout<<"Now enter an operator(+,-,x,/):";
    cin>>c;
    switch(c)
    {
    case '+':
       r=sum(a,b);
       cout<<"Summation="<<r;
       break;
    case '-':
       r=sub(a,b);
       cout<<"Subtraction="<<r;
       break;
    case 'x':
        r=mult(a,b);
        cout<<"Multiplication="<<r;
        break;
    case '/':
        f=di((float)a,(float)b);
        cout<<"Division="<<f;
        break;
    default:
        cout<<"\n\nError Occurred";
        break;
    }
    getch( );
}
int sum(int x,int y)
{
    return x+y;
}
int sub(int x,int y)
{
    return x-y;
}
int mult(int x,int y)
{
    return x*y;
}
float di(float x,float y)
{
    return x/y;
}
