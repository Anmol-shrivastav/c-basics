//pattern 4
/* 5
   5 4 
   5 4 3
   5 4 3 2
   5 4 3 2 1 */
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,i,j;
	cout<<"Enter a number for reverse pattern = ";
	cin>>a;
	for(i=a;i>=1;i--)
	{
		for(j=a;j>=i;j--)
		{
		   cout<<j;
		   cout<<" ";
		}
		cout<<"\n";
	
	}
	
 return 0;
 getch();	
}

