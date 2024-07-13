//This program will swap elements between two
//  array in particular range.
#include<bits/stdc++.h>
using namespace std;
int main( )
{
   int i=0;
   vector<int>v1,v2;
   v1={21,22,23,24,25,26,27,28,29};
   v2={11,12,13,14,15,16,17,18,19};

   cout<<"Given Array : \n";

   for(int un : v1)cout<<v1[i++]<<" ";i=0;
   cout<<endl;
   for(int un : v2)cout<<v2[i++]<<" ";i=0;
   cout<<"\n\n\n\n";

   swap_ranges(v1.begin(),v1.end(),v2.begin());

   cout<<"Output 1 (v1.bgn,v1.end,v2.bgn) : \n";
   for(int un : v1)cout<<v1[i++]<<" ";i=0;
   cout<<endl;
   for(int un : v2)cout<<v2[i++]<<" ";i=0;
   cout<<"\n\n\n\n";

   swap_ranges(v1.begin()+2,v1.end()-3,v2.begin()+2);

   cout<<"Output 2 (v1.bgn+2,v1.end-3,v2.bgn+2) : \n";
   for(int un : v1)cout<<v1[i++]<<" ";i=0;
   cout<<endl;
   for(int un : v2)cout<<v2[i++]<<" ";i=0;
   cout<<"\n\n\n\n";

   swap_ranges(v1.begin()+2,v1.end()-3,v2.begin()+5);

   cout<<"Output 3 (v1.bgn+2,v1.end-3,v2.bgn+5) : \n";
   for(int un : v1)cout<<v1[i++]<<" ";i=0;
   cout<<endl;
   for(int un : v2)cout<<v2[i++]<<" ";i=0;
   cout<<"\n\n\n\n";

   return 0;
}

