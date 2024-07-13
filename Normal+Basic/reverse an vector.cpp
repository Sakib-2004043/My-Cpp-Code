#include<iostream>
#include<vector>
#include<conio.h>
#include<algorithm>//This Header File is needed to run "reverse( )" function.
using namespace std;
int main( )
{
   vector<int>v={1,2,3,4,5,7,8,9,10,11,12,13,14,15};
   int i,l,f;
   cout<<"Given array : \n";
   for(int un : v)cout<<v[i++]<<"\t";i=0;

   reverse(v.begin(),v.end());//These function reverse the array.
   cout<<"\n\nReversed array : \n";
   for(int un : v)cout<<v[i++]<<"\t";i=0;
   cout<<endl;

   v={1,2,3,4,5,7,8,9,10,11,12,13,14,15};

   f=4;l=3;
   cout<<"\n\nPartly reversed array : \n";
   reverse(v.begin()+f,v.end()-l);//Here first 'f' numbers & last 'l' numbers will not reverse.
   for(int un : v)cout<<v[i++]<<"\t";
   cout<<"\n\n";

   getch();
   return 0;
}
