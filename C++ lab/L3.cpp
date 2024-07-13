#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class student
{
private:
    long long roll;
    static int cnt;
public:
    void static getcount()
    {
        cout<<"Number of Object : "<<cnt;
    }
    void getnumber()
    {
        cout<<"Enter Roll No : ";
        cin>>roll;
        cnt++;
    }
    void putnumber()
    {
        cout<<"Roll No : "<<roll<<endl;
    }
};
int student::cnt;
int main()
{
    int i,n;
    student st;
    cout<<"Initially ";
    st.getcount();
    cout<<"\nEnter Number of Entry : ";
    cin>>n;
    student s[n];
    for(i=0;i<n;i++)
    {
        s[i].getnumber();
    }
    cout<<"\n\nOUTPUT\n\n";
    for(i=0;i<n;i++)
    {
        s[i].putnumber();
    }
    cout<<"Finally ";
    st.getcount();
    getch();
    return 0;
}
