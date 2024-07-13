#include<bits/stdc++.h>
using namespace std;
int main()
{
   map<string,double>mp;
   mp["Sakib"]=3.95;
   mp["Reyad"]=3.86;
   mp["Sagor"]=4.00;
   mp["Sajib"]=3.98;
   cout<<"Map Size = "<<mp.size()<<endl;
   cout<<"Maps max Size = "<<mp.max_size()<<endl;
   return 0;
}
