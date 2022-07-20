#include<iostream>
using namespace std;
int main()
{
	int r1,r2,c1,c2,i,j,k,temp,sum=0;
	cout<<"Enter number of row in matrix 1 = ";
	cin>>r1;
	cout<<"Enter number of column in matrix 1 = ";
	cin>>c1;
	cout<<"Enter number of row in matrix 2 = ";
	cin>>r2;
	cout<<"Enter number of column in matrix 2 = ";
	cin>>c2;
	int ary1[r1][c1], ary2[r2][c2], ary[r1][c2];
	if(c1==r2)
	{
		cout<<"Enter matrix 1"<<"\n";
		for(i=1; i<=r1; i++)
		    for(j=1; j<=c1; j++)
		        cin>>ary1[i][j];
		cout<<"Enter matrix 2"<<"\n";
		for(i=1; i<=r2; i++)
		    for(j=1; j<=c2; j++)
		        cin>>ary2[i][j];
		for(i=1; i<=r1; i++)
		{
			for(k=1; k<=c2; k++)
			{
				for(j=1; j<=c1; j++)
				{
					temp = ary1[i][j]*ary2[j][k];
					sum = sum + temp;
				}
				ary[i][k] = sum;
				sum = 0;
			}
		}
		for(i=1; i<=r1; i++)
		{
			for(j=1; j<=c2; j++)
			{
				cout<<ary[i][j]<<" ";
			}
			cout<<"\n";
		}
	}
	else
	cout<<"These matrices can't be multiply";
	return 0;
}
