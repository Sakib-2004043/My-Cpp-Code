#include<bits/stdc++.h>
using namespace std;
typedef long long lli;
const lli mod=1e9+7;
int main()
{
    lli i,n,x,ans;
    string s;
    cin>>n>>s;
    x=0;
    for(i=0;i<n;i++)
    {
        if(s[i]=='1')x++;
    }
    ans=1;
    for(i=1;i<=x;i++)
    {
        ans=ans*3;
        ans=ans%mod;
    }
    cout<<ans<<endl;
    return 0;
}
