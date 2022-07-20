#include<iostream>
#include<vector>
using namespace std;

vector<int> myElement(string str, char element) {
	vector <int> index;
	for(int i=0; i<str.length(); i++) {
		if(str[i] == element) {
			index.push_back(i);
		}
	}
	return index;
}

vector<string> subString(string str) {
	vector<string> ary;
	ary.push_back("");
	for(int i=0; i<str.length(); i++) {
		char temp = str[i];
		for(int j=0; j<ary.size(); j++) {
			ary.push_back(ary[j] + temp);
		}
	}
	return ary;
}

int main() {
	string str;
	/*char element;
	cin>>str>>element;
	vector<int> ary = myElement(str,element);
	for(int i=0; i<ary.size(); i++)
	{
		cout<<ary[i]<<"\n";
	}*/
	cin>>str;
	vector<string> ary = subString(str);
	for(int i=0; i<ary.size(); i++) cout<<ary[i]<<"\n";
	return 0;
}
