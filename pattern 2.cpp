//pattern 2 .
/* 1 2 3 4 5
   1 2 3 4 5
   1 2 3 4 5
   1 2 3 4 5
   1 2 3 4 5  */
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,i,j;
	cout<<"Enter a number = ";
	cin>>a;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		{
			cout<<j;
		}
		cout<<"\n";
	}
	return 0;
	getch();
}
