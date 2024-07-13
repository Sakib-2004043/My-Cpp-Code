#include<iostream>
#include<vector>
using namespace std;
int main( )
{
   vector<string>v = { "Sakibul" , " Hasan" };
   //cout<<v[0]+v[1];
   cout<<"\n\n\n\n\n\n";
   for(vector<string>::iterator it=v.begin(); it != v.end(); it++)
   {
      cout<<*it<<endl;
   }
   cout<<"\n\n\n\n\n\n";
   for(string vlu : v)
   {
      cout<<vlu;
   }
   cout<<"\n\n\n\n\n\n";
   int a[]={25,36,56,96,87,56,22,25};
   for(int b : a)
   {
      cout<<b<<'\n';
   }



}
