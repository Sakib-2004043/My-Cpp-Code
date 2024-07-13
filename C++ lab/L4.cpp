#include<bits/stdc++.h>
using namespace std;
class employee
{
private:
    string name,Rank;
    int id,age;
public:
    employee()
    {
        cout<<"Inserting New Entry...."<<endl;
        fflush(stdin);
        cout<<"Enter Name : ";
        getline(cin,name);
        cout<<"Enter Rank : ";
        getline(cin,Rank);
        fflush(stdin);
        cout<<"Enter   ID : ";
        cin>>id;
        cout<<"Enter  Age : ";
        cin>>age;
        cout<<"New Entry Successful\n";

    }
    bool sarch(int x)
    {
        if(id==x)return true;
        else return false;
    }
    void show()
    {
        cout<<"------------------------------------------------------------------------------------------\n";
        cout<<setw(20)<<"Name";
        cout<<setw(20)<<"Rank";
        cout<<setw(20)<<"ID";
        cout<<setw(20)<<"Age"<<endl;
        cout<<"------------------------------------------------------------------------------------------\n";    }
    void display()
    {
        cout<<setw(20)<<name;
        cout<<setw(20)<<Rank;
        cout<<setw(20)<<id;
        cout<<setw(20)<<age<<endl;
        cout<<"------------------------------------------------------------------------------------------\n";
    }
};
void show()
{
    cout<<"Select >> \n";
    cout<<"\t 1.For Displaying All Data.\n";
    cout<<"\t 2.For Inserting New Entry.\n";
    cout<<"\t 3.For Deleting Existing Entry.\n";
    cout<<"\t 4.For Searching A Record.\n";
    cout<<"\t 5.For Exit.\n";
    cout<<"\nEnter Key : ";
}
int main()
{
    int i,n,x;
    vector<employee>ve;
    cout<<"Welcome to Horaira Industry Limited.\n";
    cout<<"No Mask , No Entry.\n\n";
    while(1)
    {
        show();
        cin>>n;
        cout<<endl;
        if(n==1)
        {
            n=ve.size();
            if(n==0)cout<<"No Employee Exist.\n";
            else ve[0].show();
            for(i=0;i<n;i++)
            {
                ve[i].display();
            }
        }
        else if(n==2)
        {
            employee e;
            ve.push_back(e);
        }
        else if(n==3)
        {
            cout<<"Deleting Entry....\n";
            cout<<"Enter Employee Id : ";
            cin>>x;
            n=ve.size();
            for(i=0;i<n;i++)
            {
                if(ve[i].sarch(x))
                {
                    ve.erase(ve.begin()+i);
                    cout<<"Deletion Successful.\n";
                    goto ff;
                }
            }
            cout<<"Employee Not Found.\n";
        }
        else if(n==4)
        {
            cout<<"Searching.....\n";
            cout<<"Enter Employee Id : ";
            cin>>x;
            n=ve.size();
            for(i=0;i<n;i++)
            {
                if(ve[i].sarch(x))
                {
                    cout<<"Employee Found.\n";
                    ve[0].show();
                    ve[i].display();
                    goto ff;
                }
            }
            cout<<"Employee Not Found.\n";
        }
        else if(n==5)
        {
            cout<<"Good Bye.Stay Safe & Stay Alert.\n";
            break;
        }
        else cout<<"Enter Proper Key\n";
        ff:
        cout<<endl;
    }
    return 0;
}
