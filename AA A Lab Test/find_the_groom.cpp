#include<bits/stdc++.h>
typedef long long lli;
using namespace std;

int main()
{
    lli i,n;
    vector<pair<pair<lli,lli>,pair<lli,lli>>>vpp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        lli x,y,z;
        string s;
        cin>>s;
        cin>>x>>y>>z;
        vpp.push_back({{x,y},{-z,i+1}});
    }
    sort(vpp.rbegin(),vpp.rend());
    for(i=0;i<n;i++)
    {
        cout<<vpp[i].second.second<<endl;
    }
    return 0;
}

