// set::empty
#include<bits/stdc++.h>
using namespace std;
int main ()
{
   set<int>st;
   st.insert(20);
   st.insert(30);
   st.insert(10);

   cout<<"Set contains:";
   while(!st.empty())
   {
      cout <<" "<<*st.begin();
      st.erase(st.begin());
   }
   cout << '\n';
   return 0;
}
