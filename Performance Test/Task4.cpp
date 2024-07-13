#include<bits/stdc++.h>
using namespace std;
const int N=1e6+7;
vector<bool>vis(N,false);
vector<int>g[N];

void dfs(int vrtx)
{
    vis[vrtx]=true;
    for(auto child : g[vrtx])
    {

        if(vis[child])continue;
        cout<<vrtx<<endl;
        dfs(child);
    }
    cout<<endl;

}

int main()
{
    int i,v,e;
    cin>>v>>e;

    for(i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1);
    return 0;
}

