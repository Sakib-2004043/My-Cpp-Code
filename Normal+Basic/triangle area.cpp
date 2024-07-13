#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main ( )
{
    float base,height,area;
    cout<<"Enter Base:";
    cin>>base;
    cout<<"Enter Height:";
    cin>>height;
    area=base*height*0.5;
    cout<<"Area of triangle:"<<fixed<<setprecision(5)<<area;
    getch ( );
    return 0;
}
