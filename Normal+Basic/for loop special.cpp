#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;
int main( )
{
   int a[]={25,36,56,96,87,56,22,25};
   for(int b : a)
   {
      cout<<b<<'\t';
   }
    vector<string>v = { "\n\n\nSakibul" , " Hasan"," Siam","." };
    for(string b : v)
    {
       cout<<b;
    }
    getch( );
}
