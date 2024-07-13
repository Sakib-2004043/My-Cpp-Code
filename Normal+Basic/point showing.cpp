#include<iostream>
#include<conio.h>
#include<iomanip>//Special Header File
using namespace std;
int main( )
{
     float a;
     a=2000.3/3;
     cout<<setprecision(7)<<a<<endl;
     cout<<fixed<<setprecision(7)<<a;
     getch( );
     return 0;
}
