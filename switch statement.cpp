#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char grade;
	cout<<"Enter your grade in capital letters = ";
	cin>>grade; 
	switch(grade)
	{
		case 'A':
		cout<<"Excellent" "\n";
		break;
			
		case 'B':
			cout<<"Very good" "\n";
			break;
			
		case 'C':
			cout<<"Good" "\n";
			break;
		
		case 'D':
			cout<<"Passed" "\n";
			break;
			
		case 'E':
			cout<<"Try next time" "\n";
			break;
	
	 default:
	 	cout<<"You have entered invalid grade" "\n";
    }
    cout<<"Your grade is "<<grade<<"\n";
    return 0;
}
