#include<bits/stdc++.h>
using namespace std;

const int N=5e6+10;
vector<int>g[N];
vector<int>cc;
vector<vector<int>>vcc;
vector<bool>vis(N,false);

void dfs(int child)
{
    vis[child]=true;
    cc.push_back(child);
    for(int x:g[child])
    {
        if(vis[x])continue;
        else dfs(x);
    }
}

int main()
{
    int i,n,e;
    cin>>n>>e;
    while(e--)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for(i=1;i<=n;i++)
    {
        if(vis[i])continue;
        dfs(i);
        vcc.push_back(cc);
        cc.clear();
    }
    for(auto x:vcc)
    {
        for(auto y:x)cout<<y<<" ";
        cout<<endl;
    }

}

