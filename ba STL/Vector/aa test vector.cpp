#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i,n;
   vector<int>v;
   vector<int>::iterator it;
   for(i=0;i<15;i++) //Taking Input
   {
      v.push_back(rand()%250+125);
   }

   for(auto x : v)cout<<x<<" "; // Display Vector

   cout<<"\n\nEnter N : ";
   cin>>n;

   it=find(v.begin(),v.end(),n);
   if(it!=v.end())
   {
        cout<<"\nFound Value : "<<n<<endl;
        cout<<"At Position : ";
        cout<<it-v.begin()+1<<endl; // Printing Position
   }
   else cout<<endl<<n<<" is not found.";
   cout<<endl<<endl;
   return 0;
}
