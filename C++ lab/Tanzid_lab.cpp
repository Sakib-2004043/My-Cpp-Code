//  Manager Password : 2004036
#include<bits/stdc++.h>
using namespace std;
class company
{
protected:
    string name,id,mobile,salary,Rank,pass;
    int a;
public:
    static void show()
    {
        cout<<"\nSelect >> \n";
        cout<<"\t 1.If You Are Manager.\n";
        cout<<"\t 2.If You Are Worker.\n";
        cout<<"\t 3.If You Want To Leave.\n";
        cout<<"\nEnter Key : ";
    }
    static void display()
    {
        cout<<"\nSelect >> \n";
        cout<<"\t 1.For Displaying All Workers.\n";
        cout<<"\t 2.For Searching A Workers Data.\n";
        cout<<"\t 3.For Updating A Workers Data.\n";
        cout<<"\t 4.For Deleting A Workers Data.\n";
        cout<<"\t 5.For Logging Out.\n";
        cout<<"\nEnter Key : ";
    }
};
class worker:private company
{
public:
    worker()
    {
        string p,q;
        cout<<"\nCreating New Account...."<<endl;
        fflush(stdin);
        cout<<"Enter   Name : ";
        getline(cin,name);
        cout<<"Enter     ID : ";
        getline(cin,id);
        cout<<"Enter   Rank : ";
        getline(cin,Rank);
        cout<<"Enter Salary : ";
        getline(cin,salary);
        pp:
        cout<<"\nCreate A Password : ";
        getline(cin,p);
        cout<<"Confirm  Password : ";
        getline(cin,q);
        if(p==q)pass=p;
        else
        {
            cout<<"\nTwo Passwords Do Not Match.Try Again..\n";
            goto pp;
        }
        cout<<"\nAccount Created Successfully.\n";
        cout<<"Wait For Manager Approval.\n";
        fflush(stdin);
        a=0;
    }
    bool sarch(string x)
    {
        if(id==x)return true;
        else return false;
    }
    bool login(string x,string y)
    {
        if(x==id&&y==pass)
        {
            return true;
        }
        else return false;
    }
    void change()
    {
        cout<<"\nUpdating Workers Data......\n";
        while(1)
        {
            int n;
            cout<<"\nSelect -> \n";
            cout<<"\t 1.For Updating Name."<<endl;
            cout<<"\t 2.For Updating ID."<<endl;
            cout<<"\t 3.For Updating Mobile No."<<endl;
            cout<<"\t 4.For Updating Rank."<<endl;
            cout<<"\t 5.For Updating Salary."<<endl;
            cout<<"\t 6.For Updating Approval."<<endl;
            cout<<"\t 7.If Updating Complete."<<endl;
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
                cout<<"Enter New Rank : ";
                getline(cin,Rank);
            }
            else if(n==5)
            {
                cout<<"Enter New Salary : ";
                getline(cin,salary);
            }
            else if(n==6)
            {
                vv:
                cout<<"Press ->\n";
                cout<<"\t 1. For Approving.\n";
                cout<<"\t 2. For Disapproving.\n";
                cout<<"\nEnter Choice : ";
                cin>>n;
                if(n==1)a=1;
                else if(n==2)a=0;
                else
                {
                    cout<<"\nInput Number Properly.\n";
                    goto vv;
                }
            }
            else if(n==7)
            {
                break;
            }
            else
            {
                cout<<"\nInput Number Properly.\n";
                continue;
            }
            cout<<"\nData Updated Successful.\n\n";
        }
    }
    static void show()
    {
        cout<<"------------------------------------------------------------------------------------------\n";
        cout<<setw(15)<<"Name";
        cout<<setw(15)<<"ID";
        cout<<setw(15)<<"Rank";
        cout<<setw(15)<<"Salary";
        cout<<setw(25)<<"Manager Approval"<<endl;
        cout<<"------------------------------------------------------------------------------------------\n";
    }
    void display()
    {
        cout<<setw(15)<<name;
        cout<<setw(15)<<id;
        cout<<setw(15)<<Rank;
        cout<<setw(15)<<salary;
        cout<<setw(25);
        a?cout<<"Approved":cout<<"Disapproved";
        cout<<endl;
        cout<<"------------------------------------------------------------------------------------------\n";
    }
    static void view()
    {
        cout<<"\nPress ->\n";
        cout<<"\t 1. For Logging in to your account.\n";
        cout<<"\t 2. For Creating An Account.\n";
        cout<<"\t 3. For Going Back.\n";
        cout<<"\nEnter Choice : ";
    }
    static void viewer()
    {
        cout<<"\nPress ->\n";
        cout<<"\t 1. For Logging out from your account.\n";
        cout<<"\t 2. For Changing Password.\n";
        cout<<"\nEnter Choice : ";
    }
    void pass_change()
    {
        string p,q;
        pp:
        fflush(stdin);
        cout<<"\nCreate A New Password : ";
        getline(cin,p);
        cout<<"Confirm  New Password : ";
        getline(cin,q);
        if(p==q)pass=p;
        else
        {
            cout<<"\nTwo Passwords Do Not Match.Try Again..\n";
            goto pp;
        }
    }
};
int main()
{
    int i,n;
    vector<worker>vw;
    cout<<"\t\t**********Welcome to Goriber Industry Limited**********\n";
    cout<<"\t\t__________________No Mask , No Entry_________________\n\n";
    while(1)
    {
        ff:
        company::show();
        cin>>n;
        if(n==1)
        {
            string s;
            cout<<"\nManager Verification.....\n";
            cc:
            cout<<"\nEnter Password : ";
            fflush(stdin);
            getline(cin,s);
            if(s!="2004036")
            {
                cout<<"\nWrong Password.\n";
                kk:
                cout<<"\nPress ->\n";
                cout<<"\t 1. For Try Again.\n";
                cout<<"\t 2. For Go Back.\n";
                cout<<"\nEnter Choice : ";
                cin>>n;
                if(n==1)goto cc;
                else if(n==2)goto ff;
                else
                {
                    cout<<"\nInput Number Properly.\n";
                    goto kk;
                }
            }
            cout<<"\nWelcome Sir !!\n";
            while(1)
            {
                company::display();
                cin>>n;
                if(n==1)
                {
                    cout<<"\nDisplaying Data Of All Workers.....\n";
                    worker::show();
                    n=vw.size();
                    for(i=0;i<n;i++)
                    {
                        vw[i].display();
                    }
                }
                else if(n==2)
                {
                    string x;
                    cout<<"\nSearching.....\n";
                    cout<<"Enter Employee Id : ";
                    fflush(stdin);
                    getline(cin,x);
                    n=vw.size();
                    for(i=0;i<n;i++)
                    {
                        if(vw[i].sarch(x))
                        {
                            cout<<"\nEmployee Found.\n";
                            worker::show();
                            vw[i].display();
                            break;
                        }
                    }
                    if(i==n)cout<<"\nEmployee Not Found.\n";
                }
                else if(n==3)
                {
                    string x;
                    cout<<"\nEnter Employee Id : ";
                    fflush(stdin);
                    getline(cin,x);
                    n=vw.size();
                    for(i=0;i<n;i++)
                    {
                        if(vw[i].sarch(x))
                        {
                            cout<<"\nEmployee Found.\n";
                            vw[i].change();
                            break;
                        }
                    }
                    if(i==n)cout<<"\nEmployee Not Found.\n";
                }
                else if(n==4)
                {
                    string x;
                    cout<<"\nDeleting.....\n";
                    cout<<"Enter Employee Id : ";
                    fflush(stdin);
                    getline(cin,x);
                    n=vw.size();
                    for(i=0;i<n;i++)
                    {
                        if(vw[i].sarch(x))
                        {
                            vw.erase(vw.begin()+i);
                            cout<<"\nDeletion Successful.\n";
                            break;
                        }
                    }
                    if(i==n)cout<<"Employee Not Found.\n";
                }
                else if(n==5)
                {
                    cout<<"\nLog Out Successful.\n";
                    break;
                }
                else cout<<"\nInput Number Properly.\n";
            }
        }
        else if(n==2)while(1)
        {
            worker::view();
            cin>>n;
            if(n==1)
            {
                string x,y;
                cout<<"\nLogging in.....\n";
                cout<<"Enter Worker Id : ";
                fflush(stdin);
                getline(cin,x);
                cout<<"Enter  Password : ";
                getline(cin,y);
                n=vw.size();
                for(i=0;i<n;i++)
                {
                    if(vw[i].login(x,y))
                    {
                        cout<<"\nLog in successful.\n";
                        worker::show();
                        vw[i].display();
                        mm:
                        worker::viewer();
                        cin>>n;
                        if(n==1)
                        {
                            cout<<"\nLog Out Successful.\n";
                        }
                        else if(n==2)
                        {
                            vw[i].pass_change();
                            cout<<"\nPassword Changed Successfully.\n";
                            goto mm;
                        }
                        else
                        {
                            cout<<"\nInput Number Properly.\n";
                            goto mm;
                        }
                        break;
                    }
                }
                if(i==n)cout<<"\nWorker Not Found.\n";
            }
            else if(n==2)
            {
                worker w;
                vw.push_back(w);
            }
            else if(n==3)break;
            else cout<<"\nInput Number Properly.\n";
        }
        else if(n==3)
        {
            cout<<"\nGood Bye.\n";
            break;
        }
        else cout<<"\nInput Number Properly.\n";
        cout<<endl;
    }
    return 0;
}
