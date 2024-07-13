#include<iostream>
#include<vector>
using namespace std;
//void display(vector<int>)
int main()
{
   vector <int> v;
   int e,i,s;
   cout<<"Enter the size of vector : ";
   cin>>s;
   for(i=0;i<s;i++)
   {
      cin>>e;
      v.push_back(e);
   }
   for(i=0;i<s;i++)
   {
      cout<<v[i]<<endl;
   }
return 0;


}
