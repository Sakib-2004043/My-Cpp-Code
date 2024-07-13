#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main ( )
{
    int i,j,k,n;
    char c;
    cout<<"Enter a character:";
    cin>>c;
    cout<<"Now Enter N:";
    cin>>n;
    k=n;
    for(i=1;i<=n;i++,k--)
    {
        for(j=2;j<=i;j++){cout<<"  ";}
        cout<<c;
        for(j=k*2;j>=1;j--){cout<<"  ";}
        cout<<c<<endl;
    }
    for(j=1;j<=n;j++){cout<<"  ";}
    cout<<c<<endl;
    k=n;
    for(i=1;i<=n;i++,k--)
    {
        for(j=k*2-2;j>=1;j--){cout<<" ";}
        cout<<c;
         for(j=2;j<=i*2+1;j++){cout<<"  ";}
        cout<<c<<endl;
    }
    getch();
    return 0;
}
