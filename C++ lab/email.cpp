#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    string s="student.txt";
    fstream file;
    file.open(s);
    for(i=1;i<=132;i++)
    {
        file<<"u2004";
        if(i<10)file<<"00";
        else if(i<100)file<<"0";
        file<<i<<"@student.cuet.ac.bd"<<endl;
    }
    file.close();
    //file.open("student.txt");
    //cout<<file.seekg(0);
    file.close();
    return 0;
}
