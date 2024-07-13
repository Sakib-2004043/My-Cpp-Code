/// THIS IS NOT WORKING.

#include<bits/stdc++.h>
using namespace std;
int main( )
{
   int  i=0;
   vector<int>v={1,2,3,4,5,6,7,8,9},v1;
   v1=v;

   cout<<"Given Vector : ";
   for(int un : v)cout<<un<<" ";
   cout<<"\n\n\n\n";


   v=v1;
   //cout<<"Erase first 3 element with \"begin()\" function : ";
   remove(v.begin(),v.begin(),v[3]);

   for(int un : v)cout<<un<<" ";
   cout<<"\n\n\n\n";



   return 0;

}
