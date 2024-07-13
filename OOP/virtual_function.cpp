#include<bits/stdc++.h>
using namespace std;
class base
{
public:
    virtual void vf()
    {
        cout<<"Base\n";
    }
};
class drv1:public base
{
public:
    void vf()
    {
        cout<<"Derive 1\n";
    }
};
class drv2:public base
{
public:
    void vf()
    {
        cout<<"Derive 2\n";
    }
};
int main()
{
    base b,*p;
    drv1 d1;
    drv2 d2;

    p=&b;
    p->vf();

    p=&d1;
    p->vf();

    p=&d2;
    p->vf();

}
