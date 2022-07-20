#include<iostream>
using namespace std;
void solve(){
	string str;
	int l, j = 0, count = 0, ans = 0;
	cin>>str>>l;
	for(int i=0; i<str.length(); i++){
		
		if(str[i] == 'a'){
			count++;
			if(count > ans)
				ans = count;
		}
		
		if(i+1 == l){
			j = 0;
			count = 0;
		}else{
			j++;
		}
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

//aabbbaaabb
