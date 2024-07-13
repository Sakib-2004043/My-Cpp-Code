#include<bits/stdc++.h>
using namespace std;
int main()
{
   map<char,int>mp;
   mp['b']=51;
   mp['a']=35;
   mp['k']=43;

   cout<<"Sorted Map : \n";
   for(auto x=mp.begin();x!=mp.end();x++)
   {
      cout<<x->first<<" "<<x->second<<endl;
   }
   cout<<endl;
   cout<<"Reverse Sorted Map : \n";
   for(auto x=mp.rbegin();x!=mp.rend();x++)
   {
      cout<< x->first <<" "<< x->second <<endl;
   }
}
