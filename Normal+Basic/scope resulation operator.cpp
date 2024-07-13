#include<iostream>
#include<conio.h>
using namespace std;
int x=10;
int main( )
{
    int x=20;
    cout<<"Local Value="<<x<<endl;
    cout<<"Global Value="<<::x<<endl;
    ::x=30;//CHANGING OF GLOBAL VALUE
    cout<<"Changed Global Value="<<::x;
    getch( );
    return 0;
}
