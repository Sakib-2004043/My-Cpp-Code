#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main( )
{
   int n;
   string s;
   vector<string>v;
   cout<<"Enter the number of strings : ";
   cin>>n;
   cout<<"\n\nNow enter "<<n<<" strings.\n";
   for(int i=0;i<n;i++)
   {
      fflush(stdin);
      cin>>s;
      v.push_back(s);
   }
   sort(v.begin(),v.end());
   cout<<"\n\nSorted string :--\n";
   for(int i=0;i<n;i++)
   {
      cout<<i+1<<" - "<<v[i]<<endl;
   }
   return 0;
}
