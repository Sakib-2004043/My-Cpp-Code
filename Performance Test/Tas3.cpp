#include<bits/stdc++.h>
using namespace std;
typedef long long lli;

int Binary_search(int x[],int size,int target)
{
    int maximum= size-1;
    int minimum = 0;
    int mean;
    while (maximum>minimum)
        {
        mean = (maximum+minimum)/2;
        if (x[mean] == target)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        else if(x[mean] > target)
        {
            maximum = (mean-1);
        }
        else
        {
            minimum = (mean+1);
        }
    }
    return -1;
}

int main()
{
    lli i,n,e,x;

    cin>>n;
    int v[n*n];
    for(i=0;i<n*n;i++)
    {

        cin>>v[i];
    }
    cin>>x;
    int z=Binary_search(v,n*n,x);
    if(z)cout<<"NO"<<endl;
    return 0;
}
