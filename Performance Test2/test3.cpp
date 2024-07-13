#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter File Name : ";
    getline(cin,s);
    s=s+".txt";
    ofstream file(s);
    fflush(stdin);
    cout<<"Name : ";
    file<<"Name : ";
    getline(cin,s);
    file<<s<<endl;
    cout<<"ID   : ";
    file<<"ID   : ";
    getline(cin,s);
    file<<s<<endl;
    cout<<"CGPA : ";
    file<<"CGPA : ";
    getline(cin,s);
    file<<s<<endl;
    cout<<"Favorite Course : ";
    file<<"Favorite Course : ";
    getline(cin,s);
    file<<s<<endl;
    fflush(stdin);
    file.close();
    return 0;
}
