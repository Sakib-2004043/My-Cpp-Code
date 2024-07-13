#include<iostream>
using namespace std;
int main( )
{
   int x=10;
   int *p1;
   p1=&x;
   int **p2;
   p2=&p1;
   int ***p3;
   p3=&p2;
   cout<<"Pointer(p1)   of  X = "<<p1<<endl;
   cout<<"Pointer(p2) of (p1) = "<<p2<<endl;
   cout<<"Pointer(p3) of (p2) = "<<p3<<"\n\n\n\n";
   cout<<"Showing the value of x using pointer(p1) = "<<*p1<<endl;
   cout<<"Showing the value of x using pointer(p2) = "<<**p2<<endl;
   cout<<"Showing the value of x using pointer(p3) = "<<***p3<<"\n\n\n\n";
   cout<<"Showing the memory address of x using pointer(p1) with (&) = "<<&*p1<<endl;
   cout<<"Showing the memory address of x using pointer(p2) with (&) = "<<&**p2<<endl;
   cout<<"Showing the memory address of x using pointer(p3) with (&) = "<<&***p3<<"\n\n\n\n";
   cout<<"Showing the memory address of x using p2 = "<<*p2<<endl;
   cout<<"Showing the memory address of x using p3 = "<<**p3<<"\n\n\n\n";
   return 0;
}
