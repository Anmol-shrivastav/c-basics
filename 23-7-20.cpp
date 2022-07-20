//pattern 
#include<iostream>
#include<conio.h> 
using namespace std;
int main() {
	int row;
	cout<<"Enter the number of row = ";
	cin>>row;
	for(int i=1; i<=row; i++) {
		for(int j=row-i; j>0; j--)  {
			cout<<" ";
		}
		for(int k=1; k<=(2*i)-1; k++) {
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
	getch();
}
