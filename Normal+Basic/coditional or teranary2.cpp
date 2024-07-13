#include<iostream>
#include<conio.h>
using namespace std;
int main( )
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Entered number is ";
    (n%2==0)?cout<<"Even.":cout<<"Odd.";
    getch();
}
