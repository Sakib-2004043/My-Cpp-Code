///  https://www.spoj.com/problems/NAKANJ/
///  Finding The Shortest Path Of a knight in chess board...
///  Implementation Of BFS in Matrix Form...


#include<bits/stdc++.h>
typedef long long lli;
using namespace std;

#define ss second
#define ff first

const lli N = 1e5+5;
vector<pair<lli,lli>>g[N];
map<pair<lli,lli>,bool>vis;
map<pair<lli,lli>,lli>lvl;

vector<pair<lli,lli>>movement = {
    {1,2},{2,1},{-1,2},{-2,1},{1,-2},{2,-1},{-2,-1},{-1,-2}
};

bool is_valid(pair<lli,lli>ngb)
{
    if(ngb.ff<1 || ngb.ff >8)return false;
    if(ngb.ss<1 || ngb.ss >8)return false;
    return true;
}

lli bfs(lli sx,lli sy,lli fx,lli fy)
{
    queue<pair<lli,lli>>q;
    pair<lli,lli>dst(fx,fy);
    vis[{sx,sy}]=true;
    q.push({sx,sy});
    lvl[{sx,sy}]=0;

    while(!q.empty())
    {
        pair<lli,lli> node = q.front();
        q.pop();

        if(node == dst)return lvl[node];

        //if(vis[node])continue;  //// !!!  BE AWARE ABOUT IT.

        for(auto mv : movement)
        {
            pair<lli,lli>ngb;
            ngb.ff = node.ff + mv.ff;
            ngb.ss = node.ss + mv.ss;

            if(!is_valid(ngb))continue;
            if(vis[ngb])continue;

            q.push(ngb);
            vis[ngb]=true;
            lvl[ngb]=lvl[node]+1;
        }
    }
}

/// a1 h8
/// a1 c2
/// h8 c3


int main()
{
    lli i,n,e,sx,sy,fx,fy,ans;
    string start,finish;

    cout<<"Enter The Starting Point : ";
    cin>>start;
    cout<<"Enter The  Ending  Point : ";
    cin>>finish;

    sx=start[0]-'a'+1;
    fx=finish[0]-'a'+1;

    sy=start[1]-'0';
    fy=finish[1]-'0';

    ans=bfs(sx,sy,fx,fy);

    cout<<"\n\nTotal Move : "<<ans<<endl;

    return 0;
}


