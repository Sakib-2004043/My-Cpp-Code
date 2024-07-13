//Permutation Checking program.
/*
      This function will check whether two array is permutation
      of each other or not.
*/
#include<bits/stdc++.h>
using namespace std;
int main( )
{
   int i;
   vector<int>v1,v2;
   v1={10,25,63,78,85,46};
   v2={85,63,10,46,25,78};
   cout<<"Output 1: \n";
   cout<<"Array 1 :";i=0;
   for(int un : v1)cout<<v1[i++]<<" ";
   cout<<"\nArray 2 :";i=0;
   for(int un : v2)cout<<v2[i++]<<" ";
   i=is_permutation(v1.begin(),v1.end(),v2.begin());//If we take total array we do not
                                                                                 // need to write "endl()" .
   cout<<"\n\nIs array 1 a permutation of array 2 ?\nAnswer : ";
   i!=0?cout<<"YES":cout<<"NO";

   cout<<"\n\n\nOutput 2: \n";
   vector<char>c1,c2;

   c1={'a','s','j','$','%','5','&','>','?','D','M'};
   c2={'~','v','D','5','M','>','s','?','a','$','j','%','&','r','@','^'};

   cout<<"Array 3 :";i=0;
   for(int un : c1)cout<<c1[i++]<<" ";
   cout<<"\nArray 4 :";i=0;
   for(int un : c2)cout<<c2[i++]<<" ";
   i=is_permutation(c1.begin(),c1.end(),c2.begin());

   cout<<"\n\nIs array 3 a permutation of array 4 ?\nAnswer : ";
   i!=0?cout<<"YES":cout<<"NO";

   i=is_permutation(c1.begin(),c1.end(),c2.begin()+2,c2.end()-3);//Here we need to write end() function
                                                                                                       // for skiping last three values.
   cout<<"\n\nIs array 3 a permutation of array 4(Skiping first two and last three elements) ?\nAnswer : ";
   i!=0?cout<<"YES":cout<<"NO";

   cout<<"\n\n\n\n";
   return 0;
}

