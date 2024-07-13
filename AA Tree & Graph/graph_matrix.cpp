/// CONNECTED COMPONENTS TRAVARSING IN MATRIX FORM OF GRAPH.

#include<bits/stdc++.h>
typedef long long lli;
using namespace std;

const int N=1e3+10;
lli vis[N][N];
vector<vector<lli>>mtr;

void dfs(lli i,lli j,lli k)
{
    lli r,c;
    r=mtr.size();
    c=mtr[i].size();

    if(i<0 || j<0 || i>=r || j>=c)return;
    if(mtr[i][j]!=k)return;

    if(vis[i][j])return;

    vis[i][j]++;

    cout<<i+1<<" "<<j+1<<endl;

    dfs(i+1,j,k);
    dfs(i-1,j,k);
    dfs(i,j+1,k);
    dfs(i,j-1,k);




}

/*

5 4
1 1 0 0
0 1 0 0
2 2 0 2
0 2 2 2
2 2 0 0

*/


int main()
{
    lli n,r,c,i,j,e;
    cout<<"Enter  the number  of  row : ";
    cin>>r;
    cout<<"Enter the number of column : ";
    cin>>c;
    for(i=0;i<r;i++)
    {
        vector<lli>v;
        for(j=0;j<c;j++)
        {
            cin>>e;
            v.push_back(e);
        }
        mtr.push_back(v);
        v.clear();
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(vis[i][j])continue;
            cout<<"\n\nValue : "<<mtr[i][j]<<endl;
            dfs(i,j,mtr[i][j]);

        }
    }

    return 0;
}

