#include<bits/stdc++.h>
typedef long long lli;
using namespace std;

lli f(lli n)
{
    if(n==0)return 1;
    else if(n%2)return (4+f(n-1));
    else return (3+f(n/2));
}
int main()
{
    lli n,q;
    cin>>q;
    while(q--)
    {
        cin>>n;
        cout<<-f(n)<<endl;
    }
    return 0;
}
