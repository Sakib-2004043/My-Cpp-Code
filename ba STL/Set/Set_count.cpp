#include<bits/stdc++.h>
using namespace std;
int main()
{
   set<char>st;

   for(char c='a' ; c<='z' ; c+=rand()%2+1)
   {
      st.insert(c);
   }
   for(char c='a' ; c<='z' ; c++)
   {
      if(st.count(c)!=0)
      {
         cout<<c<<" is Found!\n";
      }
      else cout<<c<<" is Not Found.\n";
   }
}
