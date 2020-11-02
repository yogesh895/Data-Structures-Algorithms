#include <iostream>
using namespace std;

int main() 
{
	int t,n,sum=0;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    cin>>n;
	    int A[n];
	    for(int j=0;j<n;j++)
	    {
	        cin>>A[j];
	        sum+=A[j];
	    }
	    cout<<sum;
	    sum=0;
	    
	}
	
	
	
	return 0;
}
