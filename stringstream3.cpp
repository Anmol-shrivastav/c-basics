//stringstream 3
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
int main()
{
	string str,temp,substr;
	getline(cin,str);
	stringstream s(str);
	vector <string> str1;
	while(s.good())
	{
		getline(s, temp, ','); //store breaked s into temp but before ,
		str1.push_back(temp);
	}
	for(int i=0; i<str1.size(); i++)
	{
		cout<<str1[i]<<"\n";
	}
	return 0;
}
