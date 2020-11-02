#include<iostream>
#include <climits>
using namespace std;

int main()
{
    int r,c,A[6][6],result=INT_MIN,a=0;
    for(r=0;r<6;r++)
    {
        for(c=0;c<6;c++)
        {
            cin>>A[r][c];
        }
    }
    
    for(r=0;r<4;r++)
    {
        for(c=0;c<4;c++)
        {
            a= A[r][c]+A[r][c+1]+A[r][c+2]+ A[r+1][c+1] 
            + A[r+2][c]+A[r+2][c+1]+A[r+2][c+2];
            
            if(a>result)
            result=a;
        }
    }
    cout<<result;
}
