//stringstream 2
#include<iostream>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string str,temp;
	getline(cin,str);
	stringstream s(str);    // s is just object 
	vector <string> str1;
	while(s >> temp)               // rum the loop when breaked string comes in temp variable
	{
		str1.push_back(temp);
	}
	for(int i=0; i<str1.size(); i++)
	{
		cout<<str1[i]<<"\n";
	}
	return 0;
}
