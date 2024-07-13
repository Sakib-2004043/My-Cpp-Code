/// D : Subarray Sum

#include <bits/stdc++.h>
using namespace std;
bool sub(int arr[], int n, int sum)
{
    if(sum==0)return 1;

    else if(n==0)return 0;

    else if(arr[n-1]>sum)return sub(arr,n-1,sum);

    else return (sub(arr,n-1,sum)||sub(arr,n-1,sum-arr[n-1]));
}

int main()
{
    int n,i,sum;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cin>>sum;

    if (sub(arr,n,sum) == 1)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
    return 0;
}

/*

TEST CASE

6
3 34 4 12 5 2
9

6
3 34 4 12 5 2
30

*/


