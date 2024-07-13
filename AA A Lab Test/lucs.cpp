#include<bits/stdc++.h>
typedef long long lli;
using namespace std;

int main()
{
    lli q;
    cin>>q;
    while(q--)
    {
        lli i,sx,sy,k;
        string x,y;
        map<char,lli>mx;
        map<char,lli>my;

        cin>>x>>y;
        sx=x.size();
        sy=y.size();

        for(i=0;i<sx;i++)mx[x[i]]++;
        for(i=0;i<sy;i++)my[y[i]]++;


        /*
        for(auto x:mx)
        {
            cout<<x.first<<" "<<x.second<<endl;
        }cout<<endl;

        for(auto x:my)
        {
            cout<<x.first<<" "<<x.second<<endl;
        }
        */

        for(i=0;i<sx;i++)
        {
            k=mx[x[i]]-my[x[i]];
            while(k>0)
            {
                cout<<x[i];
                k--;
            }
        }
        cout<<" ";
        for(i=0;i<sy;i++)
        {
            k=my[y[i]]-mx[y[i]];
            while(k>0)
            {
                cout<<y[i];
                k--;
            }
        }
        cout<<endl;
        mx.clear();
        my.clear();





    }






    return 0;
}
