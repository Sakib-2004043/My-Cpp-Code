#include<bits/stdc++.h>
using namespace std;
class cmp
{
private:
    double r,i;
public:
    dec()
    {
        cin>>r>>i;
    }
    void dis()
    {
        cout<<r<<' '<<i<<endl;
    }
    friend cmp operator+(cmp,cmp);
    friend cmp operator+(cmp,double);
    friend cmp operator+(double,cmp);
};
cmp operator+(cmp x,cmp y)
{
    cmp z;
    z.r=x.r+y.r;
    z.i=x.i+y.i;
    return z;
}
cmp operator+(cmp x,double y)
{
    cmp z;
    z.r=x.r+y;
    z.i=x.i+y;
    return z;
}
cmp operator+(double y,cmp x)
{
    cmp z;
    z.r=y+x.r;
    z.i=y+x.i;
    return z;
}
int main()
{
    cmp a,b,c;
    a.dec();
    b.dec();
    c=a+10;
    c.dis();
    c=8+b;
    c.dis();
    c=a+b;
    c.dis();
    return 0;
}
