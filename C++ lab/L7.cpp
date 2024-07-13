#include<bits/stdc++.h>
typedef long long int lli;
using namespace std;
int main()
{
   int i,n;
   string s,u,L;
   cout<<"Enter String : ";
   getline(cin,s);
   L=u=s;
   n=s.size();
   for(i=0;i<=n;i++)
   {
      u[i]=toupper(s[i]);
      L[i]=tolower(s[i]);
   }
   cout<<"Upper Case : "<<u;
   cout<<"\nLower Case : "<<L;
   return 0;
}
