#include<iostream>
#include<map>
using namespace std;

int firstUniChr(string str) {
	map<char,int> mylist;
	for(int i=0; i<str.length(); i++) {
		mylist[str[i]]++;
		break;
	}
	map<char,int> :: iterator it = mylist.begin();
	while(it != mylist.end()) {
		cout<<it->first<<" "<<it->second<<"\n";
		it++;
	}
}

int main() {
	string str;
	cin>>str;
	firstUniChr(str);
	return 0;
}
