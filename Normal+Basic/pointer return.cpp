#include<iostream>
using namespace std;
int *m_a( ){
   int x=20;
   return &x;//Here this function returning stack memory address.
}
int main( ){
   int *p;
   p=m_a( );
   cout<<p<<endl;
   cout<<*p<<endl;
   return 0;
}
