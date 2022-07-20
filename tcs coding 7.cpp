#include<iostream>
using namespace std;
void solve(){
	int n;
	string str = "", ans;
	char ch,temp;
	cin>>str;
	for(int i=0; i<str.length(); i++){
		ch = str[i];
		n = ch - 'a';
		n += 5;
		n %= 26;
		temp = 'a' + n;
		ans += temp; 
	}
	cout<<ans<<"\n";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
