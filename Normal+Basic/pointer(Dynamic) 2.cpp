#include<iostream>
#include<stdlib.h>
using namespace std;
char *ch( )
{
   char x='k';
   char *px;
   px=(char*)malloc(sizeof(char));
   px=&x;
   cout<<"Output at Sub-function(Before returning memory address):--\n\n";
   cout<<"Memory  address  of x (256 character based number) : "<<px<<endl;
   printf("Memory  address  of x ( x  number) : %x\n",px);
   printf("Memory  address  of x ( Decimal    number )  : %d\n",px);
   printf("Memory  address  of x ( Octal    number ) : %o\n",px);
   cout<<"Value of x(In character ) : "<<*px<<"\n\n\n\n";
   return px;
}
int main()
{
   char *p;
   p=ch( );
   cout<<"Output at main function(After returning memory address):--\n\n";
   printf("Memory  address  of x ( Hexadecimal  number) : %x\n",p);
   printf("Memory  address  of x ( Decimal    number )  : %d\n",p);
   printf("Memory  address  of x ( Octal    number ) : %o\n",p);
   cout<<"Value of x(In character ) : "<<*p<<"\n\n\n\n";
   return 0;
}
