#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;

vector<int>v[N];
vector<bool>vis(N,false);

void dfs(int vrtx)
{
    vis[vrtx]=true;
    for(auto child : v[vrtx])
    {

        if(vis[child])continue;
        cout<<"Parent :- "<<vrtx<<"\tChild :- "<<child<<endl;
        dfs(child);
    }
    cout<<endl;

}
int main()
{
    int n,l,i,r;
    cout<<"Input Total Node : ";
    cin>>i;
    cout<<endl;
    cout<<"Enter Number of Edges : ";
    cin>>i;
    cout<<endl;
    while(i--)
    {
        cout<<"Enter parent : ";
        cin>>n;
        cout<<"Enter  child : ";
        cin>>l;
        v[n].push_back(l);
        v[l].push_back(n);
        sort(v[n].begin(),v[n].end());
        sort(v[l].begin(),v[l].end());
    }
    cout<<"\n\nEnter Root : ";
    cin>>r;
    cout<<endl<<endl;
    dfs(r);
    return 0;
}
// 6 9 1 3 1 5 3 5 3 4 3 6 3 2 2 6 4 6 5 6
