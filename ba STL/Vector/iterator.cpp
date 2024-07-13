#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
int main( )
{
   int i;
   vector<int>v={5,20,5,30,30,20,10,10,20};
   vector<int>::iterator it;
   for(it=v.begin();it!=v.end();it++)cout<<*it<<" ";
}
