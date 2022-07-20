#include<iostream>
using namespace std;

void printPermutation(string str,string ans,int n){
	if(str.length() == 0){
		cout<<"["<<ans<<"]"<<", ";
		return;
	}
	for(int i=0; i<str.length(); i++){
		char selected = str[i];
		string left = str.substr(0,i);
		string right = str.substr(i+1,n-i+1);
		string ros = left + right;
		printPermutation(ros,ans+selected,n);
	}
}

int main(){
	string str;
	cin>>str;
	cout<<"[";
	printPermutation(str,"",str.length());
	cout<<"]";
	return 0;
}
