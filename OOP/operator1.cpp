#include<bits/stdc++.h>
using namespace std;
class uop
{
private:
    int x,y,z;
public:
    uop()
    {
        x=0;
        y=0;
        z=0;
    }
    uop(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    int operator!();
    void display()
    {
        cout<<x<<' '<<y<<' '<<z<<endl;
    }
};
int uop::operator!()
{
    x*=x;
    y/=y;
    ++y;
    --x;
    z+=z;
    return x-y+z;
}
int main()
{
    uop a(10,-20,30);
    a.display();
    cout<<!a<<endl;
    a.display();
    return 0;
}
