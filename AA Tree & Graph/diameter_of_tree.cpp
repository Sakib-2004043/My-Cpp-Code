/// Diameter Of a Tree.

#include<bits/stdc++.h>
typedef long long lli;
using namespace std;
const lli N = 1e5+5;
vector<lli>tr[N];
map<lli,lli>depth;
lli max_depth = 0;
lli max_depth_node;

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
///  12 1 2 1 3 1 13 2 5 3 4 5 6 5 7 5 8 8 12 4 9 4 10 10 11 1
///  13 1 2 1 3 1 13 2 5 3 4 5 6 5 7 5 8 8 12 4 9 4 10 10 11 12 14 5

int main()
{
    lli i,n,e,r;
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


    }

    cout<<"\nNow Enter Random Node To Start : ";
    cin>>r;

    cout<<"\n\n\t OUTPUT >> \n\n";

    max_depth_node=r;
    dfs(r,0);

    depth.clear();

    dfs(max_depth_node,0);

    cout<<"Diameter Of tree : "<<max_depth<<endl<<endl;


}

