///Using Display Function is more EASYER than it.

#include<bits/stdc++.h>
using namespace std;
class stdnt
{
   public:
      char nam[99];
      int id;
      double gpa;
      void vlu_pass(string x,int y,double z)
      {
         cout<<"Name : "<<x;
         cout<<"\nID   : "<<y;
         cout<<"\nGPA  : "<<z;
      }
};
int main()
{
   int i,n;
   printf("Enter total number of student : ");
   cin>>n;
   stdnt s[n];
   cout<<"Now enter information.\n";
   for(i=0;i<n;i++)
   {
      cout<<"\nStudent : "<<i+1<<" :->\n";
      cout<<"Name : ";
      fflush(stdin);
      gets(s[i].nam);
      cout<<"ID   : ";
      cin>>s[i].id;
      cout<<"GPA  : ";
      cin>>s[i].gpa;
   }
   cout<<"\t\tEntered Data :->\n";
   for(i=0;i<n;i++)
   {
      cout<<"\n\nStudent : "<<i+1<<" :->\n";
      s[i].vlu_pass(s[i].nam , s[i].id , s[i].gpa);
   }
   return 0;
}
