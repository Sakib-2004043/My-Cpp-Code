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
    friend double light(planet);
};
double light(planet x)
{
    return x.dist/0.186;
}
int main()
{
    int n;
    double ad[99999],s=0;
    cin>>n;
    planet p[n];
    for(int i=0;i<n;i++)
    {   p[i].set_planet_nam();
        p[i].set_dist_from_sun();
        p[i].set_diameter();
        p[i].set_no_of_moon();
        ad[i]=light(p[i]);
        s+=ad[i];
    }
    cout<<"Average : "<<s/n<<endl;


    return 0;
}
