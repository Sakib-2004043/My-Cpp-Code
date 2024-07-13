//  Passing Arguments to Base Class Constructor
#include<bits/stdc++.h>
using namespace std;
class base
{
private:
    int x;
public:
    base(int x)
    {
        cout<<"Base Class X = "<<x<<endl;
    }
    base(int x,int y)
    {
        cout<<"Base Class \nX = "<<x<<endl;
        cout<<"Y = "<<y<<endl;
    }
    //~base();
};
class drv:public base
{
private:
    int y;
public:
    drv(int x):base(x)
    {
        cout<<"\n\nDerive Class : \n";
        cout<<"X = "<<x<<endl;
        cout<<"No Value For Y.\n\n";
    }
    drv(int x,int y):base(x,y)
    {
        cout<<"\n\nDerive Class : \n";
        cout<<"X = "<<x<<endl;
        cout<<"Y = "<<y<<endl;
    }
    //~drv();
};
int main()
{
    drv a(5),b(7,8);
    return 0;
}
