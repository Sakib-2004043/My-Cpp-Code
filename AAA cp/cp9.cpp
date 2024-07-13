#include<bits/stdc++.h>

typedef long long int lli;
typedef long double ld;
///Vector
#define vll vector<long long>
#define vld vector<long double>
#define vvll vector<vector<long long>>
#define pb push_back
#define inpt(vvv,nn) {lli ii,ee;for(ii=0;ii<nn;ii++){cin>>ee;vvv.pb(ee);}}
///Others
#define nl cout<<endl
#define nt cout<<'\t'
#define bgn begin()
#define en end()
#define ys cout<<"YES\n"
#define no cout<<"NO\n"
#define ysr  {cout<<"Yes\n";return;}
#define nor {cout<<"No\n";return;}
#define ss second
#define ff first
///Loop
#define fr(i,aa,bb) for(lli i=(aa);i<=(bb);i++)
#define afr(i,aa,bb) for(lli i=(aa);i<(bb);i++)
///REV & sort & bound
#define srt(aaa) sort(aaa.begin(),aaa.end())
#define rsrt(aaa) sort(aaa.rbegin(),aaa.rend())
#define rev(aaa) reverse(aaa.rbegin(),aaa.rend())
#define mxt(aa) *max_element(aa.begin(),aa.end())
#define mnt(aa) *min_element(aa.begin(),aa.end())
#define srted(aa) is_sorted(aa.begin(),aa.end())
#define rsrted(aa) is_sorted(aa.rbegin(),aa.rend())
#define isrted is_sorted
#define upb(aa,nn) upper_bound(aa.begin(),aa.end(),nn);
#define  lpb(aa,nn) lower_bound(aa.begin(),aa.end(),nn);
///Show
#define show1(aaa)for(auto x : aaa)cout<<x<<' ';nl
#define show2(aaa)for(auto x:aaa){for(auto y:x)cout<<y<<' ';nl;}
#define show_mp(mm) for(auto x:mm)cout<<x.first<<' '<<x.second,nl
///test
#define test() lli tcc=0;cin>>tcc;while(tcc--)
///optimize
#define fast() ios::sync_with_stdio(0); cin.tie(0)
using namespace std;
void start()
{
    lli i,n,k;
    vll v,w;

    cin>>n>>k;
    inpt(v,n);
    inpt(w,k);

    srt(v);show1(v);
    for(i=1;i<n;i++)v[i]+=v[i-1];
    show1(v);

}
int main()
{
    fast();
    test()
    {
        start();
    }
    return 0;
}

