#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
class student
{
    public:
        int id;
        float gpa;
        char name[99];
};
int main( )
{
    int n,i;
    student s[99];
    cout<<"Enter the total number of student:";
    cin>>n;
    cout<<"\n\nNow enter the information for "<<n<<" student(s)\n\n";
    for(i=0;i<n;i++)
    {
        cout<<"Enter name of student "<<i+1<<" : ";
        fflush(stdin);
        gets(s[i].name);
        cout<<"Enter ID of student "<<i+1<<" : ";
        cin>>s[i].id;
        cout<<"Enter GPA of student "<<i+1<<" : ";
        cin>>s[i].gpa;
        cout<<"\n\n\n";
    }
    cout<<"\n\n\nYour Entered Information is Below.\n\n\n";
     for(i=0;i<n;i++)
    {
        cout<<"Name of student "<<i+1<<" : "<<s[i].name<<endl;
        cout<<"Enter ID of student "<<i+1<<" : "<<s[i].id<<endl;
        cout<<"Enter GPA of student "<<i+1<<" : "<<fixed<<setprecision(2)<<s[i].gpa<<endl;
        cout<<"\n\n\n";
    }
    getch( );
    return 0;
}
