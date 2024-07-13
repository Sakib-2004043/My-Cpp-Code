#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i,j,r,c,e,n;
   cout<<"Enter Row & Column :\n";
   cin>>r>>c;
   vector<vector<int>>v(r,vector<int>(c));
   for(i=0;i<r;i++){
      for(j=0;j<c;j++)v[i][j]=rand()%35+11;
   }
   for(i=0;i<r;i++){
      for(j=0;j<c;j++){
            cout<<v[i][j]<<' ';
      }cout<<endl;
   }cout<<"\n\n";
   cout<<"What do want to delete?\n";
   cout<<"Press 0 for Column & else for Row : ";
   cin>>e;
   if(e)
   {
      cout<<"\n\nNow enter Row No : " ;
      cin>>n;

      v.erase(v.begin()+n-1);//Row Deletion Command.

      cout<<"\nAfter Deleting Row number "<<n<<" : \n";
      for(i=0;i<v.size();i++){
         for(j=0;j<v[i].size();j++){
            cout<<v[i][j]<<' ';
         }cout<<endl;
      }cout<<"\n\n";

   }
   else
   {
      cout<<"\n\nNow enter Column No : " ;
      cin>>n;
      for(i=0;i<v.size();i++){
         v[i].erase(v[i].begin()+n-1); // Column Deletion Command
      }
      cout<<"\nAfter Deleting Column number "<<n<<" : \n";
      for(i=0;i<v.size();i++){
         for(j=0;j<v[i].size();j++){
            cout<<v[i][j]<<' ';
         }cout<<endl;
      }cout<<"\n\n";
   }
return 0;
}
