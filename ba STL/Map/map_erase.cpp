#include<bits/stdc++.h>
using namespace std;
int main()
{
   int x=1;
   map<char,int>mp;
   map<char,int>::iterator it;

   //Inserting Value
   mp['a']=10;
   mp['k']=20;
   mp['h']=40;
   mp['e']=50;
   mp['s']=60;
   mp['c']=30;

   //Erasing By Iterator
   it=mp.find('h');
   mp.erase(it);

   //Erasing by Key
   mp.erase('k');
   cout<<x++<<endl;//1
   for(it=mp.begin();it!=mp.end();it++)
   {
      cout<<it->first<<" "<<it->second<<endl;
   }
   cout<<"\n\n";

   mp.clear();
   //Again Inserting Value
   mp['a']=10;
   mp['k']=20;
   mp['c']=30;
   mp['h']=40;
   mp['e']=50;
   mp['s']=60;
   mp['l']=45;
   mp['b']=55;
   mp['z']=65;

   //Erasing by Range
   //Process 01
   it=mp.find('h');
   mp.erase(it,mp.end());// It deletes everything after 'h' ,including 'h'
   cout<<x++<<endl;//2
   for(it=mp.begin();it!=mp.end();it++)
   {
      cout<<it->first<<" "<<it->second<<endl;
   }
   cout<<endl;

   mp.clear();
   //Again Inserting Value
   mp['a']=10;
   mp['k']=20;
   mp['c']=30;
   mp['h']=40;
   mp['e']=50;
   mp['s']=60;
   mp['l']=140;
   mp['b']=150;
   mp['z']=160;

   //Process 02
   mp.erase(mp.find('h'),mp.end());// It deletes everything after 'h' ,including 'h'
   cout<<x++<<endl;//3
   for(it=mp.begin();it!=mp.end();it++)
   {
      cout<<it->first<<" "<<it->second<<endl;
   }
   cout<<endl;

   mp.clear();
   //Again Inserting Value
   mp['a']=10;
   mp['k']=20;
   mp['c']=30;
   mp['h']=40;
   mp['e']=50;
   mp['s']=60;
   mp['l']=410;
   mp['b']=510;
   mp['z']=610;

   //Process 03
   mp.erase(mp.begin(),mp.find('h'));// It deletes everything before 'h' ,without 'h'
   cout<<x++<<endl;//4
   for(it=mp.begin();it!=mp.end();it++)
   {
      cout<<it->first<<" "<<it->second<<endl;
   }
   cout<<endl;
   return 0;
}

