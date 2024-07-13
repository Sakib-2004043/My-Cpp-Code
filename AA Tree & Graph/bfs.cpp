///  THIS IS SIMPLE BFS PROBLEM FOR FINDING LEVEL....

#include<bits/stdc++.h>
typedef long long lli;
using namespace std;

const lli N = 1e5+5;
vector<lli>g[N];
vector<bool>vis(N,false);
map<lli,lli>lvl;

void bfs(lli start)
{
    queue<lli>q;
    vis[start]=true;
    q.push(start);

    while(!q.empty())
    {
        lli node = q.front();
        q.pop();
        for(auto ngb:g[node])
        {
            if(vis[ngb])continue;

            q.push(ngb);
            vis[ngb]=true;
            lvl[ngb]=lvl[node]+1;
        }
    }
}

/// ngb = neighbour of node

///   HERE SOME TEST CASES HAS GIVEN.......

///   TREE
///   12   1 2   1 3   1 13   2 5   3 4   5 6   5 7   5 8   8 12   4 9   4 10   10 11   1
///   12   1 2   1 3   1 13   2 5   3 4   5 6   5 7   5 8   8 12   4 9   4 10   10 11   4

///   GRAPH
///   9   1 3   1 5   3 2    3 5   3 4   3 6   4 6   2 6   5 6   1
///   9   1 3   1 5   3 2    3 5   3 4   3 6   4 6   2 6   5 6   3
///   9   1 3   1 5   3 2    3 5   3 4   3 6   4 6   2 6   5 6   4

int main()
{
    lli i,n,e,root;

    cout<<"Enter Total Number of edges : ";
    cin>>e;

    while(e--)
    {
        lli x,y;
        cout<<"Enter Two Connected Nodes : ";
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);

    }

    cout<<"Enter Root/Starting Node : ";
    cin>>root;

    bfs(root);

    cout<<"\n\nOutput : "<<endl;

    for(auto x:lvl)
    {
        cout<<"Level of "<<x.first<<" = "<<x.second<<endl;
    }




    return 0;
}

