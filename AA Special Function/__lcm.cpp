#include<bits/stdc++.h>
typedef long long int lli;
using namespace std;
int main()
{
    lli x,y,z;
    cin>>x>>y;
    z=x*y/__gcd(x,y);
    cout<<"LCM = "<<z<<endl;
    return 0;
}
