#include<bits/stdc++.h>
typedef long long lli;
using namespace std;

const lli N=1e8;
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
    for(lli x:vp)
    {
        //cout<<x<<" ";
    }
    cout<<"\nSize : "<<vp.size()<<endl;
    return 0;
}
