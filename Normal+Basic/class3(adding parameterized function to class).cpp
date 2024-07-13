#include<iostream>
#include<cstring>
using namespace std;
class c
{
public:
   string nam,adrs;
   int rol;
};
void display(string n,int r,string a,int i)
{
   cout<<"Name of student "<<i+1<<" : "<<n<<endl;
   cout<<"Roll of student "<<i+1<<" : "<<r<<endl;
   cout<<"Address of student "<<i+1<<" : "<<a<<"\n\n\n";
}
int main( )
{
   int n,i;
   c s[99];
   cout<<"Enter the number of student : ";
   cin>>n;
   cout<<"\n\n\t\tNow Enter Data for student.\n\n";
   for(i=0;i<n;i++)
   {
      cout<<"Enter name of student "<<i+1<<" : ";
      fflush(stdin);
      scanf("%s",&0s[i].nam);
      cout<<"Enter roll of student "<<i+1<<" : ";
      cin>>s[i].rol;
      cout<<"Enter address of student "<<i+1<<" : ";
      scanf("%s",&s[i].adrs);
      cout<<"\n\n\n";
   }
   for(i=0;i<n;i++)
   {
      cout<<"\t\tData of student : "<<i+1<<endl;
      display(s[i].nam,s[i].rol,s[i].adrs,i);
   }
   return 0;
}
