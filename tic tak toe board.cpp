//tic tac toe
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=0; i<11; i++)
	{
		if(i==3 || i==7)
		{
			for(j=0; j<9; j++)
			{
				cout<<"- ";
			}
		}
		else
		{
			for(j=0; j<20; j++)
			{
				if(j<5 || (j>5 && j<11) || (j>11 && j<20))
				{
					cout<<" ";
				}
				else if(j==5 || j==11)
				{
					cout<<"|";
				}
			}
		}
		cout<<"\n\n";
	}
	return 0;
}
