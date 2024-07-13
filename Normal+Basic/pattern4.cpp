//THESE PROGRAM WORKS PROPERLY WHEN 0<N<10.
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main ( )
{
    int n,i,j,k;
    cout<<"Enter N:";
    cin>>n;
    j=n;
    for(i=1;i<=n;i++,j--)
    {
        cout<<setw(j);
        for(k=1;k<=i;k++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
