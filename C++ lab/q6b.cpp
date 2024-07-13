#include<bits/stdc++.h>
using namespace std;
class a
{
protected:
    int x;
public:
    a(int x)
    {
        this->x=x;
        cout<<"Bx "<<x<<endl;
    }
};
class b:private a
{
public:
    b(int x):a(x)
    {
        this->x=x;
        cout<<"Dx "<<x<<endl;
    }
};
int main()
{
    b v(2);

}


