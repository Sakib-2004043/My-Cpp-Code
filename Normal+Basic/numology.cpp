#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n;
    string s;
    ff:
    cout<<"Enter N : ";
    cin>>s;
    while(s.size()!=1)
    {
        m=s.size();
        n=0;
        while(m--)
        {
            n+=(s[m]-48);
        }
        s=to_string(n);
    }
    cout<<" Answer : "<<s<<endl<<endl;
    goto ff;
    return 0;
}
