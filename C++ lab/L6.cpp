#include<bits/stdc++.h>
using namespace std;
int sum(int x,int y,int z)
{
   return x+y+z;
}
int sum(int x,int y)
{
   return x+y;
}
int main()
{
   int a,b,c;
   cout<<"Enter three number : \n";
   cin>>a>>b>>c;
   cout<<"Total  Sum = "<<sum(a,b,c);
   cout<<"\nSum of two = "<<sum(a,b);
   return 0;
}
