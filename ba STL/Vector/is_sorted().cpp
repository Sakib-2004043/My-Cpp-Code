#include<iostream>
#include<algorithm>//This Header File is needed to run "is_sorted( )" function.
#include<vector>
using namespace std;
int main( )
{
   int i;
   vector<int>v={15,226,34,48,53,68,79,832,95};
   i=is_sorted(v.begin()+2,v.end()-2);//These function will check avoiding first & last element.
   if(i==0)cout<<"NO"<<endl;
   else cout<<"YES\n\n\n";
   i=is_sorted(v.begin(),v.end());//These function will check if 'v' is sorted or not.
   if(i==0)cout<<"NO"<<endl;
   else cout<<"YES\n\n\n";
   return 0;
}
