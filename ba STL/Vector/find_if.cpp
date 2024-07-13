#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool IsOdd (int i) {
  return i%2;
}
int main () {
  vector<int>v={10,25,40,55};
  vector<int>::iterator it;
  it =find_if (v.begin(),v.end(), IsOdd);
  cout << "The first odd value is " << *it++ << '\n';
  cout << "The first odd value is " << *it << '\n';
  return 0;
}
