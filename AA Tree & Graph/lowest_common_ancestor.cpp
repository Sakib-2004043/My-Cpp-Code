/// FINDIND LOWEST COMMON ANCESTOR.......

#include<bits/stdc++.h>
typedef long long lli;
using namespace std;
const lli N = 1e5+5;
vector<lli>tr[N];
map<lli,lli>par;

/// DFS is not needed here.......
/*
void dfs(lli vrtx,lli par)
{

    for(auto child : tr[vrtx])
    {
        if(child == par)continue;

        depth[child]=depth[vrtx]+1;
        if(depth[child] > max_depth)
        {
            max_depth = depth[child];
            max_depth_node = child;
        }

        dfs(child,vrtx);
    }

}
*/
///  12 1 2 1 3 1 13 2 5 3 4 5 6 5 7 5 8 8 12 4 9 4 10 10 11    9 11
///  13 1 2 1 3 1 13 2 5 3 4 5 6 5 7 5 8 8 12 4 9 4 10 10 11 12 14   14 11

int main()
{
    lli i,n,e,r,x,y;
    set<lli>st;
    cout<<"Enter Total Number of edges : ";
    cin>>e;
    while(e--)
    {
        lli n1,n2;
        cout<<"Enter Two Connected Nodes : ";
        cin>>n1>>n2;
        tr[n1].push_back(n2);
        tr[n2].push_back(n1);

        /// Two push_back need for back_Travarsing...

        par[n2]=n1;
    }
    /// LCA = Lowest Common Ancestor.
    cout<<"Enter Two Nodes For Finding their LCA : ";
    cin>>x>>y;
    while(par[x])
    {
        st.insert(x);
        x=par[x];
    }
    while(par[y])
    {
        if(find(st.begin(),st.end(),y)!=st.end())goto ff;
        y=par[y];
    }

    ff:
    cout<<"\n\nLowest Common Ancestor : "<<y<<endl;

    return 0;
}

