#include<iostream>
#include<conio.h>
using namespace std;
int main ( )
{
    int a,b,m;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<"Maximum Number=";
    m=(a>b)?a:b;
    cout<<m<<endl;
    //ANOTHER PROCESS
    (a>b)?m=a:m=b;
    cout<<m;
    getch();
    return 0;
}
