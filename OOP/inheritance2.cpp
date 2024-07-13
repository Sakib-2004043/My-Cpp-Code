#include<bits/stdc++.h>
using namespace std;
class base
{
private:
    int x;
public:
    base(int x)
    {
        this->x=x;
        cout<<"X="<<x<<" in base class"<<endl;
    }
};
class drv:public base
{
private:
    int y;
public:
    drv(int x):base(x)
    {
        cout<<"No Value for Y in derived class"<<endl;
    }
    drv(int x,int y):base(x)
    {
        this->y=y;
        cout<<"Y="<<y<<" in derived class"<<endl;
    }
};
int main()
{
    drv d(1),e(2,5);
    return 0;
}
