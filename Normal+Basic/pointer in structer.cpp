#include<iostream>
using namespace std;
struct ms
{
   int age;
   double height;
};
int main( )
{
   struct ms s1;
   s1.age = 20;
   s1.height = 70;
   cout<<"Initial Value:--\n";
   cout<<"  Age  = "<<s1.age<<endl;
   cout<<"Height = "<<s1.height<<"\n\n\n\n";
   struct ms *ps1;
   ps1=&s1;
   (*ps1).age=30;
   (*ps1).height=75;
   cout<<"Changed Value with pointer(Method 1):--"<<endl;
   cout<<"  Age  = "<<s1.age<<endl;
   cout<<"Height = "<<s1.height<<"\n\n\n\n";
   ps1 -> age = 40;
   ps1 -> height = 65;
   cout<<"Changed Value with pointer(Method 2):--"<<endl;
   cout<<"  Age  = "<<s1.age<<endl;
   cout<<"Height = "<<s1.height<<"\n\n\n\n";
   return 0;
}
