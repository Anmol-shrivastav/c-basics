//rohit pattern by new method
#include<iostream>
using namespace std;
int main()
{
	int row,i,j,k,n,row1,col;
	cin>>row;
	row = row1;
	col = row - 1;
	for(i=0; i<row; i++)
	{
		for(j=1; j<=row1; j++)
		{
			cout<<j;
		}
		if(i>0)
		{
			for(k=1; k<=2*i-1; k++)
			{
				cout<<" ";
				row1--;
			}
		}
		if(i>1)
		{
			col--;
		}
		for(n=col; n>0; n--)
		{
			cout<<n;
		}
		cout<<"\n";
	}
	return 0;
}
