#include<iostream>
using namespace std;

int findMax(int ary[], int s, int k){
	int max = ary[s];
	int idx = s; s++;
	for(int i=1; i<=k; i++){
		if(ary[s] > max){
			max = ary[i];
			idx = s;
		}
	}
	return idx;
}

int main(){
	int t,n,k,idx,sum, s, ans;
	cin>>t;
	while(t--){
		cin>>n>>k;
		sum = s = ans = 0;
		int w[n], t[n];
		for(int i=0; i<n; i++) cin>>w[i];
		for(int i=0; i<n; i++) cin>>t[i];
		
		for(int i=0; i<n; i++){
			s = i;
			while(s+k < n){
				idx = findMax(w, s, k);
				sum += t[idx];
				s++;
			}
			if(sum > ans) ans = sum;
		}
		
		cout<<ans<<"\n";
	}
	return 0;
}
