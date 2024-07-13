#include<bits/stdc++.h>
#include<stdlib.h>
typedef long long int lli;
typedef long double ld;
///Vector
#define mst(aa,nn) memset(aa,nn,sizeof(aa))
#define vll vector<long long>
#define vs vector<string>
#define vld vector<long double>
#define vvll vector<vector<long long>>
#define pb push_back
#define inpt(vvv,nn) {lli ii,eee;for(ii=0;ii<nn;ii++){cin>>eee;vvv.pb(eee);}}
///Others
#define anns cout<<"\nAns : ";
#define tt cout<<1;
#define nl cout<<endl
#define nt cout<<'\t'
#define bb begin()
#define ee end()
#define ys cout<<"YES\n"
#define no cout<<"NO\n"
#define mo cout<<"-1\n"
#define ysr {cout<<"YES\n";return;}
#define nor {cout<<"NO\n";return;}
#define mor {cout<<"-1\n";return;}
#define zor {cout<<"0\n";return;}
#define ss second
#define ff first
///Loop
#define loop(kk) for(lli jj=0;jj<kk;jj++)
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
#define upb(aa,nn) upper_bound(aa.begin(),aa.end(),nn)
#define lwb(aa,nn) lower_bound(aa.begin(),aa.end(),nn)
#define fnd(v,x) find(v.bb,v.ee,x)!=v.ee
#define cnt(vectr,elemnt) count(vectr.begin(),vectr.end(), elemnt);
///Show
#define show1(aaa)for(auto x : aaa)cout<<x<<' ';nl
#define show2(aaa)for(auto x:aaa){for(auto y:x)cout<<y<<' ';nl;}
#define show_mp(mm) for(auto x:mm)cout<<x.first<<' '<<x.second,nl
///test
#define test() lli tcc=0;cin>>tcc;while(tcc--)
///optimize
#define fast() ios::sync_with_stdio(0); cin.tie(0)

using namespace std;
const lli N=2e15+5;
const lli mod=1e9+7;

void Bismillah()
{
    lli i,n,k,mx,ans;
    vll v;

    cin>>n;

    inpt(v,n);

    mx=mxt(v);

    for(i=0;i<n;i++)
    {
        if(v[i]==mx)
        {
            ans=i;
            //goto fff;
        }
    }
    //fff:;
    ans+=mx;

    cout<<ans<<endl;

}

int main()
{

    //  freopen("input.txt","r",stdin);
    //  freopen("output.txt","w",stdout);

    //*

    //fast();



    test()
    {
        Bismillah();
    }

    //*/

    return 0;
}
