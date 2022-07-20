//pattern
#include<iostream>
#include<conio.h>
using namespace std;
int main() 
{
	int row;
	cout<<"Enter the number of row = ";
	cin>>row;
	for(int i=1; i<=row; i++) {
		for(int j=row-i; j>=1; j--)  {
			cout<<" ";
		}
		for(int k=i; k<=(2*i)-1; k++) {
			cout<<k;
		}
		
		
		cout<<"\n";
	}
	return 0;
	getch();
}
