//hackerrank candy question 
#include<iostream>
using namespace std;
int main()
{
	int n,tp,tc,s,i,j;
	cin>>n;
	for(i=0; i<n; i++)
	{
		cin>>tp>>tc>>s;
		for(j=1; j<=tc; j++)
		{
			if(j>1)
			{
				if(s+1>tp)
				   s=1;
			    else
			       s++;
			}
		}
		cout<<s<<"\n";
	}
	return 0;
}
