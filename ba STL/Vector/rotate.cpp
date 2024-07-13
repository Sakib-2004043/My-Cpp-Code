#include<bits/stdc++.h>
using namespace std;
int main( )
{
   int i=0,r=2;
   vector<int>v={1,2,3,4,5,6,7,8,9};
   cout<<"                  Given   Array : ";
   for(int un : v)cout<<v[i++]<<" ";i=0;
   cout<<"\nRotated Array (Rotation Size "<<r<<" ): ";

   rotate(v.begin(),v.begin()+r,v.end());//This function is used to rotate

   for(int un : v)cout<<v[i++]<<" ";
   cout<<"\n\n\n\n";
   return 0;
}
