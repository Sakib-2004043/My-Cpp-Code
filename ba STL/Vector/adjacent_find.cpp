#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
int main( )
{
   int p;
   vector<int>v={5,20,20,30,33,25,10,10,23};
   vector<int>::iterator it;
   it=adjacent_find(v.begin(),v.end());
   //for(;it!=v.end();it++)
   {
      cout<<*it<<endl;
   }

}
