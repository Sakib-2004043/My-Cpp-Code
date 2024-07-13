///Set is sorted array.
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int x=1;
   set<int>st;
   set<int>::iterator it;

   // Input Process 1
   st={50,20,60,10,25};

   /// Output Process 1
   cout<<x++<<endl;
   for(it=st.begin();it!=st.end();it++)
   {
      cout<<*it<<" ";
   }cout<<"\n\n";

   // Input Process 2
   st.insert(325);
   st.insert(125);

   /// Output Process 2
   cout<<x++<<endl;
   for(it=st.cbegin();it!=st.cend();it++)
   {
      cout<<*it<<" ";
   }cout<<"\n\n";

   // Input Process 3
   st.emplace(3275);
   st.emplace(1250);

   /// Output Process 3
   cout<<x++<<endl;
   for(auto q : st)
   {
      cout<<q<<" ";
   }cout<<"\n\n";
   return 0;
}
