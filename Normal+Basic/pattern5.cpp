#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main ( )
{
    int n,i,j,k,g,gg,kk;
    char c;
    nn:
    cout<<"Enter any character:";
    cin>>c;
    cout<<"Enter N:";
    cin>>n;
    cout<<"\n\n\n";
    --n;
    gg=n;
    kk=2;
    for(i=1;i<=n;i++,gg--,kk+=2)
    {
        for(g=1;g<=gg;g++){cout<<" ";}
        if(i==1){cout<<" "<<c;}
        else{cout<<c;}
        if(i==1){cout<<endl;continue;}
        for(g=1;g<=kk-1;g++){cout<<" ";}
        cout<<c<<endl;
    }
    for(i=1;i<=n+2;i++){cout<<c<<" ";}
    cout<<"\n\n\n";
    goto nn;

    getch( );
}
