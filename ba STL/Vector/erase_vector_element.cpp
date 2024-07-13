//#include<bits/stdc++.h>
using namespace std;
int main( )
{
   int  i=0;
   vector<int>v={1,2,3,4,5,6,7,8,9},v1;
   v1=v;

   cout<<"Given Array : ";
   for(int un : v)cout<<v[i++]<<" ";i=0;
   cout<<"\n\n\n\n";

   v=v1;
   cout<<"Erase v[3] with \"begin()\" function : ";
   v.erase(v.begin( )+3);//This erase function will remove v[3] and size will reduced by 1
   for(int un : v)cout<<v[i++]<<" ";i=0;
   cout<<"\n\n\n\n";

   v=v1;
   cout<<"Erase v[5] with \"end()\" function : ";
   v.erase(v.end( )-4);//This erase function will remove v[v.size()-4] and size will reduced by 1
   for(int un : v)cout<<v[i++]<<" ";i=0;
   cout<<"\n\n\n\n";

   v=v1;
   cout<<"Erase first 3 element with \"begin()\" function : ";
   v.erase(v.begin(),v.begin()+3);//This erase function will remove first 3 element and size will reduced by 3
   for(int un : v)cout<<v[i++]<<" ";i=0;
   cout<<"\n\n\n\n";

   v=v1;
   cout<<"Erase 3 element from v[2] to v[4] with \"begin()\" function : ";
   v.erase(v.begin()+2,v.begin()+5);
   for(int un : v)cout<<v[i++]<<" ";i=0;
   cout<<"\n\n\n\n";

   v=v1;
   cout<<"Erase 4 element from v[2] to v[5] with \"end()\" function : ";
   v.erase(v.begin()+2,v.end()-3);
   for(int un : v)cout<<v[i++]<<" ";i=0;
   cout<<"\n\n\n\n";

   return 0;

}

