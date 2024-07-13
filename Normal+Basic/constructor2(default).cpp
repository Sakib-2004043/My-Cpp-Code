//Constructor is generally used to initialize value of element of class.
//But Default Constructor dose not initialize any value.
#include<iostream>
using namespace std;
class person
{
public:
   person()
   {
      printf("Default constructor are called successfully.\n");
   }
};
int main( )
{
   person p;
   return 0;
}
//For more details see (constructor overloading.cpp)
