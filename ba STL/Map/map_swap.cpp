// swap maps
#include<bits/stdc++.h>
using namespace std;
int main ()
{
   map<char,int>m1,m2;
   map<char,int>::iterator it;

   // Inserting Map 1
   m1['x']=100;
   m1['y']=200;

   //Inserting Map 2
   m2['a']=11;
   m2['b']=22;
   m2['c']=33;

   cout<<"Before Swapping \n";
   cout << "Map 1 contains:\n";
   for (it=m1.begin(); it!=m1.end(); ++it)
   {
      cout << it->first << " => " << it->second << '\n';
   }

   cout << "Map 2 contains:\n";
   for (it=m2.begin(); it!=m2.end(); ++it)
      {
         cout << it->first << " => " << it->second << '\n';
      }

   swap(m1,m2); /// Swapping Command 1
   m1.swap(m2); /// Swapping Command 2
   m2.swap(m1);
   ///Any command could be used.

   cout<<"\n\nAfter Swapping \n";
   cout << "Map 1 contains:\n";
   for (it=m1.begin(); it!=m1.end(); ++it)
   {
      cout << it->first << " => " << it->second << '\n';
   }

   cout << "Map 2 contains:\n";
   for (it=m2.begin(); it!=m2.end(); ++it)
      {
         cout << it->first << " => " << it->second << '\n';
      }

  return 0;
}
