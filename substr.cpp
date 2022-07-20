#include<iostream>
using namespace std;
int main()
{
	int i;
	string str = "  0000000000012345678";
	for(i=0; i<str.length(); i++)
	{
		if(str[i] >= '1' && str[i] <= '9')
		break;
	}
	string newstring = str.substr(i,str.length());
	cout<<newstring;
	return 0;
}
