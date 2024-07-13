///Constructor Overloading.
#include<bits/stdc++.h>
using namespace std;
class stdnt
{
   public:
      int id;
      double gpa;
      stdnt(int x,double y)//Constructor(Parameter)
      {
         cout<<"1.Parameterized Constructor\n";
         cout<<"  ID  : "<<x<<"\n  GPA : "<<y<<endl;
      }
      stdnt()
      {
         cout<<"\n2.Default Constructor.\n\n";
      }
};
int main()
{
   int id;
   double gpa;
   cout<<"Enter  ID : ";
   cin>>id;
   cout<<"Enter GPA : ";
   cin>>gpa;
   cout<<"\n\nOUTPUT : \n\n";
   stdnt(id,gpa);
   stdnt();
   return 0;
}
