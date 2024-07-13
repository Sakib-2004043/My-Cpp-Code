#include<iostream>
#include<conio.h>
using namespace std;
//void int value(int);
//int refrnc(int);
int value(int a)
{
    a=15;
}
int refrnc(int *b)
{
    *b=30;
}
int main( )
{
    int x=10,y=20;
    cout<<"PASS BY VALUE\t(Passing only Value)\n";
    cout<<"Value of x before calling function is "<<x<<endl;
    value(x);//PASS BY VALUE
    cout<<"Value of x after calling function is "<<x<<endl<<endl;
    cout<<"PASS BY REFERNCE\t(Passing of Memory Address)\n";
    cout<<"Value of y before calling function is "<<y<<endl;
    refrnc(&y);//PASS BY REFERNCE
    cout<<"Value of y after calling function is "<<y<<endl;
    getch();
    return 0;
}

