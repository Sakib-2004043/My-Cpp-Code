#include<bits/stdc++.h>
using namespace std;
typedef long long lli;
int main()
{
    lli tt;
    tt=4&7;
    tt=1;
    //cout<<tt;
    cin>>tt;
    while(tt--)
    {
        lli i,n;
        vector<long long>x;
        cin>>n;
        for(i=1;i<=n;i++)x.push_back(i);

        for(i=0;i<n/2;i+=2){
            swap(x[i],x[n-i-1]);
        }

        for(auto z:x)cout<<z<<" ";
        cout<<endl;
    }
    return 0;
}
