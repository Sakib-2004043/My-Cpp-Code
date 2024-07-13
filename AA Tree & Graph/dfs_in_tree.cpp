/// FINDING HEIGHT AND DEPTH OF ANY NODE IN TREE BY DFS IN TREE..........

#include<bits/stdc++.h>
typedef long long lli;
using namespace std;

const int N=1e5+10;
vector<lli>tr[N];

map<lli,lli>depth;
map<lli,lli>height;

void dfs(lli vrtx,lli par)
{
    for(auto child : tr[vrtx])
    {
        if(par == child)continue;
        depth[child] = depth[vrtx] + 1;
        dfs(child,vrtx);
        height[vrtx]=max(height[vrtx],height[child] + 1);
    }
}

//  12 1 2 1 3 1 13 2 5 3 4 5 6 5 7 5 8 8 12 4 9 4 10 10 11 1

int main()
{
    lli i,n,e,r;
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

        st.insert(n1);
        st.insert(n2);
    }

    cout<<"\nNow Enter Root : ";
    cin>>r;
    depth[r]=0;

    cout<<"\n\n\t OUTPUT >> \n\n";

    dfs(r,0);


    for(auto x:st)
    {
        cout<<"Vertex : "<<x<<endl;
        cout<<"Height : "<<height[x]<<endl;
        cout<<"Depth  : "<<depth[x]<<endl<<endl;
    }
    return 0;
}

