#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i,r,c,j,x=1;
   cout<<"Enter Row & Column :\n";
   cin>>r>>c;

   ///   Input process 1 >>
   vector<vector<int>>v(r,vector<int>(c,99));

   //memset(v,5,sizeof(v));  >> It is not valid for vector.


   // Output Process 1 >>
   cout<<"Output "<<x++<<" : "<<endl; //1
   for(i=0;i<r;i++)
   {
      for(j=0;j<c;j++)cout<<v[i][j]<<' ';
      cout<<endl;
   }cout<<"\n\n";

    ///   Input process 2 >>
    r+=3;c+=3;
   v.assign(r,vector<int>(c,45));// using assign();


   //    Output Process 2>>
   cout<<"Output "<<x++<<" : "<<endl;  //2
   for(auto x : v)
   {
      for(auto y : x)cout<<y<<' ';
      cout<<endl;
   }cout<<"\n\n";

   //These 3 command can Delete all element individually.
   v.assign(0,vector<int>(0)); //1
   v.resize(0);                           //2
   v.clear();                               //3


   cout<<"Output "<<x++<<" : "<<endl;  //3
   for(auto x : v)
   {
      for(auto y : x)cout<<y<<' ';
      cout<<endl;
   }cout<<"\n\n";




   ///   Input process 3 >>
   vector<vector<int>>w{{0,1,2,3,4,5,6,7,8},
                                             {9,10,11,12,13},
                                             {14,15,16,17,18,19,20}};

   //Output Process 3 >>
   cout<<"Output "<<x++<<" : "<<endl; //4
   for(i=0;i<w.size();i++)
   {
      for(j=0;j<w[i].size();j++)cout<<w[i][j]<<' ';
      cout<<endl;
   }
   return 0;
}
