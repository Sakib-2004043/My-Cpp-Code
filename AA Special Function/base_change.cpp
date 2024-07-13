// This is specially for binary
#include<bits/stdc++.h>
using namespace std;
int main()
{
    aa:
    char ch[100];
    string s;
    long long n,b;

    cout<<"Enter Decimal Number to Change its Base : ";
    cin>>n;
    cout<<"\nEnter New Base : ";
    cin>>b;
    cout<<"\nNumber After Changing Base >>\n\n";
    itoa(n,ch,b);          /// For Integer
    s=ch;
    cout<<"For      Integer      Range : "<<setw(60)<<s<<endl;
    ltoa(n,ch,b);          /// For Long Integer
    s=ch;
    cout<<"For  Long   Integer   Range : "<<setw(60)<<s<<endl;
    lltoa(n,ch,b);         /// For Long Long Integer
    s=ch;
    cout<<"For Long Long Integer Range : "<<setw(60)<<s<<endl;

    n=s.size();
    cout<<"\n\t Size of String : "<<n<<endl;

    cout<<endl<<endl;
    goto aa;
    return 0;
}
