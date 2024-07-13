#include<iostream>
#include<conio.h>
using namespace std;
int main( )
{
    char name[99][999];
    int i,n;
    cout<<"Enter the total number of student : ";
    cin>>n;
    cout<<"\nNow enter the name of  '"<<n<<"' student(s)\n\n";
    for(i=0;i<n;i++)
    {
        cout<<"Enter the name of student number "<<i+1<<":";
        fflush(stdin);
        gets(name[i]);
    }
    cout<<"\n\n\n<YOU ENTERED>\n\n\n";
     for(i=0;i<n;i++)
    {
        cout<<"Name of student number "<<i+1<<":"<<name[i]<<endl;
    }
    getch();
    return 0;
}
