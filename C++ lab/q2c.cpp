#include<bits/stdc++.h>
using namespace std;
class cls
{
private:
    int x,y;
public:
    void setter()
    {
        int x,y;
        cin>>x>>y;
        cout<<add(x,y)<<endl;
    }
    int add(int x,int y)
    {
        return x+y;
    }
};
int main()
{
    cls c;
    c.setter();
    return 0;
}
