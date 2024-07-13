#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main( )
{
    int n,r,x=0;
    cout<<"It is a guessing game."<<endl;
    while(2)
    {
        x++;
        cout<<"Guess a number between 1 and 5:";
        cin>>n;
        r=rand()%5+1;
        if(n==r)
        {
            cout<<"\n\n\t\t\t\t\t\t\t<<You Have won.>>\n\n";
            cout<<"You tried "<<x<<" times.\n\n";
            x=0;
        }
        else
        {
            cout<<"You lost.\nRandom number was "<<r;
            cout<<"\n\n\nTry again.\n\n";
        }
    }
    getch();
    return 0;
}
