#include<bits/stdc++.h>
using namespace std;
typedef long long lli;
map<lli,lli>m;

lli check(int x)
{
    if(x==0)return 0;
    else if(x==1)return 2;
    else if(x==2)return 1;
    else if(m[x])return m[x];
    else return check(x-1)+check(x-3);
}

int main()
{
    lli n,i,k;
    cin>>n;
    i=0;
    while(1)
    {
        k=check(i);
        m[i]=k;
        if(k==n)
        {
            cout<<"YES"<<endl;
            break;
        }
        else if(k>n)
        {
            cout<<"NO"<<endl;
            break;
        }
        i++;
    }
    return 0;
}

