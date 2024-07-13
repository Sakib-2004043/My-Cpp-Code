//General Directions:
/*
   1.This program is to replace an array element.
   2."replace()" function are used here.
   3.Here select value will be replaced by new value
      wherever it remains.
   4.If new value matches with multiple elements,
      all matched elements will change.
   5.Any value will not change if new value does not
      match with initial elements.
*/
#include<bits/stdc++.h>
using namespace std;
int main( )
{
   int i=0,slct,nw;
   vector<int>v={5,10,10,15,20,25,30,35,30,45,50,55,60};
   cout<<"Initial Array : ";
   for(int un : v)cout<<v[i++]<<" ";
   cout<<"\n\n\nSelect a value to replace from above : ";
   cin>>slct;
   cout<<"Now  enter  new  value where "<<slct<<" is  : ";
   cin>>nw;


   replace(v.begin(),v.end(),slct,nw);//Its the function to replace.


   cout<<"\n\nFinal  Array(After replaced) : ";
   i=0;
   for(int un : v)cout<<v[i++]<<" ";
   return 0;
}
