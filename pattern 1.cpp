//pattern1.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,i,j;
	cout<<"Enter a number of rows you want = ";
	cin>>a;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		{
			cout<<"#";
		}
		cout<<"\n";
	}
	
	
	return 0;
}
