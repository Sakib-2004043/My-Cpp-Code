//This program will show all permuted value of "N" numbers.
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main ()
 {
   vector<int>v={2,3,2,4};
   cout<<" Given   Array  : ";
   for(int un : v)cout<<un<<" ";
   cout<<"\n\nPermuted Arrays : ";
   while(next_permutation(v.begin(),v.end()))//It is key function of this program.
   {
      for(int un : v)cout<<un<<" ";
      cout<<endl;
      cout<<" \t\t  ";
   }
   return 0;
}

