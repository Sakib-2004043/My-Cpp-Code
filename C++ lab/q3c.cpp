#include<bits/stdc++.h>
using namespace std;
class home
{
private:
    double l,h,w;
public:
    home()
    {
        cin>>l>>w>>h;
    }
    friend class vol;
};
class vol
{
public:
    void print(home h)
    {
        cout<<"Volume = "<<h.l*h.w*h.h<<endl;
    }
};
int main()
{
    home h;
    vol v;
    v.print(h);
    return 0;
}
