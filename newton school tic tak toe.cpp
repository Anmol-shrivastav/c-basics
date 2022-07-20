#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {

	// Your code here
	char player1,player2;
	cin>>player1>>player2;
	if(player1 == 'R' || player2 == 'R')
	{
        cout<<"R"<<"\n";
	}
	else if(player1 == 'J')
	{
		cout<<player2<<"\n";
	}
	else if(player2 == 'J')
	{
		cout<<player1<<"\n";
	}
	else
	{
        cout<<"D"<<"\n";
	}
	return 0;
}
