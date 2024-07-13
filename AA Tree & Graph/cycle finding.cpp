#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<bool>vis(false,N);
vector<int>v[N];
bool x=false;
int par=0;
//8 5 1 2 2 3 2 4 3 5 6 7
void dfs(int vrtx)
{
    vis[vrtx]=true;
    for(int child : v[vrtx])
    {
        if(vis[child] && child==par)continue;
        if(vis[child])
        {
            x=true;
            return;
        }
        par=child;
        dfs(child);
    }
}
int main()
{
    int n1,n2,n,e,i;
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
    for(i=1;i<=n;i++)
    {
        if(vis[i])continue;
        dfs(i);
    }
    if(x)cout<<"Loop Exist."<<endl;
    else cout<<"No Loop Exist."<<endl;
}
