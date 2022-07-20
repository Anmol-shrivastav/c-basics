//ACM ICPC Team
#include<iostream>
using namespace std;
int main()
{
	int m,n,i,k,j,count=0,max=0,temp=0;
	cin>>m>>n;
	int ary[m][n];
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			cin>>ary[i][j];
		}
	}    
    for(i=0; i<m-1; i++)
	{
		for(j=i+1; j<m; j++)
		{
		    for(k=0; k<n; k++)
			{
				if(ary[i][k]==1 || ary[j][k]==1)
				   temp++;
			}
			if(temp>max)
			{
				max = temp;
				count = 0;
				count++;
			}
			else if(temp == max)
			   count++;
			   
			temp=0;
			
		}
	}
	
	cout<<max<<"\n"<<count;
	
	return 0;
	
}
/** 
4 5
1 0 1 0 1
1 1 1 0 0
1 1 0 1 0
0 0 1 0 1
**/

