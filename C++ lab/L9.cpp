#include<bits/stdc++.h>
using namespace std;
class planet
{
private:
    string nam;
    double dist,diam;
    int moon;
public:
    void set_planet_nam()
    {
        cin>>nam;
    }
    get_planet_nam()
    {
        cout<<nam<<endl;
    }
    void set_dist_from_sun()
    {
        cin>>dist;
    }
    get_dist_from_sun()
    {
        cout<<dist<<endl;
    }
    void set_no_of_moon()
    {
        cin>>moon;
    }
    get_no_of_moon()
    {
        cout<<moon<<endl;
    }
    void set_diameter()
    {
        cin>>diam;
    }
    get_diameter()
    {
        cout<<diam<<endl;
    }
    friend double avg(planet*,int);
};
double avg(planet *p,int x)
{
    double s=0;
    for(int i=0;i<x;i++)
    {
        s+=p->diam;
        p++;
    }
    return s/x;
}
int main()
{
    int n;
    cin>>n;
    planet p[n];
    for(int i=0;i<n;i++)
    {   p[i].set_planet_nam();
        p[i].set_dist_from_sun();
        p[i].set_diameter();
        p[i].set_no_of_moon();
    }
    cout<<"Average Diameter : "<<avg(&p[0],n)<<endl;
    return 0;
}
