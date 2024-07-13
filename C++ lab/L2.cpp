#include<bits/stdc++.h>
using namespace std;
class Marks
{
protected:
    int mark,roll;
    string name;
public:
    static int m_total,c_total,p_total;
};
class physics:public Marks
{
public:
    void setter(string nam,int rol)
    {
        cout<<"Enter  marks  of Physics : ";
        cin>>mark;
        name=nam;
        roll=rol;
        p_total+=mark;
    }
    void show()
    {
        cout<<setw(25)<<name;
        cout<<setw(25)<<roll;
        cout<<setw(25)<<mark;
        cout<<endl;
    }
    void sum_avg(int n)
    {
        cout<<"\nTotal marks at physics = "<<p_total<<endl;
        cout<<"          Average Mark = "<<(double)p_total/n<<endl;
    }
};
class chemistry:public Marks
{
public:
    void setter(string nam,int rol)
    {
        cout<<"Enter marks at Chemistry : ";
        cin>>mark;
        name=nam;
        roll=rol;
        c_total+=mark;
    }
    void show()
    {
        cout<<setw(25)<<name;
        cout<<setw(25)<<roll;
        cout<<setw(25)<<mark;
        cout<<endl;
    }
    void sum_avg(int n)
    {
        cout<<"\nTotal marks at Chemistry = "<<c_total<<endl;
        cout<<"            Average Mark = "<<(double)c_total/n<<endl;
    }
};
class math:public Marks
{
public:
    void setter(string nam,int rol)
    {
        cout<<"Enter   marks   at  Math : ";
        cin>>mark;
        name=nam;
        roll=rol;
        m_total+=mark;
    }
    void show()
    {
        cout<<setw(25)<<name;
        cout<<setw(25)<<roll;
        cout<<setw(25)<<mark;
        cout<<endl;
    }
    void sum_avg(int n)
    {
        cout<<"\nTotal marks at Math = "<<m_total<<endl;
        cout<<"       Average Mark = "<<(double)m_total/n<<endl;
    }
};
void display()
{
    cout<<setw(25)<<"Name";
    cout<<setw(25)<<"Roll";
    cout<<setw(25)<<"Mark";
    cout<<endl;
}
int Marks::p_total;
int Marks::c_total;
int Marks::m_total;
int main()
{
    int i,n,rol;
    string nam;
    vector<physics>p;
    vector<chemistry>c;
    vector<math>m;
    cout<<"Enter Number of student : ";
    cin>>n;
    cout<<"\nNow enter data of "<<n<<" students >>>\n";
    for(i=1;i<=n;i++)
    {
        physics pp;
        chemistry cc;
        math mm;
        cout<<"\nStudent No - "<<i<<endl;
        cout<<"Enter Name : ";
        fflush(stdin);
        getline(cin,nam);
        fflush(stdin);
        cout<<"Enter   Id : ";
        cin>>rol;
        pp.setter(nam,rol);
        cc.setter(nam,rol);
        mm.setter(nam,rol);
        p.push_back(pp);
        c.push_back(cc);
        m.push_back(mm);
    }

    cout<<"\n\nMarks of Physics >>"<<endl;
    display();
    for(i=0;i<n;i++)
    {
        p[i].show();
    }
    p[0].sum_avg(n);
    cout<<"\n\nMarks of Chemistry >>"<<endl;
    display();
    for(i=0;i<n;i++)
    {
        c[i].show();
    }
    c[0].sum_avg(n);
    cout<<"\n\nMarks of Math >>"<<endl;
    display();
    for(i=0;i<n;i++)
    {
        m[i].show();
    }
    m[0].sum_avg(n);
    return 0;
}
