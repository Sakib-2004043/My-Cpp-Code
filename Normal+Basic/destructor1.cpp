#include<iostream>
using namespace std;
class man
{
public:
   int id;
   string name;
   ~man( )
   {

   }

};
int main( )
{
   man m1;
   cout<<"Enter Name : ";
   fflush(stdin);
   cin>>(m1.name);
   cout<<"Enter ID : ";
   cin>>m1.id;
   m1;
   cout<<m1.name;
}
