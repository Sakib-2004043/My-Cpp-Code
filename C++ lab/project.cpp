#include<bits/stdc++.h>
using namespace std;
class base
{
protected:
    char c[15][15];
};
class sudoku:private base
{
public:
    sudoku()
    {
        for(int i=1;i<=9;i++)
        {
            for(int k=1;k<=9;k++)c[i][k]='-';
        }
    }
    void input(int x,int y,int n)
    {
        c[x][y]=n+48;
    }
    bool check(int x,int y,int n)
    {
        for(int i=1;i<=9;i++)
        {
            if(c[x][i]==n+48)
            {
                cout<<"\nYou can not input "<<n<<" at ("<<x<<','<<y<<") Index.";
                cout<<"\nBecause "<<n<<" is already at row no "<<x<<endl;
                return true;
            }
            if(c[i][y]==n+48)
            {
                cout<<"\nYou can not input "<<n<<" at ("<<x<<','<<y<<") Index.";
                cout<<"\nBecause "<<n<<" is already at column no "<<y<<endl;
                return true;
            }
        }
        return false;
    }
    bool check_c(int c)
    {
        if(c<1||c>9)
        {
            cout<<"\nInput Number Between 1 to 9.\n";
            return true;
        }
        else return false;
    }
    void delet(int x,int y)
    {
        c[x][y]='-';
    }
    bool friend operator!(sudoku);
    friend void show(sudoku);
};
bool operator!(sudoku s)
{
    for(int i=1;i<=9;i++)
    {
        for(int k=1;k<=9;k++)
        {
            if(s.c[i][k]=='-')return false;
        }
    }
    return true;
}
void show(sudoku s)
{
    cout<<endl;
    for(int i=1;i<=9;i++)
    {
        for(int k=1;k<=9;k++)cout<<s.c[i][k]<<' ';
        cout<<endl;
    }
}
int main()
{
    sudoku u;
    cout<<"Lets Start Sudoku.\n";
    cc:
    sudoku s;
    int i,k,x,y,n,c;
    while(1)
    {
        dd:
        show(s);
        cout<<"\nPress >>\n";
        cout<<"\t1. For Entering Value.\n";
        cout<<"\t2. For Deleting Value.\n";
        cout<<"\t3. For Deleting All.\n";
        cout<<"\t4. For Undo Last Step.\n";

        cout<<"\nEnter Your Choice : ";
        cin>>n;
        if(n==1)
        {
            cout<<"\nEnter Index to Input >>\n";
            cout<<"Enter    Row : ";
            cin>>x;
            if(s.check_c(x))goto dd;
            cout<<"Enter Column : ";
            cin>>y;
            if(s.check_c(y))goto dd;
            cout<<"Enter Number : ";
            cin>>c;
            if(s.check_c(c))goto dd;
            if(s.check(x,y,c))goto dd;
            u=s;
            s.input(x,y,c);
        }
        else if(n==2)
        {
            u=s;
            cout<<"\nEnter Index to delete :\n";
            cin>>x>>y;
            s.delet(x,y);
        }
        else if(n==3)
        {
            u=s;
            goto cc;
        }
        else if(n==4)
        {
            s=u;
        }
        else
        {
            cout<<"\nChoose Number Properly.\n";
        }
        if(!s)
        {
            show(s);
            cout<<"\nCongratulation...\n";
            cout<<"You have solved the sudoku.\n";
            break;
        }
    }
    return 0;
}
