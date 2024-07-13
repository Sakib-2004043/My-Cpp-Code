#include<bits/stdc++.h>
using namespace std;
class cls
{
private:
    int x,y,z;
    cls(){};
    cls(int x,int y,int z)
    {
        this->x=x;
        this->y=y;
        this->z=z;
    }
    double sum(int p,int q)
    {
        cout<<p+q<<endl;
        return p*q;
    }
    int sum()
    {
        return x+y+z;
    }
    friend int main();
};
int main()
{
    cls c(2,3,4),d(10,15,18);
    cls *cp=&d;

    double (cls::*fp)(int,int);
    fp=&cls::sum;

    cout<<1/(c.*fp)(25,40)*(cp->*fp)(15,25)*6;
    return 0;
}
