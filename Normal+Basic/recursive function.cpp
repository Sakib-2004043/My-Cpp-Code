#include<bits/stdc++.h>
using namespace std;
long int s=1,x;
int f(int n)
{
   if(n==0)return s;
   s=n*f(n-1);
}
int main( )
{
   cin>>x;
   cout<<f(x);
   return 0;
}

