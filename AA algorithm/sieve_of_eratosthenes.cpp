#include<bits/stdc++.h>
typedef long long int lli;
using namespace std;
int main()
{
    lli q,i,j,x;
    const lli N=1e7;

    //
    vector<bool>p(N,true);
    p[0]=p[1]=false;
    for(i=2;i<=N;i++)
    {
        if(p[i])
        {
            for(j=2*i;j<=N;j+=i)p[j]=false;
        }
    }
    //

    cout<<"Enter The Number OF Queries : ";
    cin>>q;
    cout<<"Now Enter Numbers : \n";
    while(q--)
    {
        cin>>x;
        if(!p[x])cout<<"Not ";
        cout<<"Prime\n";
    }
    return 0;
}
