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
const lli N=1e6+1;
const lli mod=998244353;

vector<lli>va;
void makeArray()
{
    lli i;
    for(i=2;true;i++)
    {
        string s;
        char ch[100];
        lltoa(i,ch,2);
        s=ch;
        lli num = stol(s);
        va.pb(num);
        if(num>=1e6)return;
    }

}
void Bismillah()
{
    lli n,i,x;
    cin>>n;
    string str = to_string(n);
    x=0;
    for(i=0;i<str.size();i++)
    {
        if(str[i]=='0'||str[i]=='1')continue;
        else x++;
    }
    if(!x)ysr;
    for(i=0;i<va.size();i++)
    {
        while(n%va[i]==0)n/=va[i];
        if(n==1)ysr;
    }
    nor;
}
int main()
{

    //  freopen("input.txt","r",stdin);
    //  freopen("output.txt","w",stdout);

    //*

    //fast();

    makeArray();


    test()
    {
        Bismillah();
    }

    //*/

    return 0;
}
