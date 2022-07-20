#include<iostream>
#include<string>
#include<string.h>
#include<sstream>
using namespace std;
int main()
{
	string str;
	int sum = 0,temp;
	while(cin>>str)
	{
	    stringstream ss;
	    ss<<str;
	    ss>>temp;
		sum = sum+temp;
		cout<<"Sum = "<<sum<<"\n";
	}
	return 0;
}
