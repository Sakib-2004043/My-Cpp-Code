#include<iostream>
#include<conio.h>
//#include<string>
//#include<cstring>
//#include<stdio.h>
using namespace std;
class man
{
    public:
        char nam[99],phn[99];
        float slry;
        void display( )
        {
            cout<<nam<<endl;
            cout<<phn;
        }
        char stvlu(string n,string p,float s,int i)
        {
            cout<<"Name of student number "<<i+1<<" : "<<n<<endl;
            cout<<"Phone Number of student "<<i+1<<" : "<<p<<endl;
            cout<<"Salary of student no "<<i+1<<" : "<<s<<endl;
            cout<<"\n\n\n";
            return 0;
        }
};
int main( )
{
    int i=0,n;
    man m[99];
    cout<<"Enter the total number of people : ";
    cin>>n;
    cout<<"\nNow enter data for "<<n<<" persons.\n\n";
    while(i<n)
    {
        cout<<"Enter the name of person "<<i+1<<" : ";
        fflush(stdin);
        gets(m[i].nam);
        cout<<"Enter phone number:";
        gets(m[i].phn);
        cout<<"Enter salary:";
        cin>>m[i].slry;
        cout<<"\n\n\n";
        i++;
    }
    i=0;
    cout<<"\n\n\n\tYOUR ENTERED DATA IS BELOW.\n\n\n";
    do
    {
        m[i].stvlu(m[i].nam,m[i].phn,m[i].slry,i);
        ++i;
    }while(i<n);
    getch( );
    return 0;
}
