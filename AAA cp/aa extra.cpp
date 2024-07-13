#include<bits/stdc++.h>
#include<stdlib.h>
typedef long long int lli;
typedef long double ld;
///Vector
#define mst(aa,nn) memset(aa,nn,sizeof(aa))
#define vll vector<long long>
#define vs vector<string>
#define vc vector<char>
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


vector<lli>vex;
void extra()
{
    lli x,y;

    x=5;
    y=9;
    while(y<=1e17)
    {
        vex.pb(x*2);
        vex.pb(y*2);

        x=x*10+5;
        y=y*10+9;
    }
    //vex.pb(555555555555555555);
    //vex.pb(999999999999999999);
}

void Bismillah()
{
    lli n,i,x,k;

    cin>>x;
    show1(vex);

    if(x%10==9)nor;
    if(x%100 < 10)nor;

    k=x/10;
    while(k)
    {
        lli z=k%10;
        if(!z)nor;
        k/=10;
    }

    n=vex.size();

    for(i=1;i<n;i++)
    {
        if(x>=vex[i-1] && x<=vex[i])
        {
            //cout<<i-1<<" "<<i<<endl;
            ysr;
        }
        i++;
    }
    no;


}
int main()
{

    //  freopen("input.txt","r",stdin);
    //  freopen("output.txt","w",stdout);

    //*

    //fast();

    extra();

    test()
    {
        Bismillah();
    }

    //*/

    return 0;
}

