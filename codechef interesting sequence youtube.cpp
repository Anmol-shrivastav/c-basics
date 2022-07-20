#include<iostream>
using namespace std;
int main(){
	int n = 4e6+5;
	int seq[n],ans[n] = {0};
	for(int i=0; i<n; i++){
		seq[i] = i;
	}
	for(int i=2; i<n; i++){
		if(seq[i] == i){
			seq[i] = i-1;
			for(int j=2*i; j<n; j+=i)
				seq[j] = (seq[j]/i) * (i-1);
		}
	}
	for(int i=1; i<n; i++){
		ans[i] += i-1;
		for(int j=2*i; j<n; j+=i){
			ans[j] += i * ( (1+seq[j/i]) / 2);
		}
	}
	int t;
	cin>>t;
	while(t--){
		int k;
		cin>>k;
		cout<<ans[4*k+1]<<"\n";
	}
	return 0;
}
