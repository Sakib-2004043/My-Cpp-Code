//Copy N element of an array.
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main( )
{
   int i=0;
   vector<int>v2,v1={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
   cout<<"Initial array : ";
   for(int un : v1)cout<<v1[i++]<<" ";

   v2.resize(7);

   copy_n(v1.begin()+3,5,v2.begin());//This function will copy 5 elements.
                                                           //Its range from v1[3] to v1[7];
                                                           //As its size is 7 ,so last two value is garbage value.
   i=0;
   cout<<"\n\n\nResultant array(1) : ";
   for(int un : v2)cout<<v2[i++]<<" ";

   copy_n(v1.begin()+3,7,v2.begin());//This function will copy 7 elements.
                                                           //Its range from v1[3] to v1[9];
                                                           //Here copy size has matched with array size.
   i=0;
   cout<<"\n\n\nResultant array(2) : ";
   for(int un : v2)cout<<v2[i++]<<" ";

   copy_n(v1.begin()+3,9,v2.begin());//This function will also copy 7 elements,
                                                           //  though copy size is given 9.
                                                           // We have to resize "v2" to perform this task.
   i=0;
   cout<<"\n\n\nResultant array(3) : ";
   for(int un : v2)cout<<v2[i++]<<" ";

   v2.resize(11);     //Resizing the "v2"

   copy_n(v1.begin()+3,9,v2.begin());//This function will also copy 9 elements,
                                                           // Because now its size is 9
   i=0;
   cout<<"\n\n\nResultant array(4) : ";
   for(int un : v2)cout<<v2[i++]<<" ";
   cout<<"\n\n\n";

   getch( );
   return 0;
}


