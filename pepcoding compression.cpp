#include<iostream>
#include<vector>
#include<map>
using namespace std;

void Encryption1(string str) {
	int i,count,j;
	string ci;
	for(i=0; i<str.length(); i++) {
		count = 1;
		ci = str[i];
		j = i + 1;
		while(j<str.length() && str[j]==str[i]) {
			count++;
			j++;
		}
		cout<<ci<<count<<" ";
		i = j-1;
	}
}

void Encryption2(string str) {
	int i;
	char temp;
	map<char, int> mylist;
	for(i=0; i<str.length(); i++){
		temp = str[i];
		mylist[temp]++;
	}
	map<char, int>::iterator itr;
	for(itr = mylist.begin(); itr!=mylist.end(); itr++)
	{
		cout<<itr->first<<itr->second<<" ";
	}
}

int main()
{
	string str;
	cin>>str;
	Encryption1(str);
	cout<<"\n";
	Encryption2(str);
	return 0;
}
