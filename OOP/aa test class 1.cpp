#include<iostream>
using namespace std;
class student
{
protected:
    int id,age,level,term;
};
class Course_student:private student
{
private:
    int m,s,minimum;
public:
    void information()
    {
        cout<<"\nEnter Student Information."<<endl;
        cout<<"Enter    ID : ";
        cin>>id;
        cout<<"Enter   Age : ";
        cin>>age;
        cout<<"Enter Level : ";
        cin>>level;
        cout<<"Enter  Term : ";
        cin>>term;
        cout<<"Enter Marks of 1st CT : ";
        cin>>m;
        minimum=m;
        s=s+m;
        cout<<"Enter Marks of 2nd CT : ";
        cin>>m;
        s=s+m;
        if(minimum>m)minimum=m;
        cout<<"Enter Marks of 3rd CT : ";
        cin>>m;
        s=s+m;
        if(minimum>m)minimum=m;
        cout<<"Enter Marks of 4th CT : ";
        cin>>m;
        s=s+m;
        if(minimum>m)minimum=m;
    }
    void sum()
    {
        s=s-minimum;
    }
    void display(int i)
    {

        cout<<"\nStudent No : "<<i+1<<endl;
        cout<<"    Id : "<<id<<endl;
        cout<<"   Age : "<<age<<endl;
        cout<<" Level : "<<level<<endl;
        cout<<"  Term : "<<term<<endl;
        cout<<"Best 3 : "<<s<<endl;
        cout<<endl;
    }

};
void print()
{
    cout<<"\nPress -> "<<endl;
    cout<<"\t\t 1.For adding student's information."<<endl;
    cout<<"\t\t 2.For displaying student's information."<<endl;
    cout<<"\t\t 3.For exit."<<endl;
    cout<<"\nEnter : ";
}
int main()
{
    int n,i,j;
    Course_student v[180];
    j=0;
    while(1)
    {
        print();
        cin>>n;
        if(n==1)
        {
            Course_student c;
            v[j].information();
            v[j].sum();
            j++;
        }
        else if(n==2)
        {
            if(j==0)
            {
                cout<<"\nNo Student Information Added."<<endl;
                continue;
            }
            cout<<"\nShowing Students Information >>"<<endl;
            for(i=0;i<j;i++)
            {
                v[i].display(i);
            }
        }
        else if(n==3)
        {
            break;
        }
    }
    return 0;
}
