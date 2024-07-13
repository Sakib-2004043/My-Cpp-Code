#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int abc(int,int,int );
int abc(int,int);
float abc(float,float);
int main( )
{
    int x,y,z;
    cout<<"Enter x:";cin>>x;
    cout<<"Enter y:";cin>>y;
    cout<<"Enter z:";cin>>z;
    cout<<abc(x,y,z)<<"\n\n\n";
    cout<<abc(x,y)<<"\n\n\n";
    cout<<abc((float)x,(float)y)<<"\n\n\n";
    getch( );
    return 0;
}
int abc(int p,int q,int r)
{
    cout<<"Summation of x,y,z=";
    return p+q+r;
}
int abc(int p,int q)
{
    cout<<"Summation of x,y=";
    return p+q;
}
float abc(float p,float q)
{
    cout<<"x/y=";
    return p/q;
}
