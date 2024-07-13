#include<bits/stdc++.h>
using namespace std;
class building
{
protected:
    int floor,room;
public:
    static show()
    {
        cout<<"Press -> \n";
        cout<<"\t 1. For Creating House."<<endl;
        cout<<"\t 2. For Creating Office."<<endl;
        cout<<"\t 3. For updating House."<<endl;
        cout<<"\t 4. For updating Office."<<endl;
        cout<<"\t 5. For Displaying House."<<endl;
        cout<<"\t 6. For Displaying Office."<<endl;
        cout<<"\t 7. For Exit."<<endl;
        cout<<"\nEnter Choice : ";
    }
};
class house:public building
{
private:
    int bedroom,bathroom;
public:
    house()
    {
        cout<<"\n\nCreating House...."<<endl;
        cout<<"Enter    Floor : ";
        cin>>floor;
        cout<<"Enter     Room : ";
        cin>>room;
        cout<<"Enter  Bedroom : ";
        cin>>bedroom;
        cout<<"Enter BathRoom : ";
        cin>>bathroom;
    }
    void display()
    {
        cout<<setw(10)<<floor;
        cout<<setw(10)<<room;
        cout<<setw(10)<<bedroom;
        cout<<setw(10)<<bathroom;
        cout<<endl;
    }
    static void show()
    {
        cout<<setw(10)<<"Floor";
        cout<<setw(10)<<"Room";
        cout<<setw(10)<<"Bedroom";
        cout<<setw(10)<<"Bathroom";
        cout<<endl;
    }
};
class office:public building
{
private:
    int telephone,employee;
public:
    office()
    {
        cout<<"\n\nCreating Office...."<<endl;
        cout<<"Enter     Floor : ";
        cin>>floor;
        cout<<"Enter      Room : ";
        cin>>room;
        cout<<"Enter Telephone : ";
        cin>>telephone;
        cout<<"Enter  Employee : ";
        cin>>employee;
    }
    void display()
    {
        cout<<setw(10)<<floor;
        cout<<setw(10)<<room;
        cout<<setw(10)<<telephone;
        cout<<setw(10)<<employee;
        cout<<endl;
    }
    static void show()
    {
        cout<<setw(10)<<"Floor";
        cout<<setw(10)<<"Room";
        cout<<setw(10)<<"Telephone";
        cout<<setw(10)<<"Employee";
        cout<<endl;
    }
};
int main()
{
    int n;
    vector<house>vh;
    vector<office>vo;

    while(1)
    {
        building::show();
        cin>>n;

        if(n==1)
        {
            house h;
            vh.push_back(h);
        }
        else if(n==2)
        {
            office o;
            vo.push_back(o);
        }
        else if(n==5)
        {
            house::show();
            n=vh.size();
            for(int i=0;i<n;i++)
            {
                vh[i].display();
            }
        }
        else if(n==6)
        {
            office::show();
            n=vo.size();
            for(int i=0;i<n;i++)
            {
                vo[i].display();
            }
        }
        else if(n==7)break;
        cout<<endl;
    }
    return 0;
}

