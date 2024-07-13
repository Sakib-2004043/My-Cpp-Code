#include<bits/stdc++.h>
typedef long long lli;
using namespace std;

int main()
{
    lli i,n,tm,ttl,e;
    vector<lli>v;
    cin>>tm>>n;
    ttl=0;
    for(i=0;i<n;i++)
    {
        cin>>e;
        v.push_back(e);
        ttl+=e;
    }
    sort(v.begin(),v.end());
    if(ttl<=tm)cout<<"BRAVO"<<endl;
    else if(v[0]>tm)cout<<"UNLUCKY"<<endl;
    else
    {
        e=0;
        for(i=0;i<n;i++)
        {
            e+=v[i];
            if(e>tm)
            {
                cout<<i<<" assignment done"<<endl;
                break;
            }
        }
    }
    return 0;
}
