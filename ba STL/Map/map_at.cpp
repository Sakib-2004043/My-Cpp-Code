#include<bits/stdc++.h>
using namespace std;
int main()
{
   map<string,int>mp;
   mp={{"alpha",1},{"beta",2},{"gamma",3}};
   cout<<"Before : \n";
   for(auto &x : mp)
   {
      cout<<x.first<<" "<<x.second<<endl;
   }
   mp.at("alpha")*=10;
   mp.at("beta")+=20;
   mp.at("gamma")--;

   cout<<"\n\nAfter : \n\n";
   cout<<"Process 1:\n";
   for(auto x : mp)
   {
      cout<<x.first<<" "<<x.second<<endl;
   }
   cout<<"\n\n";

   cout<<"Process 2:\n";
   mp["alpha"]*=10;
   mp["beta"]+=20;
   mp["gamma"]++;
   for(auto x : mp)
   {
      cout<<x.first<<" "<<x.second<<endl;
   }
}
