#include<iostream>
#include<algorithm>
using namespace std;
int main( )
{
   string s;
   int i=0;
   cout<<"Enter  string : ";
   cin>>s;
   sort(s.begin(),s.end());
   cout<<"Sorted string : "<<s;
   return 0;
}
