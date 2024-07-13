//It is example of parameterized constructor.
#include<iostream>
using namespace std;
class student
{
public:
   string name;
   int id;
   double gpa;
   student(string s,int x ,double y)   //It is mainly constructor.
   {                                                    //It is mainly use to initialize the value of class element.
      name=s;                                    //This function is initializing the vlaue of 'sakib' class element.
      id=x;                                          //Its name is same to class element name.
      gpa=y;                                       //It has no return type not even void.
   }
   display( )
   {
      cout<<"Name : "<<name<<endl;
      cout<<"ID  = "<<id<<endl;
      cout<<"GPA = "<<gpa<<"\n\n\n";
   }
};
void display_out(string name,int id,double gpa)
{
      cout<<"Name : "<<name<<endl;
      cout<<"ID  = "<<id<<endl;
      cout<<"GPA = "<<gpa<<"\n\n\n";
}
int main( )
{
   int i,n;
   student sakib("Sakibul Hasan.",2004043,4.75);
   cout<<"Student Information.\n\n\n";
   cout<<"Output by display_in function:\n";
   sakib.display();
   cout<<"Output by display_out function:\n";
   display_out(sakib.name,sakib.id,sakib.gpa);
}
