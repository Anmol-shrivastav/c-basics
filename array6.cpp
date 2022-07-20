// Create an two dimenstional array and store a square matrix in it, Now find the sum and difference of diagonal elements from right and left both sides.
#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
	int i,j,row,leftsum=0,rightsum=0,diff;
	cout<<"Enter the row of sqaure matrix = ";
	cin>>row;
	int ary[row][row];
	cout<<"Enter element in matrix:"<<"\n";
	for(i=0; i<row; i++)
	{
		for(j=0; j<row; j++)
		{
			cin>>ary[i][j];
		}
	}
	for(i=0,j=0; i<row,j<row; i++,j++)
	{
		leftsum = leftsum + ary[i][j];
	}
	cout<<leftsum<<"\n";
	
	for(i=0,j=row-1; i<row,j>=0; i++,j--)
	{
		rightsum = rightsum + ary[i][j];
	}
	cout<<rightsum<<"\n";
	
	diff = abs(leftsum-rightsum);
	cout<<diff;
	return 0;
}
