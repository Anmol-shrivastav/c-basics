#include<iostream>
using namespace std;

void division3(int k, int d, int p){
	if(p < k){
		cout<<0<<"\n";
	} else {
		int day = p / k;
		if(day > d) {
			cout<<d<<"\n";
		} else {
			cout<<day<<"\n";
		}
	}
}

int main(){
	int t,n,k,d,p=0,temp;
	cin>>t;
	while(t--){
		cin>>n>>k>>d;
		while(n--){
			cin>>temp;
			p = p + temp;
		}
		division3(k,d,p);
		p = 0;
	}
	return 0;
}
