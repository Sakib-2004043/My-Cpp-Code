///  https://www.interviewbit.com/problems/delete-edge/
///  Deleting edge to make two subtree , then maximize the multiplication of their sum.

#include<bits/stdc++.h>
typedef long long lli;
using namespace std;

const lli N = 1e5+5;
vector<lli>tr[N];
map<lli,lli>sub_tree_sum;

lli total;
lli max_product = 0;

void dfs_sum(lli vrtx,lli par)
{
    sub_tree_sum[vrtx]+=vrtx;
    for(auto child : tr[vrtx])
    {
        if(child == par)continue;

        dfs_sum(child,vrtx);

        sub_tree_sum[vrtx]+=sub_tree_sum[child];
    }

}

///  4  10 5 12 6   3   1 2 1 4 4 3
///  ANS = 270

///  2   11 12      1   1 2
///  ANS = 132

int main()
{
    lli i,n,e,root;
    map<lli,lli>val;
    cout<<"Enter Total Number of vertex : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>e;
        val[i]=e;
    }

    cout<<"Enter Total Number of edges : ";
    cin>>e;

    while(e--)
    {
        lli x,y;
        cout<<"Enter Two Connected Nodes : ";
        cin>>x>>y;
        tr[val[x]].push_back(val[y]);
        tr[val[y]].push_back(val[x]);

        /// Two push_back need for back_Travarsing...

    }

    root = val[1];

    dfs_sum(root,0);

    total = sub_tree_sum[root];

    for(i=1;i<=n;i++)
    {
        lli m = sub_tree_sum[val[i]];
        m= m*(total-m);
        max_product=max(max_product,m);

    }

    cout<<"\n\nMax Product : "<<max_product<<endl;

    return 0;
}

