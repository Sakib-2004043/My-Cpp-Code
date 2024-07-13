#include<iostream>
using namespace std;
int f(int*p,int i)
{
   cout<<"\n\n\n\n\n";
   for(int k=0;k<i;k++)
   {
      printf("0x%x\n",&p[k]);
   }
}


int main( )
{
   int a[5]={5,8,7,9,3},i=0;
   int *pa[5];
   for(int un : a){
      pa[i]=(int*)malloc(sizeof(a));
      pa[i]=&a[i];
      cout<<pa[i++]<<endl;
   }
   f(*pa,i);//passing memory address to sub function.
   return 0;
}
