#include<bits/stdc++.h>
typedef long long int lli;
typedef long double ld;
using namespace std;
int main()
{
      lli i,n;
      ld c,x=0,y=0;
      string s;
      map<string,ld>m;

      m["A+"]=4.00;
      m["A"]=3.75;
      m["A-"]=3.50;
      m["B+"]=3.25;
      m["B"]=3.00;
      m["B-"]=2.75;
      m["C+"]=2.50;
      m["C"]=2.25;
      m["D"]=2.00;
      m["F"]=0.00;

      cout<<"Enter Total Subject : ";
      cin>>n;
      while(n--)
      {
            cout<<"\n\nEnter Credit : ";
            cin>>c;
            cout<<"Enter Grade : ";
            cin>>s;
            x+=(m[s]*c);
            y+=c;
      }
      cout<<"\n\nCG = "<<x/y<<endl;
      return 0;
}
