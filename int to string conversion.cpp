//conversion of int to string 
#include<iostream>
#include<vector>
#include<sstream>
using namespace std;
int main()
{
	int number;
	string str;
	cin>>number;
	stringstream ss;
	ss<<number;
	ss>>str;
	cout<<str<<"\n";
	return 0;
}
