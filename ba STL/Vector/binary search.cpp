#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main( )
{
   int k;
   vector<int>v={1,2,3,4,5,6,7,8,9};
   cout<<"Enter the value to find out : ";
   cin>>k;
   if(binary_search(v.begin()+2,v.end()-1,k))
      cout<<"Found!"<<endl;
   else cout<<"Not Found";
   return 0;
}
