#include<iostream>
#include<conio.h>
using namespace std;
float aray(float y[],int m)
{
    int i;
    float t=0;
    for(i=0;i<m;i++)
    {
        t+=y[i];
    }
    return t;
}
int main( )
{
    int n,i;
    float x[999],s;
    cout<<"How many numbers do you want to sum:";
    cin>>n;
    cout<<"Now enter "<<n<<" Numbers.\n";
    for(i=0;i<n;i++)
    {
        cin>>x[i];
    }
    s=aray(x,n);
    cout<<"Summation="<<s;
    getch( );
}

