#include<iostream>
using namespace std;
int main ( )
{
   int x,y;
   cout<<"Enter two numbers : \n";
   cin>>x>>y;
   cout<<"Maximum number = "<<max(x,y)<<endl;
   cout<<"Minimum number = "<<min(x,y)<<endl;
   return 0;
}
