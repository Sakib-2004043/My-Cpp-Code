#include<bits/stdc++.h>
using namespace std;
class shape
{
protected:
    double l,w;
public:
    shape()
    {
        cout<<"Enter Length : ";
        cin>>l;
        cout<<"Enter  Width : ";
        cin>>w;
    }
    virtual void area()=0;
};
class rectangle:public shape
{
public:
    void area()
    {
        cout<<"\nRectangle Area= "<<l*w<<endl;
    }
};
class triangle:public shape
{
public:
    void area()
    {
        cout<<"\nTriangle Area= "<<0.5*l*w<<endl;
    }
};
int main()
{
    int n;
    shape *p;
    cout<<"Press -> "<<endl;
    cout<<"\t 1.For Rectangle.\n";
    cout<<"\t 2.For  Triangle.\n\n";
    cout<<"Enter Choice : ";
    cin>>n;
    cout<<endl;
    if(n==1)
    {
        rectangle r;
        p=&r;
        p->area();
    }
    if(n==2)
    {
        triangle t;
        p=&t;
        p->area();
    }
    return 0;
}
