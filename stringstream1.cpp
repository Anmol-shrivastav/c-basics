//stringstream class
#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int countwords(string str)
{
	stringstream s(str);
	string word;
	int count=0;
	while(s >> word)
	{
		count++;
	}
	return count;
}
int main()
{
	string str;
	getline(cin, str);
	cout<<"Number of words = "<<countwords(str);
	return 0;
}
