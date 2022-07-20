#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,i,count=0,m=1,j,k;
	cin>>n;
	float ary[n][2];
	for(i=0; i<n; i++)
	{
		for(j=0; j<2; j++)
		{
			cin>>ary[i][j];
			if(j>0)
			{
				for(k=ary[i][0]; k<=ary[i][1]; k++)
				{
					int temp = sqrt(k);
					if(temp*temp == k)
					  count++;
				}
				cout<<count<<"\n";
				count=0;
			}	
		}
	}
	return 0;
}
