#include<iostream>
using namespace std;

int main()
{
    int i,n;
    cin>>n;
    int A[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>A[i];
    }
    for(i=n-1;i>=0;i--)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}
