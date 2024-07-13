#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main( )
{
    int n,i,j,k;
    cout<<"Enter N:";
    cin>>n;
    k=n;
    for(i=1;i<=n;i++)
    {
        cout<<setw(i*2);
        for(j=k;j>=1;j--)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        k--;
    }
    getch();
    return 0;
}
