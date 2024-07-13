#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    string nam,rol;
    fstream file("student.txt");
    cout<<"Enter Total Student : ";
    cin>>n;
    cout<<"\nNow Enter Data >>>"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<"\n  Student -> "<<i<<endl;
        cout<<"Enter Name : ";
        fflush(stdin);
        getline(cin,nam);
        cout<<"Enter Roll : ";
        getline(cin,rol);

        file<<"Student -> "<<i<<endl;
        file<<"Name : "<<nam<<endl;
        file<<"ROll : "<<rol<<"\n\n";
    }
    char c=file.get();
    while(!file.eof())
    {
        cout<<c;
        c=file.get();
    }
    file.close();




}
