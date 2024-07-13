#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;

vector<int>v[N];

int main()
{
    int n,l,i,z;
    cout<<"Input Number : ";
    cin>>i;
    cout<<endl;
    while(i--)
    {
        cout<<"Enter Node : ";
        cin>>n;
        cout<<"Enter leaf : ";
        cin>>l;
        v[n].push_back(l);
    }
    for(auto x : v)
    {
        //cout<<x<<"->";
        z=0;
        for(auto y : x)
        {
            z=1;
            cout<<y<<' ';
        }
        if(z)cout<<endl;
    }
}
