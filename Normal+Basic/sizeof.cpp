#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main( )
{
    int k=38;
    cout<<setw(k)<<"Size of signed Character :"<<sizeof(signed char)<<"   Byte"<<endl;
    cout<<setw(k)<<"Size of unsigned Character :"<<sizeof(unsigned char)<<"   Byte"<<endl;
    cout<<setw(k)<<"Size of signed short Integer :"<<sizeof(signed short int)<<"   Bytes"<<endl;
    cout<<setw(k)<<"Size of unsigned short Integer :"<<sizeof(unsigned short int)<<"   Bytes"<<endl;
    cout<<setw(k)<<"Size of signed Integer :"<<sizeof(signed int)<<"   Bytes"<<endl;
    cout<<setw(k)<<"Size of unsigned Integer :"<<sizeof(unsigned int)<<"   Bytes"<<endl;
    cout<<setw(k)<<"Size of Float :"<<sizeof(float)<<"   Bytes"<<endl;
    cout<<setw(k)<<"Size of signed long Integer :"<<sizeof(signed long int)<<"   Bytes"<<endl;
    cout<<setw(k)<<"Size of unsigned long Integer :"<<sizeof(unsigned long int)<<"   Bytes"<<endl;
    cout<<setw(k)<<"Size of signed long long Integer :"<<sizeof(signed long long int)<<"   Bytes"<<endl;
    cout<<setw(k)<<"Size of unsigned long long Integer :"<<sizeof(unsigned long long int)<<"   Bytes"<<endl;
    cout<<setw(k)<<"Size of Double :"<<sizeof(double)<<"   Bytes"<<endl;
    cout<<setw(k)<<"Size of Long Double :"<<sizeof(long double)<<"  Bytes"<<endl;
    cout<<setw(k)<<"Size of String :"<<sizeof(string)<<"  Bytes   "<<endl;
    getch();
    return 0;
}
