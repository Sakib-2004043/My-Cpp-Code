#include<bits/stdc++.h>
using namespace std;

namespace n1      //Creating Namespace.
{
   int z;
   int sum(int x,int y)
   {
      y+=z;
      x+=y;
      return x;
   }
}
void f1(int x,int y,int z)       //Using Scope Resolution Operator.
{
   cout<<"\n\nWithout using Namespace : \n";
   n1::z = z;
   cout<<"Summation : "<<n1::sum(x,y);
}
void f2(int x,int y,int z)        //Without Using Scope Resolution Operator.
{
   using namespace n1;
   cout<<"\n\nUsing Namespace : \n";
   z = z;                                                 // Something Special HERE
   cout<<"Summation : "<<sum(x,y);
}
int main()
{
   int x,y,z;
   cout<<"Enter Three Number : ";
   cin>>x>>y>>z;
   f1(x,y,z);
   f2(x,y,z);
   cout<<"\n\n";
   return 0;
}

