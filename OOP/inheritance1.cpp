#include<bits/stdc++.h>
using namespace std;
class parent
{
private:
    int a;
protected:
    int p,q;
public:
    int c;
};
class child:public parent
{
public:
    int r;
    void seter(int p,int q,int r=0)
    {
        parent::p=p;
        this->q=q;
        this->r=r;
    }
    void geter()
    {
        cout<<p<<' '<<q<<' '<<r<<endl;
    }
};
int main()
{
    child c1;
    c1.seter(5,8,13);
    c1.geter();
    return 0;
}
