#include<bits/stdc++.h>
using namespace std;
int main()
{
   map<char,int>mp;
   mp['x']=100;
   mp['y']=200;
   mp['z']=300;
   mp.clear();   // It will clear total Map.
   mp['a']=1101;
   mp['b']=2202;
   for(auto x: mp)
   {
      cout<<x.first<<" "<<x.second<<endl;
   }
   return 0;
}
