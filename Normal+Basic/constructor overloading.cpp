#include<iostream>
using namespace std;
class person
{
public:
   string name;
   int id;
   person(int id)
   {
      cout<<"ID at element \"Haq\" : "<<id<<"\n\n\n";
   }
   person(string name)
   {
      cout<<"Name at element \"Sam\" : "<<name<<"\n\n\n";
   }
   person(string name,int id)
   {
      cout<<"Name at element \"Fahad\" : "<<name<<"\n";
      cout<<" Id  at element \"Fahad\" : "<<id<<"\n\n\n";
   }
   person()
   {
      cout<<"It is default constructor which is called for element \"Abir\"\n\n\n\n ";
   }
};
int main( )
{
   person Haq(2004563), Sam("Samiul Hasan."),Fahad("Fahidul Islam",2001569),Abir;
   //Here three element of person class calling same constructor.
   return 0;
}
