#include <iostream>
using namespace std;

int main()
{
    long n[1000000],t;	
	cin>>t;
	
	int i;
	for(i=0;i<t;i++)
	{
	    cin>>n[i];
	}
	
	int k,j, temp,m=i;
	
	for(k=0;k<m-1;k++)
	{
	    for(j=0;j<m-k-1;j++)
	    {
	        if(n[j]>n[j+1])
	       {
	           temp=n[j];
	           n[j]=n[j+1];
	           n[j+1]=temp;
	       }
	    }
	}
	
	for(i=0;i<t;i++)
	{
	    cout<<n[i];
	}
	
	return 0;
}
