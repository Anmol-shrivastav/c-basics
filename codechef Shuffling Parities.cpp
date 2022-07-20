#include<iostream>
using namespace std;

void permutations(string que, string ans){
	
	for(int i=0; i<que.length(); i++){
		ans += que[i];
		string roq = que.substr(1,que.length());
		 
	}
}

int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int ary[n];
		string str = "";
		for(int i=0; i<n; i++){
			cin>>ary[i];
			str += ary[i] + '0';
		}
		
		permutations(str, "");
		
	}
	return 0;
}
