//patern 5
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,l,m,n;
	for(i=7, n=7;i>=1;i--,n--)
	{
		for(j=1;j<=i;j++)
		{   
		    if(j==7)
		    break;
			cout<<j;
			
		}
		for(m=i;m<=12-i;m++)
		{
			cout<<" ";
		}
		for(l=n;l>=1;l--)
		{
			cout<<l;
		}
		cout<<"\n";
	}
	return 0;
}

