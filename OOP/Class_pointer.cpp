#include<bits/stdc++.h>
using namespace std;
class cls
{
public:
    int x,y,z;
    cls(){};
    cls(int x,int y,int z)
    {
        this->x=x;
        this->y=y;
        this->z=z;
    }
    void sum(int p,int q)
    {
        cout<<p+q<<endl;
    }
    int sum()
    {
        return x+y+z;
    }
};
int main()
{
    // Total Class Pointer of One Object  >>
    cls c1(2,5,8),c2(12,15,18),c;
    cls *cp;
    cp=&c1;
    cout<<c1.x<<endl;
    cout<<(*cp).y<<endl;
    cout<<cp->z<<endl;
    cp=&c2;
    cout<<c2.x<<endl;
    cout<<(*cp).y<<endl;
    cout<<cp->z<<endl;

    cout<<"\n\n\n";

    // Data members Pointer of All Object >>
    int cls::*vptr;
    vptr=&cls::x;
    cout<<c1.*vptr<<endl;
    cout<<c2.*vptr<<endl;
    vptr=&cls::y;
    cout<<c1.*vptr<<endl;
    cout<<c2.*vptr<<endl;
    vptr=&cls::z;
    cout<<c1.*vptr<<endl;
    cout<<c2.*vptr<<endl;

    cout<<"\n\n\n";

    // Member Functions Pointer >>
    void (cls::*fptr)(int,int);
    fptr=&cls::sum;
    (c.*fptr)(5,8);      // Member Function Calling With Object and Function Pointer
    cls *cls_p;
    cls_p=&c;
    (cls_p->*fptr)(7,8); // Member Function Calling with Object pointer and Function Pointer

    // Function With No parameter is invalid.

    return 0;
}
