/// Check Example Properly. Here,
/// Example is main for understanding

#include<bits/stdc++.h>
typedef long long int lli;
using namespace std;
int main()
{
    lli i,n,e;
    vector<lli>v;
    vector<lli>::iterator up,lw;
    n=15;
    for(i=0;i<n;i++)
    {
        e=rand()%66+2;
        if(e!=4)v.push_back(e);
    }
    v.push_back(1);
    v.push_back(4);
    v.push_back(8);

    sort(v.begin(),v.end()); // Sorting Mendatory

    for(auto x:v)cout<<x<<' ';
    cout<<endl;

    cc:
    cout<<"\nEnter N : ";
    cin>>n;

    up=upper_bound(v.begin(),v.end(),n); // Must be sorted
    lw=lower_bound(v.begin(),v.end(),n);   // Must be sorted

    cout<<"Lower bound at position : " <<lw-v.begin()<<endl;
    cout<<"Upper bound at position : " <<up-v.begin()<<endl;

    goto cc; // For Repeating Process
    return 0;
}
