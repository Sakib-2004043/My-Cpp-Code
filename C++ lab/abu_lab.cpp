#include<bits/stdc++.h>
using namespace std;
class day_care
{
protected:
    string name,id,mobile,address,status,guardian;
public:
    static void show()
    {
        cout<<"\nSelect -> \n";
        cout<<"\t 1.For Babysitters."<<endl;
        cout<<"\t 2.For Baby."<<endl;
        cout<<"\t 3.For Contact."<<endl;
        cout<<"\t 4.For Exit."<<endl;
        cout<<"\nEnter Choice : ";
    }
};
class babysitter:private day_care
{
public:
    babysitter()
    {
        cout<<"\nAdding Babysitter......\n";
        cout<<"Enter    Name : ";
        fflush(stdin);
        getline(cin,name);
        cout<<"Enter      ID : ";
        getline(cin,id);
        cout<<"Mobile     No : ";
        getline(cin,mobile);
        cout<<"Enter  Status : ";
        getline(cin,status);
        cout<<"Enter Address : ";
        getline(cin,address);
        fflush(stdin);
    }
    static void show()
    {
        cout<<"\nSelect -> \n";
        cout<<"\t 1.For List Of All Babysitters."<<endl;
        cout<<"\t 2.For Searching A Babysitter."<<endl;
        cout<<"\t 3.For Adding A New Babysitter."<<endl;
        cout<<"\t 4.For Updating Data Of a Babysitter."<<endl;
        cout<<"\t 5.For Removing A Babysitter."<<endl;
        cout<<"\t 6.For Going Back."<<endl;
        cout<<"\nEnter Choice : ";
    }
    void change()
    {
        cout<<"\nUpdating Babysitters Data......\n";
        while(1)
        {
            int n;
            cout<<"Select -> \n";
            cout<<"\t 1.For Updating Name."<<endl;
            cout<<"\t 2.For Updating ID."<<endl;
            cout<<"\t 3.For Updating Mobile No."<<endl;
            cout<<"\t 4.For Updating Status."<<endl;
            cout<<"\t 5.For Updating Address."<<endl;
            cout<<"\t 6.If Updating Complete."<<endl;
            cout<<"\nEnter Choice : ";
            cin>>n;
            fflush(stdin);
            cout<<endl;
            if(n==1)
            {
                cout<<"Enter New Name : ";
                getline(cin,name);
            }
            else if(n==2)
            {
                cout<<"Enter New ID : ";
                getline(cin,id);
            }
            else if(n==3)
            {
                cout<<"Enter New Mobile No: ";
                getline(cin,mobile);
            }
            else if(n==4)
            {
                cout<<"Enter New Status : ";
                getline(cin,status);
            }
            else if(n==5)
            {
                cout<<"Enter New Address : ";
                getline(cin,address);
            }
            else if(n==6)
            {
                break;
            }
            else
            {
                cout<<"\nInput Number Properly.\n";
                continue;
            }
            cout<<"Data Updated Successful.\n\n";
        }
    }
    bool delet(string s)
    {
        return s==id?true:false;
    }
    bool sarch(string s)
    {
        return s==id?true:false;
    }
    static void display_f()
    {
        cout<<"----------------------------------------------------------------------------------------------\n";
        cout<<setw(15)<<"Name";
        cout<<setw(15)<<"ID";
        cout<<setw(15)<<"Mobile";
        cout<<setw(15)<<"Status";
        cout<<setw(30)<<"Address";
        cout<<"\n----------------------------------------------------------------------------------------------\n";
    }
    void display_d()
    {
        cout<<setw(15)<<name;
        cout<<setw(15)<<id;
        cout<<setw(15)<<mobile;
        cout<<setw(15)<<status;
        cout<<setw(30)<<address;
        cout<<"\n----------------------------------------------------------------------------------------------\n";
    }
};
class baby:private day_care
{
public:
    baby()
    {
        cout<<"\nAdding Baby......\n";
        cout<<"Enter   Baby's   Name : ";
        fflush(stdin);
        getline(cin,name);
        cout<<"Enter Guardian's Name : ";
        getline(cin,guardian);
        cout<<"Enter   Baby   Id  No : ";
        getline(cin,id);
        cout<<"Guardian's  Mobile No : ";
        getline(cin,mobile);
        cout<<"Enter Baby's  Address : ";
        getline(cin,address);
        fflush(stdin);
    }
    static void show()
    {
        cout<<"\nSelect -> \n";
        cout<<"\t 1.For List Of All Baby."<<endl;
        cout<<"\t 2.For Searching A Baby."<<endl;
        cout<<"\t 3.For Adding A New Baby."<<endl;
        cout<<"\t 4.For Removing A Baby."<<endl;
        cout<<"\t 5.For Going Back."<<endl;
        cout<<"\nEnter Choice : ";
    }
    bool delet(string s)
    {
        return s==id?true:false;
    }
    bool sarch(string s)
    {
        return s==id?true:false;
    }
    static void display_f()
    {
        cout<<"----------------------------------------------------------------------------------------------------\n";
        cout<<setw(15)<<"Baby Name";
        cout<<setw(20)<<"Guardian Name";
        cout<<setw(15)<<"ID";
        cout<<setw(15)<<"Mobile";
        cout<<setw(30)<<"Address";
        cout<<"\n----------------------------------------------------------------------------------------------------\n";
    }
    void display_d()
    {
        cout<<setw(15)<<name;
        cout<<setw(20)<<guardian;
        cout<<setw(15)<<id;
        cout<<setw(15)<<mobile;
        cout<<setw(30)<<address;
        cout<<"\n----------------------------------------------------------------------------------------------------\n";
    }
};
int main()
{
    int i,n;
    string s;
    vector<baby>vb;
    vector<babysitter>vbs;
    cout<<"\t\t\t********Welcome to Horaira Kids Corner********\n";
    cout<<"\t\t\t_________A Sweet Heaven For Children__________\n";
    ss:
    day_care::show();
    cin>>n;
    if(n==1)while(1)
    {
        babysitter::show();
        cin>>n;
        if(n==1)
        {
            cout<<"\nDisplaying Data Of All Babysitters..........\n";
            if(vbs.size())babysitter::display_f();
            else cout<<"No Babysitter Exist.\n";
            n=vbs.size();
            for(i=0;i<n;i++)
            {
                vbs[i].display_d();
            }
        }
        else if(n==2)
        {
            cout<<"\nSearching......\n";
            cout<<"Enter Babysitters ID : ";
            fflush(stdin);
            getline(cin,s);
            n=vbs.size();
            for(i=0;i<n;i++)
            {
                if(vbs[i].sarch(s))
                {
                    cout<<"\nBabysitter Found.\n";
                    babysitter::display_f();
                    vbs[i].display_d();
                    break;
                }
            }
            if(i==n)cout<<"Babysitter Not Found.\n";
        }
        else if(n==3)
        {
            babysitter bs;
            vbs.push_back(bs);
            cout<<"Babysitter Added Successfully.\n";
            sort(vbs.begin(),vbs.end());
        }
        else if(n==4)
        {
            cout<<"Enter Babysitters ID To Update : ";
            fflush(stdin);
            getline(cin,s);
            n=vbs.size();
            for(i=0;i<n;i++)
            {
                if(vbs[i].sarch(s))
                {
                    vbs[i].change();
                    break;
                }
            }
            if(i==n)cout<<"Babysitter Not Found.\n";
        }
        else if(n==5)
        {
            cout<<"\nRemoving......\n";
            cout<<"Enter Babysitters ID : ";
            fflush(stdin);
            getline(cin,s);
            n=vbs.size();
            for(i=0;i<n;i++)
            {
                if(vbs[i].sarch(s))
                {
                    vbs.erase(vbs.begin()+i);
                    cout<<"Babysitter Removed Successfully.\n";
                    break;
                }
            }
            if(i==n)cout<<"Babysitter Not Found.\n";
        }
        else if(n==6)
        {
            goto ss;
        }
        else cout<<"\nInput Number Properly.\n";
    }
    else if(n==2)while(1)
    {
        baby::show();
        cin>>n;
        if(n==1)
        {
            cout<<"\nDisplaying Data Of All Baby..........\n";
            if(vb.size())baby::display_f();
            else cout<<"No Baby Exist.\n";
            n=vb.size();
            for(i=0;i<n;i++)
            {
                vb[i].display_d();
            }
        }
        else if(n==2)
        {
            cout<<"\nSearching......\n";
            cout<<"Enter Babysitters ID : ";
            fflush(stdin);
            getline(cin,s);
            n=vb.size();
            for(i=0;i<n;i++)
            {
                if(vb[i].sarch(s))
                {
                    cout<<"\nBaby Found.\n";
                    baby::display_f();
                    vb[i].display_d();
                    break;
                }
            }
            if(i==n)cout<<"Baby Not Found.\n";
        }
        else if(n==3)
        {
            baby b;
            vb.push_back(b);
            cout<<"Baby Added Successfully.\n";
            sort(vb.begin(),vb.end());
        }
        else if(n==4)
        {
            cout<<"\nRemoving......\n";
            cout<<"Enter Baby ID : ";
            fflush(stdin);
            getline(cin,s);
            n=vb.size();
            for(i=0;i<n;i++)
            {
                if(vb[i].sarch(s))
                {
                    vb.erase(vb.begin()+i);
                    cout<<"Baby Removed Successfully.\n";
                    break;
                }
            }
            if(i==n)cout<<"Baby Not Found.\n";
        }
        else if(n==5)
        {
            goto ss;
        }
        else cout<<"\nInput Number Properly.\n";
    }
    else if(n==3)
    {
        cout<<endl;
        cout<<"Owners Name : Abu Horaira."<<endl;
        cout<<"  Contact 1 : +880 1853-449165"<<endl;
        cout<<"  Contact 2 : +880 1872-245211"<<endl<<endl;
        cout<<"Technicians : Sakibul Hasan."<<endl;
        cout<<"  Contact 1 : +880 1993-634837"<<endl;
        cout<<"  Contact 2 : +880 1943-109757"<<endl;
        goto ss;
    }
    else if(n==4)
    {
        cout<<"\nGood Bye.\n";
    }
    else
    {
        cout<<"\nInput Number Properly.\n";
        goto ss;
    }
    return 0;
}
