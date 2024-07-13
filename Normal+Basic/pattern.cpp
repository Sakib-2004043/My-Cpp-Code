//THESE PROGRAM IS VALID FOR 0<n<10.
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main( )
{
    int i,n,j,k;
    cout<<"Enter N:";
    cin>>n;
    j=n*4-5;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=i;k++)
        {
            if(k==n){cout<<"";break;}
            cout<<k<<" ";
        }
        for(k=i;k>=1;k--)
        {
            if(k==i){cout<<setw(j)<<k;continue;}
            cout<<" "<<k;
        }
        j-=4;
        cout<<"\n";
    }
    getch( );
    return 0;
}
