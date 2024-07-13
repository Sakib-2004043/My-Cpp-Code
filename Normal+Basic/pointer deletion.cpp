#include<iostream>
using namespace std;
int main( )
{
   int x=30;
   int *px;
   px=&x;
   cout<<px<<endl;
   cout<<*px<<"\n\n\n\n\n";
   free(px);
   px=NULL;
   cout<<px<<endl;
   cout<<*px<<"\n\n\n\n\n";
   return 0;
}
