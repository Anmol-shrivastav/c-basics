#include<iostream>
using namespace std;

bool Plaindrom(string str) {
	int i = 0;
	int j = str.length() - 1;
	while(i < j) {
		if(str[i++] != str[j--])   return false;
	}
	return true;
}

int main() {
	string str;
	cin>>str;
	if(Plaindrom(str)) 
	   cout<<"Yes";
	else 
	   cout<<"No";
	return 0;
}
