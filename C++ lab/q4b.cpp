#include<bits/stdc++.h>
using namespace std;
class Distance
{
private:
    double f,i;
public:
    Distance(double f,double i)
    {
        this->f=f;
        this->i=i;
    }
    void show()
    {
        cout<<"Feet = "<<f<<endl;
        cout<<"Inch = "<<i<<endl;
        cout<<endl;
    }
    bool operator<(Distance d)
    {
        if(f<d.f)return true;
        else if(f==d.f && i<d.i)return true;
        else return false;
    }
};
int main()
{
    Distance D1 (6,7), D2 (7, 8);
    D1.show();
    D2.show();
    if (D1<D2) cout<<"D1 is less than D2"<<endl;
    else cout<<"D1 is greater (or equal to) D2"<<endl;
    return 0;
}







