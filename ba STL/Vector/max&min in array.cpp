//Finding max & min Value From an array.
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int x,y;
   vector<int>v={5,4,3};

   x=*max_element(v.begin()+2,v.end());//Using strix '*' symbol is mandatory.
   y=*min_element(v.begin(),v.end()-1);//Here last element will be skipped.

   cout<<"Max element : "<<x<<endl;
   cout<<"Min element : "<<y<<endl;
   return 0;
}
