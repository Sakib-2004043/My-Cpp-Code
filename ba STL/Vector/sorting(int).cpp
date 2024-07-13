#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main ( )
{
   int n,i,e;
   vector<int>v;
   cout<<"Enter quantity of your numbers : ";
   cin>>n;
   cout<<"\n\nNow enter "<<n<<" numbers\n";
   for(i=0;i<n;i++)
   {
      cin>>e;
      v.push_back(e);
   }
   sort(v.begin(),v.end());
   i=0;
   cout<<"\n\nSorted array is given below:--\n";
   for(int un : v )
   {
      cout<<v[i++]<<endl;
   }
   return 0;
}
