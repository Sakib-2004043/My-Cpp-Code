#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i;
   string s;
   map<int,string>mp;

   //Input Method 1
   mp[1]="abc";
   mp[5]="cdc";
   mp[3]="acd";

   //Input Method 2
   mp.insert({4,"afg"});

   //Input Method 3
   mp.emplace(9,"fvb");

   map<int,string> ::iterator it;

   //Output Method 1
   for(it=mp.begin();it!=mp.end();it++)
   {
      //Using Strix operator "*" is mendatory Here
      cout<<(*it).first<<" "<<(*it).second<<endl;
   }
   cout<<endl;

   //Output Method 2
   for(it=mp.begin();it!=mp.end();it++)
   {
      //Using Selection operator "->" is mendatory Here
      cout<< it->first <<" "<< it->second <<endl;
   }
   cout<<endl;

   //Output Method 3
   for(i=1;i<=9;i++)
   {
      cout<<i<<" "<<mp[i]<<endl;
   }
   cout<<endl;

   //Output Method 4
   for(auto x : mp)//Without '&' sign
   {
      cout<<x.first<<" "<<x.second<<endl;
   }
   cout<<endl;

   //Output Method 5
   for(auto &x : mp)//Using '&' sign
   {
      cout<<x.first<<" "<<x.second<<endl;
   }
   cout<<endl;

   //Output Method 6
   for(auto x = mp.begin();x!=mp.end();x++)
   {
      //Using Selection operator "->" is mendatory Here
      cout<< x->first <<" "<< x->second <<endl;
   }
   cout<<endl;

   //Output Method 7
   while(!mp.empty())
   {
      //Using Selection operator "->" is mendatory Here
      cout<<mp.begin()->first<<" "<<mp.begin()->second<<endl;
      mp.erase(mp.begin());
   }
   cout<<endl;
   return 0;
}
