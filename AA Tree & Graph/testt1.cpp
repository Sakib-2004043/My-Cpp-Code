#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<bool>vis(N,0);
vector<int>v[N];
vector<int>cc;
vector<vector<int>>vcc;

void dfs(int vrtx)
{
    vis[vrtx]=true;
    cc.push_back(vrtx);
    for(auto child : v[vrtx])
    {
        if(vis[child])continue;
        dfs(child);
    }
}

int main()
{
    int n1,n2,n,e,cnt,i;
    cout<<"Enter Total Number of nodes : ";
    cin>>n;
    cout<<"Enter Total Number of Edges : ";
    cin>>e;
    while(e--)
    {
        cout<<"Enter Two Nodes : ";
        cin>>n1>>n2;
        v[n1].push_back(n2);
        v[n2].push_back(n1);
    }
    cnt=0;
    for(i=1;i<=n;i++)
    {
        if(vis[i])continue;
        cnt++;
        dfs(i);
        vcc.push_back(cc);
        cc.clear();
    }
    cout<<"\nTotal Graph : "<<cnt<<endl<<endl;
    for(auto x : vcc)
    {
        cout<<"Connected Vertexes : ";
        for(auto y : x)
        {
            cout<<y<<' ';
        }
        cout<<endl;
    }
    return 0;
}
//  8 5 1 2 2 3 2 4 3 5 6 7
