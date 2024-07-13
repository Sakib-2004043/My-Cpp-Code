#include<bits/stdc++.h>
typedef long long lli;
using namespace std;

int main()
{
    lli i,n,ans,x;
    const lli mod=1e9+7;
    string s;
    cin>>n>>s;
    n=s.size();
    x=0;
    for(i=0;i<n;i++)
    {
        if(s[i]=='1')x++;
    }
    ans=1;
    for(i=1;i<=x;i++)
    {
        ans=ans*3;
        ans%=mod;
    }
    cout<<ans<<endl;
    return 0;
}
