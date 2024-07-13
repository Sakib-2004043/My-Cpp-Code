#include<iostream>
using namespace std;
int main( )
{
   long long int x=5;
   long long int *px;
   px=&x;
   printf("%d\n%d",px++,px);
   return 0;
}
