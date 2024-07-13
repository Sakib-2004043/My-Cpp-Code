#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main( )
{
    int a,b=355,c=9;
    float d;
    a=b/c;
    cout<<"Without Type casting="<<a<<"\n\n";
    d=(float)b/c;
    cout<<"With Type Casting="<<d<<"\n\n";
    d=b/c;
    cout<<"Without Type casting="<<d<<"\n\nData Type of 'b' is not changed.";
    getch( );
    return 0;
}
