#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i,n,k=0,a[999];
   memset(a,0,sizeof(a));
   string s;
   cout<<"Enter String : ";
   getline(cin,s);
   n=s.size();
   for(i=0;i<n;i++)
   {
      a[s[i]]++;
      if(k<a[s[i]])k=a[s[i]];
   }
   cout<<"\nCharacter of maximum frequency : \n";
   for(i=0;i<n;i++)
   {
      if(a[s[i]]==k)
      {
         cout<<s[i]<<" = "<<k<<endl;
         break;
      }
   }
   return 0;
}
