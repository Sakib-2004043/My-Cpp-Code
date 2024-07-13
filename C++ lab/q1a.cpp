#include<bits/stdc++.h>
using namespace std;
double power(double m,int n=2)
{
    return pow(m,n);
}
int main()
{
    double m;
    int n;
    cin>>m>>n;
    cout<<power(m,n)<<endl;
    cout<<power(m)<<endl;
    return 0;
}
