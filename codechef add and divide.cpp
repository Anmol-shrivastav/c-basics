#include<iostream>
using namespace std;
int main(){
	int t,a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		if(b*b % a == 0) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
	return 0;
}
