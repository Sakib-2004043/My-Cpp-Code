/// Even Number Counting And Sub Tree Sum for every Node in Tree.

#include<bits/stdc++.h>
typedef long long lli;
using namespace std;

const lli N = 1e5+5;
vector<lli>tr[N];
map<lli,lli>sub_tree_sum;
map<lli,lli>even_count;

void dfs(lli vrtx,lli par)
{
    sub_tree_sum[vrtx]+=vrtx;
    if(vrtx%2==0)even_count[vrtx]++;
    for(auto child : tr[vrtx])
    {
        if(child == par)continue;

        dfs(child,vrtx);

        sub_tree_sum[vrtx]+=sub_tree_sum[child];
        even_count[vrtx]+=even_count[child];
    }

}
///  12 1 2 1 3 1 13 2 5 3 4 5 6 5 7 5 8 8 12 4 9 4 10 10 11 1

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

    cout<<"\n\n\t OUTPUT >> \n\n";

    dfs(r,0);

    for(auto x:st)
    {
        cout<<"Sub Tree Sum of vertex "<<x<<" = "<<sub_tree_sum[x]<<endl;
        cout<<"Even  Count  of vertex "<<x<<" = "<<even_count[x]<<endl<<endl;
    }
}

