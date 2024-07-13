//NAMOTA ER SERIES
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main ( )
{
    int i,n;
    cout <<"It is a program for multiplication table(NAMOTA).";
    cout<<"\nEnter n:";
    cin>>n;
    for(i=1;i<=10;i++)
    {
        if(i<10){cout<<" ";}
        cout<<n<<"x"<<i;
        cout<<"="<<n*i<<endl;
    }
    getch();
    return 0;
}
