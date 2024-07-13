#include<bits/stdc++.h>
using namespace std;
template<class t>
void wap(t x,t y)
{
    cout<<x<<' '<<y<<endl;
    t temp;
    temp=x;
    cout<<"\nAfter Swapping\n\n";
    x=y;
    y=temp;
    cout<<x<<' '<<y<<endl;
    cout<<endl;
}
int main()
{
    wap(32,15);
    wap("Abu","Sakib");
    wap('%','#');
    wap(5.785,(double)15);

}

