#include<iostream>
#include<ios>
#include<limits>
#include<string>
using namespace std;
int main(){
	int n,k;
	char code[27] = {'0','Z','Y','X','W','V','U','T','S','R','Q','P','O','N','M','L','K','J','I','H','G','F','E','D','C','B','A'};
	cin>>n;
	cin.ignore(numeric_limits<streamsize>::max(),'\n'); 
	while(n--){
		string str,temp="",ans="";
		getline(cin,str);
		for(int i=0; i<str.length(); i++){
			if(str[i] != ' '){
				temp += str[i];
			} else {
				int idx = stoi(temp);
				temp = "";
				ans += code[idx];
				cout<<ans;
				ans = "";
			}
		}
		int idx = stoi(temp);
		temp = "";
	    ans += code[idx];
		cout<<ans;
		ans = "";
		cout<<" "
	}
	return 0;
}
