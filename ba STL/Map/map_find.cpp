#include<bits/stdc++.h>
using namespace std;
int main()
{
   char c;
   map<char,int>mp;
   for(c='a';c<='z';c+=rand()%3)//Choosing Random Character
   {
      mp[c]=rand()%125; //Giving Random Value
   }
   cout<<"Enter a Character : ";
   cin>>c;
   if(mp.find(c)!=mp.end())//Searching Command
   {
      cout<<"Found!!\nValue : ";
      cout<<c<<" = "<<mp[c]<<endl;
   }
   else cout<<"Not Found!!";
   return 0;
}
