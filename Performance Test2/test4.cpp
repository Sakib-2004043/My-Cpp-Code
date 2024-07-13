#include<bits/stdc++.h>
typedef long long lli;
using namespace std;

const lli N=1e7;
vector<bool>p(N+10,true);
vector<lli>vp;
void vct_siv()
{
    lli i,j,x;
    p[0]=p[1]=false;
    for(i=2;i<=N;i++)
    {
        if(p[i])
        {
            for(j=2*i;j<=N;j+=i)p[j]=false;
        }
    }
    for(i=2;i<=N;i++)
    {
        if(p[i])vp.push_back(i);
    }
}

int main()
{
    vct_siv();
    lli i,n,e,j,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>e;
        if(e==1)
        {
            cout<<-1<<" ";
            continue;
        }
        set<lli>st;
        for(j=0;e!=1;j++)
        {
            while(e%vp[j]==0)
            {
                st.insert(vp[j]);
                e/=vp[j];
                k=vp[j];
            }
        }
        if(st.size()==1)cout<<-1<<" ";
        else cout<<k<<" ";
    }
    return 0;
}
