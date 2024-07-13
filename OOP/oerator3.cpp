#include<bits/stdc++.h>
using namespace std;
class dist
{
private:
    double f,i;
public:
    void seter()
    {
        cin>>f>>i;
    }
    bool operator>(dist);
    bool operator<(dist x)
    {
        if(f<x.f)return true;
        else if(f==x.f && i<x.i)return true;
        else return false;
    }
};
bool dist::operator>(dist x)
{
    if(f>x.f)return true;
    else if(f==x.f && i>x.i)return true;
    else return false;
}
int main()
{
    dist a,b,c;
    a.seter();
    b.seter();

    if(a>b)cout<<"1st Greater.\n";
    else cout<<"2nd Greater.\n";

    if(a<b)cout<<"1st Smaller.\n";
    else cout<<"2nd Smaller.\n";
}
