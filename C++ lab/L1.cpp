#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,n,vst[500];
    memset(vst,0,sizeof(vst));
    getline(cin,s);
    n=s.size();
    while(n--)vst[(int)s[n]]++;

    for(i=0;i<259;i++)
    {
        if(vst[s[i]])
        {
            cout<<"Frequency of "<<s[i]<<" = "<<vst[s[i]]<<endl;
        }
    }

}
