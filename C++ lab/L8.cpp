#include<bits/stdc++.h>
typedef long long int lli;
using namespace std;
int main()
{
   int i,n,a=0,d=0,s=0;
   string x;
   cout<<"Enter String : ";
   getline(cin,x);
   n=x.size();
   for(i=0;i<n;i++)
   {
      if(isdigit(x[i]))d++;
      else if(isalpha(x[i]))a++;
      else s++;
   }
   cout<<"Alphabet = "<<d;
   cout<<"\nDigit = "<<a;
   cout<<"\nSpecial Character = "<<s;
   return 0;
}
