#include<bits/stdc++.h>
using namespace std;
int main( )
{
   long long int n,i;
   string s;
   vector<char>v1,v2;
   cin>>n;
   if(n==0)
   {
      cout<<"Y";
      goto ff;
   }
   for(i=0;i<n;i++)
   {
      cin>>s;
      s[0]=tolower(s[0]);
      v1.push_back(s[0]);
   }
   v2=v1;
   reverse(v2.begin(),v2.end());
   if(v1==v2&&n!=1)cout<<"N";
   else cout<<"Y";
   ff:
   return 0;
}
