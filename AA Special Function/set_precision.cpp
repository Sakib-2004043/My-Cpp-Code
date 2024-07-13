#include<bits/stdc++.h>
#include<iomanip>

typedef long double ld;
using namespace std;
int main()
{
    ld x,y;
    x=2;
    y=5.875;

    cout<<"1  "<<showpoint<<x<<endl;
    cout<<"2  "<<showpoint<<y<<endl;

    cout<<"3  "<<noshowpoint<<x<<endl;
    cout<<"4  "<<noshowpoint<<y<<endl;

    cout<<"5  "<<setprecision(2)<<y<<endl;
    cout<<"6  "<<fixed<<setprecision(7)<<y<<endl;
}
