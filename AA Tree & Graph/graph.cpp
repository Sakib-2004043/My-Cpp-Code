#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,l,i,j;
    cin>>n;
    cin>>l;
    vector<int>g[n+1];
    for(i=1;i<=l;i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for(i=1;i<=n;i++)
    {
        for(j=0;j<g[i].size();j++)
        {
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }




}
