//USES OF malloc( ) function .
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int *int_f( )//THIS FUNCTION WILL RETURN HEAP MEMORY ADDRESS AND ITS VALUE
{
   int x=20;
   int *px;
   px=(int*)malloc(sizeof(int));//HERE px IS POINTING A HEAP MEMORY ADDRESS
   px=&x;
   cout<<"Output at sub function(int).\n";
   cout<<"Heap    memory   Address       =       "<<px<<endl;
   cout<<"Value at Heap memory Address = "<<*px<<"\n\n\n";
   return px;//Passing Heap Memory Address to main Function.
}
int main( )
{
   int *p;
   p=int_f( );
   cout<<"Output at main function.\n";
   cout<<"Memory address of x(Passed by int_f) = "<<p<<endl;
   *p=30;
   cout<<"Value of x = "<<*p<<"\n\n\n";
   getch( );
   return 0;
}
