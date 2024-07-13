#include<iostream>
using namespace std;
int main ( )
{
   int x=30,y=25;
   cout<<"Enter two value to swap : "<<endl;
   cout<<"Enter X : ";
   cin>>x;
   cout<<"Enter Y : ";
   cin>>y;
   cout<<"\n\nGiven values :->\n";
   cout<<"X = "<<x<<endl;
   cout<<"Y = "<<y<<endl;
   swap(x,y);
   cout<<"\n\nSwaped values :->\n";
   cout<<"X = "<<x<<endl;
   cout<<"Y = "<<y<<endl;
   return 0;
}
