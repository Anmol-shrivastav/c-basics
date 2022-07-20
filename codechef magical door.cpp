#include<iostream>
using namespace std;
int main(){
	int t, ans;
	string str;
	cin>>t;
	while(t--){
		ans = 0;
		cin>>str;
		char curr = '1';
		for(int i=0; i<str.length(); i++){
			if(str[i] != curr){
				ans++;
				curr = str[i];
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
