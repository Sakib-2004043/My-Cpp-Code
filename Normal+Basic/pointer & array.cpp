#include<iostream>
using namespace std;
int main( )
{
   int ar[5]={25,-96,48,78,-29},i=0;
   printf("Memory Address of total array : %d\n\n\n\n",*&ar);
   for(int un : ar)
   {
      printf("Memory Address of array[%d] =  %d\n",i,&ar[i]);
      printf("         Value of array[%d] = %d\n",i-1,*&ar[i++]);
   }
   return 0;
}
