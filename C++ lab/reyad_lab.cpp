#include<bits/stdc++.h>
using namespace std;
int num=5432;
class bank
{
protected:
    string pass,name,nid,number;
    int acc_no;
};
class person:private bank
{
private:
    double money;
public:
    person()
    {
        string p,q;
        cout<<"Creating an account....\n";
        cout<<"Enter Person Name : ";
        fflush(stdin);
        getline(cin,name);
        cout<<"Enter  Mobile  No : ";
        getline(cin,number);
        cout<<"Enter NID  Number : ";
        getline(cin,nid);
        ff:
        cout<<"Create  your password : ";
        getline(cin,p);
        cout<<"Confirm your password : ";
        getline(cin,q);
        fflush(stdin);
        if(p==q)pass=p;
        else
        {
            cout<<"\nAn Error occurred.\n";
            goto ff;
        }
        cout<<"\nYour Account has created successfully.";
        cout<<"\nThank you for creating an account in our bank.\n";
        num+=3;
        cout<<"\nYour account Number is "<<num<<'.'<<endl;
        cout<<"Preserve your account Number for future Log in.\n";
        acc_no=num;
        money=0;
    }
    bool sarch(string pas,int ac)
    {
        if(pass==pas&&acc_no==ac)
        {
            return true;
        }
        else return false;
    }
    bool change(string pas,int ac)
    {
        if(pass==pas&&acc_no==ac)
        {
            string p,q;
            cout<<"\nChanging password..."<<endl;
            cout<<"Create new  your password : ";
            getline(cin,p);
            cout<<"Confirm new your password : ";
            getline(cin,q);
            fflush(stdin);
            if(p==q)pass=p;
            cout<<"Your password successfully changed.\n";
        }
        else return false;
    }
    void show()
    {
        cout<<"\nYou are successfully logged in to your Account.\n";
        cout<<"Person   Name : "<<name<<endl;
        cout<<"   Account No : "<<acc_no<<endl;
        cout<<"Mobile Number : "<<number<<endl;
        cout<<"   NID Number : "<<nid<<endl;
        cout<<"Total Balance : "<<money<<endl;
    }
    void add()
    {
        double m;
        cout<<"\nAdding Money.....\n";
        cout<<"Enter the amount of money : ";
        cin>>m;
        money+=m;
        cout<<"Your money is successfully added to your account.\n";
    }
    void withdraw()
    {
        double m;
        cout<<"Withdrawing Money.....\n";
        cout<<"Enter the amount of money : ";
        cin>>m;
        if(m>money)
        {
            cout<<"\nSorry ! Your amount exceeded your balance\n";
        }
        else
        {
            cout<<"\nWithdrawal Successful.\n";
            money-=m;
        }
    }
    void balance()
    {
        cout<<"Your current balance is "<<money<<" TK.\n";
    }
};
void show()
{
    cout<<"\nPress\n";
    cout<<"\t 1.For Log in to your Account."<<endl;
    cout<<"\t 2.For Creating Account."<<endl;
    cout<<"\t 3.For Change Password."<<endl;
    cout<<"\t 4.For Exit."<<endl;
    cout<<"\nEnter your Choice : ";
}
int main()
{
    int n,i,k;
    string x;
    vector<person>vp;
    cout<<"Welcome to the Bank of Reyad Vai.\n";
    cc:
    show();
    cin>>n;
    cout<<"\n\n";
    if(n==1)
    {
        cout<<"Logging in....\n";
        cout<<"Enter Account Number : ";
        cin>>k;
        cout<<"Enter  Your Password : ";
        fflush(stdin);
        getline(cin,x);
        fflush(stdin);
        n=vp.size();
        if(n==0)
        {
            cout<<"\nNo Account Exist.\n";
        }
        for(i=0;i<n;i++)
        {
            if(vp[i].sarch(x,k))break;
        }
        if(i<n)
        {
            vp[i].show();
            while(1)
            {
                cout<<"\nPress\n";
                cout<<"\t 1.For Adding Money to your Account."<<endl;
                cout<<"\t 2.For Withdrawing Money From your Account."<<endl;
                cout<<"\t 3.For Watching Your Current Balance."<<endl;
                cout<<"\t 4.For Logging out From Your Account."<<endl;
                cout<<"\nEnter your Choice : ";
                cin>>k;
                cout<<endl;
                if(k==1)vp[i].add();
                else if(k==2)vp[i].withdraw();
                else if(k==3)vp[i].balance();
                else if(k==4)
                {
                    cout<<"\nLog Out Successful.\n";
                    goto cc;
                }
                else cout<<"Enter proper key.\n";
            }
        }
        else
        {
            cout<<"Your Account is not found.\n";
            cout<<"Enter Account no and password properly.\n";
        }
    }
    else if(n==2)
    {
        person p;
        vp.push_back(p);
    }
    else if(n==3)
    {
        cout<<"Enter Account Number : ";
        cin>>k;
        cout<<"Enter  Your Password : ";
        fflush(stdin);
        getline(cin,x);
        fflush(stdin);
        n=vp.size();
        if(n==0)
        {
            cout<<"\nNo Account Exist.\n";
            goto cc;
        }
        for(i=0;i<n;i++)
        {
            if(vp[i].change(x,k))break;
        }
    }
    else if(n==4)
    {
        cout<<"Good bye.\n";
        goto ff;
    }
    else cout<<"\nEnter proper key.\n";
    goto cc;
    ff:
    return 0;
}
