#include<iostream>
using namespace std;

void subString(string str) {
	int i,j,k;
	for(k=0; k<str.length(); k++)
	{
		for(i=k; i<str.length(); i++)
		{
			for(j=k; j<=i; j++)
			{
				cout<<str[j];
			}
			cout<<"\n";
		}
	}
}

void subStringOptimize(string str) {
	int i,j;
	for(i=0; i<str.length(); i++) {
		for(j=1; i+j<=str.length(); j++) {
			cout<<str.substr(i, j)<<"\n";
		}
	}
}

int main() {
	string str;
	cin>>str;
	//subString(str);
	subStringOptimize(str);
	return 0;
}
