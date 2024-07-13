//Static_member.cpp
#include<bits/stdc++.h>
using namespace std;
class shared
{
public:
    static int a;
    int b;
    static void set_value(int i, int j)
    {
        a=i;
        //b=j;
    }
    void display()
    {
        cout<<"a: "<<a<<" b: "<<b<<endl;
    }
};
int main()
{
    shared x, y ;
    x.set_value(1,1);
    x.display();
    y.set_value(2,2);
    y.display();
    x.display();
}
