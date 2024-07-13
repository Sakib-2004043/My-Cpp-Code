// vector assign
#include <iostream>
#include <vector>
using namespace std;
int main ()
{
  vector<int> first(7,100);
  vector<int> second;
  vector<int> third;

  //first.assign (7,100);             // 7 ints with a value of 100

  vector<int>::iterator it;
  it=first.begin()+1;
   cout<<" Given   Value : "<<*it<<endl;
  second.assign (it,first.end()-1); // the 5 central values of first

  int myints[] = {1776,7,4};
  third.assign (myints,myints+3);   // assigning from array.

  cout << "Size of  first : " << int (first.size()) << '\n';//7
  cout << "Size of second : " << int (second.size()) << '\n';//6
  cout << "Size of  third : " << int (third.size()) << '\n';//3*/
  return 0;
}

