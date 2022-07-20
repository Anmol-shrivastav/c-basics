#include<iostream>
using namespace std;
void solve(){
	int n;
	cin>>n;
	int come[n], leave[n];
	int currGuest = 0, maxGuest = 0;
	for(int i=0; i<n; i++){
		cin>>come[i];
	}
	for(int i=0; i<n; i++){
		cin>>leave[i];
	}
	
	//=============================================
	for(int i=0; i<n; i++){
		currGuest += come[i] - leave[i];
		maxGuest = currGuest > maxGuest ? currGuest : maxGuest;
	}
	
	cout<<maxGuest<<"\n";
}
int main(){
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
