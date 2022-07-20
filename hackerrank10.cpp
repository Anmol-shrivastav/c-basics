#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,i,j;
	string naam;
	cin>>n;
	char name[n];
	long int no[n];
	for(i=0; i<n; i++)
	{
		cin>>name[i];
		cin>>no[i];
	}
	for(i=0; i<n; i++)
	{
		cin>>naam;
		for(j=0; j<n; j++)
		{
			if(name[j] == naam)
			{
				cout<<name[j]<<"="<<no[j]<<"\n";
				break;
			}
			else if(j == n-1)
			{
				cout<<"Not found"<<"\n";
			}
		}
	}
	return 0;
}
