#include<bits/stdc++.h>
using namespace std;
typedef long long lli;
int main()
{
    lli tt;
    tt=4&7;
    tt=1;
    //cout<<tt;
    cin>>tt;
    while(tt--)
    {


        lli e,i,ans,n;
        vector<long long>vv;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>e;
            vv.push_back(e);
        }
        sort(vv.rbegin(),vv.rend());
        swap(vv[1],vv[n-2]);
        ans=abs(vv[0]-vv[1])+abs(vv[1]-vv[n-2])+abs(vv[n-2]-vv[n-1])+abs(vv[n-1]-vv[0]);


        cout<<ans<<endl;

    }
    return 0;
}
