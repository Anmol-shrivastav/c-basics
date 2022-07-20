#include<iostream>
using namespace std;
int main()
{
	long long int n,o,i,j,a,b,k,l,count=0;
	cin>>n>>o>>a>>b;
	char ary[n][n];
	for(i=0; i<o; i++)
	{
		cin>>k>>l;
		ary[k][l] = 'x';
	}
	for(i=a-1; i>0; i--)
	{
		if(ary[i][b]!='x')
		count++;
		else if(ary[i][b]=='x')
		break;
	}
	for(i=a+1; i<=n; i++)
	{
		if(ary[i][b]!='x')
		count++;
		else if(ary[i][b]=='x')
		break;
	}
	for(j=b-1; j>0; j--)
	{
		if(ary[a][j]!='x')
		count++;
		else if(ary[a][j]=='x')
		break;
	}
	for(j=b+1; j<=n; j++)
	{
		if(ary[a][j]!='x')
		count++;
		else if(ary[a][j]=='x')
		break;
	}
	for(i=a-1,j=b-1; i>0&&i<=n&&j>0&&j<=n; i--,j--)
	{
		if(ary[i][j]!='x')
		count++;
		else if(ary[i][j]=='x')
		break;
	}
	for(i=a+1,j=b+1; i>0&&i<=n&&j>0&&j<=n; i++,j++)
	{
		if(ary[i][j]!='x')
		count++;
		else if(ary[i][j]=='x')
		break;
	}
	for(i=a-1,j=b+1; i>0&&i<=n&&j>0&&j<=n; i--,j++)
	{
		if(ary[i][j]!='x')
		count++;
		else if(ary[i][j]=='x')
		break;
	}
	for(i=a+1,j=b-1; i>0&&i<=n&&j>0&&j<=n; i++,j--)
	{
		if(ary[i][j]!='x')
		count++;
		else if(ary[i][j]=='x')
		break;
	}
	cout<<count;
	
	return 0;
}
