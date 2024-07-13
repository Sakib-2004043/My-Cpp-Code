#include<bits/stdc++.h>
using namespace std;
class num
{
protected:
    int x;
public:
    void setter(int x)
    {
        this->x=x;
    }
    virtual void show()=0;
};
class hex_type:public num
{
public:
    void show()
    {
        cout<<hex<<x<<endl;
    }
};
class oct_type:public num
{
public:
    void show()
    {
        cout<<oct<<x<<endl;
    }
};
int main()
{
    hex_type hx;
    oct_type oc;

    hx.setter(20);
    oc.setter(20);

    hx.show();
    oc.show();

    return 0;
}
