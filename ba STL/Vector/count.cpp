#include<bits/stdc++.h>
using namespace std;
int main ()
{
    // counting elements in array:
    int myints[] = {10,20,30,30,20,10,10,20};
    int mycount = count (myints, myints+8, 10);
    cout << "10 appears " << mycount << " times.\n";

    // counting elements in container:
    vector<int> myvector (myints, myints+8);
    mycount = count(myvector.begin(), myvector.end(), 20);
    cout << "20 appears " << mycount  << " times.\n";

    return 0;
}
#define cnt(vectr,elemnt) count(vectr.begin(),vectr.end(), elemnt);
