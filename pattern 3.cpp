//pattern 3
/* 1
   1 2
   1 2 3
   1 2 3 4
   1 2 3 4 5 */
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,i,j;
	cout<<"Enter a number = ";
	cin>>a;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<j;
			cout<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
