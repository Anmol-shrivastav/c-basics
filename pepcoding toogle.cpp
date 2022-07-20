#include<iostream>
#include<vector>
using namespace std;

void toggle(string str) {
	int i;
	for(i=0; i<str.length(); i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]= str[i] - 'a' + 'A'; 
		}
		else 
		{
			str[i] = str[i] - 'A' + 'a';
		}
	}
	cout<<str;
}

int main()
{
	string str;
	cin>>str;
	toggle(str);
	return 0;
}
