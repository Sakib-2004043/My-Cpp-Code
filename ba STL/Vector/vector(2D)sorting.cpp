#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i,r,c,j,e;
   cout<<"Enter row & column :\n";
   cin>>r>>c;
   vector<vector<int>>v(r,vector<int>(c)) ;
   for(i=0;i<r;i++)
   {
      for(j=0;j<c;j++)
      {
         cin>>v[i][j];
      }
   }cout<<endl;

   cout<<"\n\nAscending : \n";
   for(i=0;i<r;i++)
   {
      sort(v[i].begin(),v[i].end());
      for(j=0;j<c;j++)cout<<v[i][j]<<' ';
      cout<<endl;
   }
   cout<<"\n\nDescending : \n";
   for(i=0;i<r;i++)
   {
      sort(v[i].rbegin(),v[i].rend());
      for(j=0;j<c;j++)cout<<v[i][j]<<' ';
      cout<<endl;
   }
   return 0;
}
