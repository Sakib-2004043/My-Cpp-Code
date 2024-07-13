#include<iostream>
#include<conio.h>
using namespace std;
class person
{
    public:
        int srl;
        char nam[99],adrs[99],phn[15];
        float slry;
        void display(int i)
        {
            cout<<"Name of person "<<i+1<<" : "<<nam<<endl;
            cout<<"Enter phone number of person "<<i+1<<" : "<<phn<<endl;
            cout<<"Enter salary of person "<<i+1<<" : "<<slry<<endl;
            cout<<"Enter address of person "<<i+1<<" : "<<adrs<<endl;
        }
};
int main( )
{
    int i=0,n;
    person p[99];
    cout<<"Enter total number of person:";
    cin>>n;
    do
    {
        cout<<"\n\nEnter name of person "<<i+1<<" : " ;
        fflush(stdin);
        gets(p[i].nam);
        cout<<"Enter phone number of person "<<i+1<<" : " ;
        cin>>p[i].phn;
        cout<<"Enter salary of person "<<i+1<<" : " ;
        cin>>p[i].slry;
        cout<<"Enter address of person "<<i+1<<" : " ;
        fflush(stdin);
        gets(p[i].adrs);
        i++;
    }while(i<n);
    cout<<"\n\n\n\tYOUR ENTERED DATA IS BELOW.\n\n\n";
    i=0;
    while(i<n)
    {
        cout<<"\n\n";
        p[i].display(i);
        i++;
    }
    getch( );
    return 0;
}
