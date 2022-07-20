//contaning the balls
#include<iostream>
using namespace std;
int main()
{
	int m,t,n,a,k,i,j,count=0,sum=0,correct=0;
	cin>>t;
	for(m=0; m<t; m++)
	{
		cin>>n;
		int ary[n][n];
		for(i=0; i<n; i++)
		    for(j=0; j<n; j++)
		        cin>>ary[i][j];
		for(k=0; k<n; k++)
		{
			for(a=0; a<n; a++)
			    if(a!=k)
			       sum = sum + ary[a][k];
			for(a=0; a<n; a++)
			    if(a!=k)
			       count = count + ary[k][a];
			if(count != sum)
			   correct++;
		}
		if(correct==0)
		   cout<<"Possible"<<"\n";
		else
		   cout<<"Impossible"<<"\n";
		sum = count = correct = 0;
	}
	return 0;
}
